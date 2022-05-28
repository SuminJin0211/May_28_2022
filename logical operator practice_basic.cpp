/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char res;
    
    cout << "Are you a male?\n";
    cout << "Enter Y or N\n";
    
    cin >> res;
    
    if(res == 'Y' || res == 'y'){
        cout << "You are a male.\n";
    }
    else if (res == 'N' || res == 'n'){
        cout << "You are a female.\n";
    }
    else {
        cout << "Enter Y or N.\n";
    }
    return 0;
}
