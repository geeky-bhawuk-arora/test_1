#include <iostream>
using namespace std;

int main() {
    int n_candy,n_friends;

    cout<<"Enter the total candies : ";
    cin>>n_candy;
    cout<<"\nEnter the total friends : ";
    cin>>n_friends;

    cout<<"\nEach friend will get "<<n_candy/n_friends<<" candies";

    return 0;
}