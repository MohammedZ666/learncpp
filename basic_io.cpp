#include <stdio.h>
#include <iostream> // this is for cout, cin
#include <string>   // this is for string
using namespace std;

int main()
{
    // === input ===
    // take a integer
    int a;
    cout << "Integer dao \n";
    cin >> a;

    // take a double
    double b;
    cout << "Double dao \n";
    cin >> b;

    // take a string
    string str;
    cout << "String dao \n";
    cin >> str;

    cout << "\n\n\n";

    // == output ==
    // print int
    cout
        << "Integer ->" << a << "\n";

    // pring double
    cout
        << "Double ->" << b << "\n";

    // print string
    cout << "String ->" << str << "\n";

    // Please note that << between a and \n is like the concatenation operator.
    // We can also do this ...
    cout << "Amar"
         << "Shonar"
         << "Bangla" << str << a << "\n ";
    return 0;
}