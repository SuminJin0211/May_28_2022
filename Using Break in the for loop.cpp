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
    
    cout << "When will you break the loop? (1~10)\n";
    
    cin >> res;
    
    for (int i=1; i<=10; i++){
        cout << "It is repeated "<< i << " times.\n";
        if(i==res)
        break;
    }
    
    return 0;
}
