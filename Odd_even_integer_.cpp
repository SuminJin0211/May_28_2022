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
    
    cout << "Enter the integer\n";
    
    cin >> num;
    
    if (num%2==0)
    {
        cout << num <<" is even num\n";
    }
    
    else
    {
        cout << num << " is odd num\n";
    }
    
    return 0;
}
