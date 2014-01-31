/* * Rational Number Class Header File */

#ifndef RAT_H
#define RAT_H

#include <iostream>
using std::ostream;

class Rat {

    friend ostream& operator<<(ostream& out, const Rat& x);

    private:

        int n;
        int d;

        int abs(int x);                             // give abs value of a number
        int gcd(int a, int b);                      // returns the gcd of two integers

    public:

        Rat();                                     // default constructor
        Rat(int a, int b);                         // constructor that assigns numerator & denominator
        Rat(int a);                                // constructr that assigns a numerator

        void set(int a, int b);
        int numer()const;                           // returns numerator
        int denom()const;                           // returns denominator
        double evaluate()const;                      // returns (n / d)
        void print() const;				// prints the rational number

        Rat operator+(const Rat& x)const;           // addition operator
        Rat operator-(const Rat& x)const;           // subtraction operator
        Rat operator*(const Rat& x)const;           // mulitplication operator
        Rat operator/(const Rat& x)const;           // division operator
      //  Rat abs()const ;                            adsolute value
        bool operator<(const Rat& x)const;          // less than operator
};


#endif
