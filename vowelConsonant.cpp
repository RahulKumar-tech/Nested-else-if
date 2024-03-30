//Q) WAP to check whether a given character is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character : ";
    char ch;
    cin>>ch;
   // Typecasting revised
   // cout<<(int)ch; --> a --> 97

   // a to z -> 97 to 122
   // A to z -> 65 to 90
   // 0 to 9 -> 48 to 57
   int ascii = (int)ch;
   if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch =='u' ){
              cout<<"The character is a vowel ";
        }
        else{
              cout<<"The character is a consonant";
        }
   }
   else{
    cout<<" The character is not an alphabet";
   }
}