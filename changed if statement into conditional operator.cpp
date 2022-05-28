/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int res;
    char ans;
    
    cout << "Which course will you choose?\n";
    cout << "Enter the integer.\n";
    
    cin >> res;
    
    ans = (res==1) ? 'A':'B';
        
    cout << ans << "\nYou chose the course.\n";
    
    return 0;
}
