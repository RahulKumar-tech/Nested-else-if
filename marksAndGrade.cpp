// Nested if-else

//Q) Take input marks of a student snd print the grade cording to marks.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"Excellent";
    // }
    //  if(n>=81 && n<=90){
    //     cout<<"Very Good";
    // }
    //  if(n>=71 && n<=80){
    //     cout<<"Good";
    // }
    //  if(n>=61 && n<=70){
    //     cout<<"Can do better";
    // }
    //  if(n>=51 && n<=60){
    //     cout<<"Average";
    // }
    //  if(n>=40 && n<=50){
    //     cout<<"Below";
    // }
    //  if(n<40){
    //     cout<<"fail";
    // }

// Below is another method to print it

    //  if(n>=91 && n<=100){
    //     cout<<"Excellent";
    //  }   
    //  else{
    //     if(n>=81){
    //         cout<<"Very Good"; 
    //     }
    //     else{
    //         if(n>=71){
    //              cout<<"Good";
    //         }
    //         else{
    //             if(n>=61){
    //                   cout<<"Can do better";
    //             }
    //             else{
    //                 if(n>=51){
    //                       cout<<"Average";
    //                 }
    //                 else{
    //                     if(n>=40){
    //                          cout<<"Below Average";
    //                     }
    //                     else{
    //                         cout<<"Fail";
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //  }
       
    if(n>=91 && n<=100){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"Very Good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"Can do it better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below Average";
    }
    else{
        cout<<"fail";
    }
}