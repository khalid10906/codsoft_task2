// C++ program to create SIMPLE CALCULATOR
#include <iostream>
using namespace std;
int main()
{
    float n, m;                          // declaration of two number
    char ch;                             // declaration of operator
    cout << "Enter two number " << endl; // asking user for input
    cin >> n >> m;
    cout << "Enter operator which you want to perform(eg: +,-,*,/)" << endl; // asking user for operator
    cin >> ch;
    int result; // declaration of output
                //  Switch statement begins
    switch (ch)
    {
        // If user enter +
    case '+':
    {
        result = n + m;
        cout << "addition of " << n << " and " << m << " is : " << result;
        break;
    }
        // If user enter -
    case '-':
    {
        result = n - m;
        cout << "subtraction of " << n << " and " << m << " is : " << result;
        break;
    }
        // If user enter *
    case '*':
    {
        result = n * m;
        cout << "multiplication of " << n << " and " << m << " is : " << result;
        break;
    }
        // If user enter /
    case '/':
    {
        result = n / m;
        cout << "division of " << n << " by " << m << " is : " << result;
        break;
    }
        // If the operator is other than +, -, * or /,
        // error message will display
    default:
        cout << "Error! Choose correct operator" << endl;
    } // switch statement ends
    return 0;
}