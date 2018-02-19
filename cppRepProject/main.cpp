#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    int number1
    number1 = readNumber();
    cout << "a number entered" <<  endl;


    return 0;

}

int readNumber()
{
    cout << "gimme number ";
    int number;

    cin >> number;
    return number;
}
