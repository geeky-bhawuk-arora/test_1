#include <iostream>
using namespace std;

int main() {
    int ht_tree1,ht_tree2;

    cout<<"Enter the height of Tree 1 : ";
    cin>>ht_tree1;
    cout<<"\nEnter the height of Tree 2 : ";
    cin>>ht_tree2;

    if(ht_tree1 > ht_tree2)
        cout<<"\nHeight of Tree 1 is greater than Tree 2";
    else
        cout<<"\nHeight of Tree 2 is greater than Tree 1";
        
    return 0;
}