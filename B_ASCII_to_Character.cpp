#include<iostream>
using namespace std;

int main(){
  char c;
  cin>>c;
  //For lowercase
  if(c>=97 && c<=122){
    cout<<"Lowercase";
  }
  //for Uppercase
  else if(c>=65 && c<=90){
    cout<<"Uppercase";
  }
  //for numeric
  else if(c>=48 && c<=57){
    cout<<"Numeric";
  }
  //Special Character
  else if((c>=32 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126)){
    cout<<"Special Character";
  }
}