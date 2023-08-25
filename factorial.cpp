#include <iostream>
using namespace std;

int main() {
    int num,fact=1,i;

    cout<<"Enter a Number : ";
    cin>>num;

    for(i=1;i<=num;i++){
        fact=fact*i;
    }

    cout<<"\nFactorial of "<<num<<" is "<<fact;

    return 0;
}