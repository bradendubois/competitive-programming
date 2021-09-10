fn is_prime(x: u64) -> bool {

    // don't need to check if < 0 in this case
    if x <= 3 {
        return true;
    } else if x % 2 == 0 || x % 3 == 0 {
        return false;
    }

    for i in (5..((x as f64).sqrt() as u64)).step_by(6) {
        if x % i == 0 || x % (i + 2) == 0 {
            return false;
        }
    }

    true
}

fn divisors(x: u64) -> Vec<u64> {

    let root = (x as f64).sqrt() as u64;
    let mut vec: Vec<u64> = Vec::new();

    for i in 1..root {

        if x % i == 0 {

            vec.push(i);

            if x / i != i {
                vec.push(x / i);
            }
        }
    }

    vec
}

fn main() {

    let mut d = divisors(600851475143);
    d.sort();
    d.reverse();

    for x in d {
        println!("{:?} {}", x, is_prime(x));
    }
}
