use std::num::sqrt;

fn is_prime(num: i64) -> i64 {
	for x in range(2i64, sqrt(num as f64) as i64 +1i64) {
		if num % x == 0 {
			return x
		}
	}
	return 0i64
}

fn main() {
	let a = 100000i64;
	// let mut b = ~[0i64];

	for num in range(a, a + 100000i64) {
		let c = is_prime(num*num - num + 37);
			// let mut already_counted = false;
			// for x in b.iter() {
			// 	if x == &c {
			// 		already_counted = true;
			// 	}
			// }
			// if already_counted == false {
				// b.push(c);
			// }
		if c > 1000 {
			println(format!("{:?}", c));
		}
	}
	// println(format!("{:?}", b));
}