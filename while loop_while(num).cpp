/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num =1;
    
    while(num){
        cout << "Enter the integer. If 0 is entered, the loop will be ended.\n";
        cin >> num;
        cout << num << " is entered.\n";
    }
    
    cout << " The loop is ended.\n";
    
    return 0;
}
