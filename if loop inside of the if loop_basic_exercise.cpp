/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int ch =0;
    
    for (int i=0; i<5; i++){
        for ( int j=0; j<5; j++){
            if(ch==0){
                cout << '*';
                ch=1;
            }
            else{
                cout << '-';
                ch=0;
            }
        }
        cout << "\n";
    }
    return 0;
}
