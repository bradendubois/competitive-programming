fn palindrome(x: u64) -> bool {

    let s = x.to_string();
    let r = s.chars().rev().collect::<String>();

    s == r
}

fn main() {

    let mut l = 0;

    for a in 1..1000 {
        for b in 1..1000 {

            let product = a * b;
            if palindrome(product) && product > l {
                l = product;
            }
        }
    }

    println!("{}", l);
}