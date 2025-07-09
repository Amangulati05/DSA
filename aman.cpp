#include<bits/stdc++.h>
using namespace std;

           
            
            void print(int n) { 
                for(int i = 0; i <= 1; i++) { 
                    for(int j = 0; j < 2*n - (2*i + 1); j++) { 
                        cout << "*"; 
                    } 
                    for(int j = 0; j < i; j++) { 
                        cout << " "; 
                    } 
                    cout << endl; 
                } 
            }  
            
            int main() { 
                int t; 
                cin>>t; 
                for(int i = 0; i < t; i++) { // Fixed loop syntax
                    int n; 
                    cin>>n; 
                    print(n); 
                } 
                return 0; // Added return statement for correct execution
            }
    
