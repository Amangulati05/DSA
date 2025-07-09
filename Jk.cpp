#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printcountdigits(int n){
    int sum = 0;
    int revNum = 0;
     while(n>0){
        int ld =n%10;
        sum = sum+(ld*ld*ld);
        n=n/10;
     }
     
     if(revNum ==sum){
        cout<<"It is an armstrong no";

     }
     else{
        cout<<"it is not a armstrong no";
     }
    
}
   



int main(){
    int n;
    cin>>n;
    printcountdigits(n);
}