// Differences between int, long, long long, and short:
    // Different in size compiler dependent
    // short <= int <= long <= long long in size
// float and double
    // Different size, float < double < long double

// rate, principal and payments: float or double, decimal values -> float point types

#include <iostream>
#include <cmath>

int main() {
    // for (unsigned u = 10; u >= 0; --u) {
    //     std::cout << u << std::endl;
    // }
    // Above code never ends
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << " equal to " << (long)std::pow(2, 32) - 32 << std::endl; // -32 wrapped to 2*32 - 32

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32

    std::cout << i - u << std::endl; // 0
    std::cout << u - i << std::endl; // 0

    // 2.7
    std::cout << "Who goes with F\145rgus?\012" << std::endl;

    // 2.8
    std::cout << "\062\115\10" << std::endl;
    std::cout << "\062\011\115\10" << std::endl;

}

// 2.5
/*
a character literal, wide character literal, string literal, string wide character literal.
b decimal, unsigned decimal, long decimal, unsigned long decimal, octal, hexadecimal
c double, float, long double
d int, unsigned int, double, double
*/

// 2.6
/*
int month = 9, day = 7; decimal
int month = 09, day = 07; octal, but the first is wrong, since 7 is the largest in octal digit
*/

// 2.7
/*
(a) "Who goes with F\145rgus?\012", "Who goes with Frgus?\n"
(b) 3.14e1L long double
(c) 1024f Error, f is only for floating-point literals
(d) 3.14L long double

*/
