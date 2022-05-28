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
    
    cout << "Entered the integer. (1~5)\n";
    
    cin >> res;
    
    switch(res){
        
        case 1:
        case 2:
            cout << "Let's keep it up!\n";
            break;
        case 3:
        case 4:
            cout << "Let's grind this exam!\n";
            break;
        case 5:
            cout << "Excellent!\n";
            break;
            defalut:
            cout << "Entered the grade 1 to 5\n";
            break;
    }
   
    return 0;
}
