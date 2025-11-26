#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;
   
    cout << fixed << setprecision(3) << i << endl << l << endl << c << endl << f << endl << setprecision(9) << d << endl;
    return 0;
}