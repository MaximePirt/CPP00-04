#include <iostream>
#include "Fixed.hpp"

int main() {
    std::cout << "========== TEST DES CONSTRUCTEURS ==========" << std::endl;
    Fixed a;
    Fixed  b(10);
    Fixed  c(42.42f);
    Fixed  d(b);
    a = Fixed(1234.4321f);

    std::cout << "\n========== TEST DE L'AFFICHAGE ==========" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n========== TEST DE LA CONVERSION ==========" << std::endl;
    std::cout << "a en int: " << a.toInt() << std::endl;
    std::cout << "b en int: " << b.toInt() << std::endl;
    std::cout << "c en int: " << c.toInt() << std::endl;
    std::cout << "d en int: " << d.toInt() << std::endl;

    std::cout << "\n========== TEST DES COMPARAISONS ==========" << std::endl;
    std::cout << "b > c : " << (b > c) << std::endl;
    std::cout << "b < c : " << (b < c) << std::endl;
    std::cout << "b >= d : " << (b >= d) << std::endl;
    std::cout << "b <= d : " << (b <= d) << std::endl;
    std::cout << "b == d : " << (b == d) << std::endl;
    std::cout << "b != d : " << (b != d) << std::endl;

    std::cout << "\n========== TEST DES OPERATEURS ARITHMETIQUES ==========" << std::endl;
    Fixed e = b + c;
    Fixed f = c - b;
    Fixed g = b * c;
    Fixed h = c / b;

    std::cout << "b + c = " << e << std::endl;
    std::cout << "c - b = " << f << std::endl;
    std::cout << "b * c = " << g << std::endl;
    std::cout << "c / b = " << h << std::endl;

    std::cout << "\n========== TEST DE L'INCREMENTATION ET DECREMENTATION ==========" << std::endl;
    Fixed i;
    std::cout << "i initial: " << i << std::endl;
    std::cout << "Pre-increment: " << ++i << std::endl;
    std::cout << "Post-increment: " << i++ << std::endl;
    std::cout << "Après post-increment: " << i << std::endl;
    std::cout << "Pre-decrement: " << --i << std::endl;
    std::cout << "Post-decrement: " << i-- << std::endl;
    std::cout << "Après post-decrement: " << i << std::endl;

    std::cout << "\n========== TEST DES FONCTIONS MIN ET MAX ==========" << std::endl;
    std::cout << "Min entre b et c: " << Fixed::min(b, c) << std::endl;
    std::cout << "Max entre b et c: " << Fixed::max(b, c) << std::endl;

    std::cout << "\n========== TEST DES EXTREMES ET VALEURS NEGATIVES ==========" << std::endl;
    Fixed neg1(-42.42f);
    Fixed neg2(-10);
    std::cout << "neg1: " << neg1 << std::endl;
    std::cout << "neg2: " << neg2 << std::endl;
    std::cout << "neg1 + neg2 = " << (neg1 + neg2) << std::endl;
    std::cout << "neg1 - neg2 = " << (neg1 - neg2) << std::endl;
    std::cout << "neg1 * neg2 = " << (neg1 * neg2) << std::endl;
    std::cout << "neg1 / neg2 = " << (neg1 / neg2) << std::endl;

    return 0;
}
