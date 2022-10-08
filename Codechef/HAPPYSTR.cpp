#include <iostream>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--){

        

    

 string input;

 cin>>input;

 int count=0;

 for(int i=0;i<input.size();i++){

     if((input[i]=='a' ||input[i]=='e' ||input[i]=='i'||input[i]=='o'||input[i]=='u')&&(input[i+1]=='a' ||input[i+1]=='e' ||input[i+1]=='i'||input[i+1]=='o'||input[i+1]=='u')&&(input[i+2]=='a' ||input[i+2]=='e' ||input[i+2]=='i'||input[i+2]=='o'||input[i+2]=='u'))

 {     count++;

 

 

 }

//  else if((input[i]!='a' ||input[i]!='e' ||input[i]!='i'||input[i]!='o'||input[i]!='u')&&(input[i+1]!='a' ||input[i+1]!='e' ||input[i+1]!='i'||input[i+1]!='o'||input[i+1]!='u')&&(input[i+2]!='a' ||input[i+2]!='e' ||input[i+2]!='i'||input[i+2]!='o'||input[i+2]!='u'))

//  {

  

//  }

 

     

 }

 if(count>0){

     cout<<"Happy"<<endl;

 }

 else{

     cout<<"Sad"<<endl;

 }

}}
