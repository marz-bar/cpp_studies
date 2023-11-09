#include <iostream>
#include <cmath>

int main()
{

	double weight{7.7};

	// Floor
	std::cout << "Weight rounded to floor(down) is " << std::floor(weight) << std::endl;

	// Ceil
	std::cout << "Weight rounded to ciel(up) is " << std::ceil(weight) << std::endl;

	// Abs
	double savings{-5000};

	std::cout << "Abs of weight is " << std::abs(weight) << std::endl;
	std::cout << "Abs of savings is " << std::abs(savings) << std::endl;

	// exp
	double exponetials = std::exp(10);
	std::cout << "The exponential of 10 is : " << exponetials << std::endl;

	// pow
	std::cout << "3^4 is : " << std::pow(3, 4) << std::endl;
	std::cout << "9^3 is : " << std::pow(9, 3) << std::endl;
	std::cout << "2^3 is : " << std::pow(2, 3) << std::endl;

	// log: reverse function of pow. If 2^3 = 8, log 8 in base 2 = 3. Log is like  asking
	//  to which exponent should we elevate 2 to get 8? Log, by default computs the log
	//  in base e. There is also another function which uses base 10 called log10.

	// Try to reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?
	std::cout << "Log; to get 54.59, you would elevate e to the power of : "
			  << std::log(54.59) << std::endl;

	// log10, 10^4 = 10000, to get 10k, you'd need to elevate 10 to the power of ?, this is
	//  log in base 10
	std::cout << "To get 10000, you'd ned to elevate 10 to the power of : "
			  << std::log10(10000) << std::endl;

	// sqrt
	std::cout << "The square root of 81 is: " << std::sqrt(81) << std::endl;

	// round - Halfway points are rounded away from 0.
	// 2.5 is rounded to 5 for example
	std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
	std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
	std::cout << "2.4 rounded to : " << std::round(2.4) << std::endl;

	return 0;
}