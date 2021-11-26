#include<iostream>
using namespace std;

int main(){
    int N = 1 ;
    int Even = 0 ;
    int Odd = 0 ;
    while (N != 0)
    {
    cout << "Enter an integer: ";
    cin >> N ;
    if (N%2 == 0)
    {
        Even += 1 ;
    }else {
        Odd += 1 ;
    }
    
    }
    
    cout << "#Even numbers = " << Even-1 ;
    cout << "\n#Odd numbers = " << Odd ;
    return 0;
}
