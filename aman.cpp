#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
 int cnt =0;
 void print(int n){
    if(cnt>n)return ;
        cout<<cnt<<endl;
        cnt++;
     
     
        
    
       print(n);
    
    
 }
 int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
 }
