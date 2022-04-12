#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "--------Welcome to the Calculation--------" << endl;   
    cout << "Addition" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square of the Number"<<endl;
    cout << "6. Exit the Calculator"<<endl<<endl;
    cout << "-:Select the  Operation to perform :-" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "The choosed Operation is addition" <<endl<< "Enter the Numbers :" << endl;
        cin >> b >> c;
        cout << "The sum is " << b + c;
        break;

    case 2:
        cout << "The choosed Operation is substraction" << endl;
        cout << "Enter the Numbers :" << endl;
cin >> b >> c;
        cout << "The substraction is " << (b - c);
        break;

    case 3:
        cout << "The choosed Operation is multiplication" << endl;
        cout << "Enter the Numbers :" << endl;
cin >> b >> c;
        cout << "The substraction is " << (b * c);
        break;

    case 4:
        cout << "The choosed Operation is division" << endl;
        cout << "Enter the Numbers :" << endl;
cin >> b >> c;
        cout << "The division is " << (b / c);
        break;

    case 5:
        cout << "The choosed Operation is Square of th egiven numbers" << endl;
        cout << "Enter the Number :" << endl;
cin >> b ;
        cout << "The square of the number  is " << (b * b);
        break;
    case 6:
       
        cout << "...........Exiting Calculator........";
        break;
        default:
        cout << "Error Occured!!!!!!!!!!!";
        break;
    }
    return 0;
}
