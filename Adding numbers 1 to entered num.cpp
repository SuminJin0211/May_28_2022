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
    
    int sum=0;
    
    cout << "Add numbers til which?\n";
    
    cin >> num;
    
    for(int i=1;i<=num;i++){
        sum+= i;
    }
    
    cout << "Adding from 1 to "<<num<< " is "<<sum <<".";
    
    return 0;
}
