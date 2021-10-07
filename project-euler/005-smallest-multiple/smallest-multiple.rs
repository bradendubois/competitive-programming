fn main() {

    let mut i = 20;

    let values = [20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 7];

    'main: loop {

        for value in values.iter() {
            if i % value != 0 {
                i += 20;
                continue 'main;
            } 
        }

        break;
    }


    println!("{}", i);
}
