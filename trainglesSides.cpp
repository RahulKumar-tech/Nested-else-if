#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 1st side : ";
    cin>>a;
    cout<<"Enter the 2nd side : ";
    cin>>b;
    cout<<"Enter the 3rd side : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        //cout<<"Sides of traingle";
        cout<<a<<","<<b<<","<<c<<"can be the sides of the triangle";
    }
    else{
        cout<<"Invalid traingle";
    }
}
