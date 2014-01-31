#include "rat.h"
#include <iostream>
using std::cout;
using std::ostream;


int Rat::abs(int x) {

    if (x >= 0)
        return x;
    else
        return -x;
    // end if
}

int Rat::gcd(int a, int b) {
    //assume both a and b are positive
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    } // end while

    return a;
}

void Rat::set(int a, int b) {

    int c = gcd(abs(a), abs(b)); //better to call once

    n = a/c;
    d = b/c;
//make sure d is positive

    if (d < 0) {
        n = -n;
        d = -d;
    } // end if

}

Rat::Rat() {

    set(1, 0);
}

Rat::Rat(int a, int b) {

    set(a, b);
}

Rat::Rat(int a) {

    set(a, 1);
}


int Rat::numer() const {

    return n;
}

int Rat::denom() const {

    return d;
}

double Rat::evaluate() const {

    return (n + 0.0)/d; //better than (double)n/d;
}

void Rat::print() const {

 cout << x.numer() << '/' << x.denom() << "\n";
}

Rat Rat::operator+(const Rat& x) const {

    return Rat(n * x.d + d * x.n, d * x.d);
}

Rat Rat::operator-(const Rat& x) const {

    return Rat(n * x.d - d * x.n, d * x.d);
}

Rat Rat::operator*(const Rat& x) const {

    return Rat(n * x.n, d * x.d);
}

Rat Rat::operator/(const Rat& x) const {

    return Rat(n * x.d, d * x.n);
}

/*
Rat Rat::abs() const {

    return Rat(Rat::abs(n), d); //:: to access abs in outer scope
}
*/

bool Rat::operator<(const Rat& x)const {

    return (n * x.d  < d * x.n); //works because d is always positive
}

ostream& operator<<(ostream & s, const Rat & x) {

   x.print();
}
