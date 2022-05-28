/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int grade;
    
    cout << "Enter the grade between 1 and 5\n";
    
    cin >> grade;
    
    cout << " The grade is " << grade;
    
    switch(grade){
        case 1 :
        cout << "The gradie is 1.\n";
        
        break;
        
        case 2 : 
        cout << "The grade is 2.\n";
        break;
        
        case 3 : 
        cout << " The grade is 3.\n";
        break;
        
        case 4 : 
        cout << " The grade is 4.\n";
        break;
        
        case 5 :
        cout << " The grade is 5.\n";
        break;
    }
    
    
    
    
    return 0;
}
