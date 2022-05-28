/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i =1;
    
    do{
        cout << "It is repeated "<<i<< " times.\n";
        i++;
    }while(i <=5);
    
    cout << "The loop is ended.\n";
    
    return 0;
}
