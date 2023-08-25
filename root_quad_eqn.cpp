#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c,D;
    int x1,x2,real_part,img_part;
    
    cin>>a>>b>>c;

    cout<<"Quadratic Equation : "<<a<<"x^2 + "<<b<<"x + "<<c;
    D = ((pow(b,2)) - (4*a*c));
        

    if(D==0){
        x1 = (-b/(2*a));
        x2 = x1;
        cout<<"\nThe roots of the quadratic equation are real and equal i.e. "<<x1<<" and "<<x2;
    }
    else if(D>0){
        x1 = ((-b + sqrt(D)) / (2*a));
        x2 = ((-b - sqrt(D)) / (2*a));
        cout<<"\nThe roots of the quadratic equation are real and distinct i.e. "<<x1<<" and "<<x2;
    }
    else if(D<0){
        real_part = ((-b)/(2*a));
        img_part = ((sqrt(-(D)))/(2*a));
        cout<<"\nThe roots of the quadratic equation are imaginary i.e. "<<real_part<<" + "<<"i"<<img_part;
    }

    return 0;
}


        
