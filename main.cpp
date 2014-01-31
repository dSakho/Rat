#include "rat.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "**********Rational Numbers************\n\n";

    Rat x(2,3);
    Rat y(4,10);

    cout << x << '\n';
    cout << y << '\n';

    Rat z = x + y;

    cout << z << '\n';

    cout << z.evaluate() << '\n';

    Rat c = (20/10);
    Rat t = (45/60);

    Rat m = c - t;

    cout << m << '\n';

    return 0;
}
