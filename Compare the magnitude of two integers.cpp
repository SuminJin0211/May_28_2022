/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int num2;
    
    cout << "Enter two integers\n";
    
    cin >> num;
    cin >> num2;
    
    if (num == num2)
    {
        cout << "Two integers are same.";
    }
    
    else if (num > num2)
    {
        cout << num << " is larger than " << num2 ;
    }
    
    else 
    {
        cout << num2 << " is larger than " << num ;
    }
    
    return 0;
}
