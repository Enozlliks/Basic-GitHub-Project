#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int counter = 0;

    //Input
    cout << "Enter starting number: ";
    cin >> num1;
    cout << "Enter ending number: ";
    cin >> num2; 

    //Calculations
    if (num1 < num1)
    {
        if (num1 % 2 == 1)
        {
            num1 += 1;
        }

        for (counter = num1; counter <= num2; counter += 2)
        {
            sum += counter; 
        }
    }
    else
    {
        cout << endl << "Error: Starting number must be smaller than ending number!" << endl;
        system("pause");
        return 0;
    }

    //Display
    cout << endl << "Sum of Even Numbers Between " << num1 << ". . ." << num2 << " = " << sum << endl;
    system("pause");
    return 0;
}
