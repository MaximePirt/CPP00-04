#include <iostream>
#include "Fixed.hpp"



int main(void) {

    std::cout << "===== TEST BASIC CONSTRUCTORS AND ASSIGNMENTS =====" << std::endl;

    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "\n===== TEST VALUES (FLOAT DISPLAY) =====" << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\n===== TEST INTEGER CONVERSIONS =====" << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    std::cout << "\n===== TEST EDGE CASES =====" << std::endl;
    Fixed const e(-5.5f);
    Fixed const f(0);
    Fixed const g(0.00390625f);  // Smallest value for fractional_bit_number = 8
    Fixed const h(999999.99f);
    Fixed const i(-999999.99f);

    std::cout << "e (-5.5) is " << e << " | as integer: " << e.toInt() << std::endl;
    std::cout << "f (0) is " << f << " | as integer: " << f.toInt() << std::endl;
    std::cout << "g (0.00390625) is " << g << " | as integer: " << g.toInt() << std::endl;
    std::cout << "h (999999.99) is " << h << " | as integer: " << h.toInt() << std::endl;
    std::cout << "i (-999999.99) is " << i << " | as integer: " << i.toInt() << std::endl;

    return 0;
}
