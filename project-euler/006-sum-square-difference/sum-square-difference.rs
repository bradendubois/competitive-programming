fn main() {

    let mut sum: i32 = 0;
    let mut square: i32 = 0;

    for i in 1..=100 {
        sum += i;
        square += i.pow(2);
    }

    println!("{}", square - sum.pow(2));

}
