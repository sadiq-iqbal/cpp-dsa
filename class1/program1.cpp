// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 // program to find whether a num is capital or small
 char ch;
 cout<<"enter the character: ";
 cin>>ch;
 
 if(ch>=97 && ch<=132){
    // implicit type coversion will make the char to int
     cout<<"small letter";
 }else if(ch>=65 && ch<=90){
     cout<<"the "<<ch<<" "<<"is a Capital letter";
 }
 else{
     // if the character is not a capital or small letter;
     // the programm will end up here in this block;
     cout<< "the letter is something else";
 }
    
    
    cout<<"end of the program";
  

    return 0;
}