#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n ){
    if(n==0||n==1) return false;
    for(int i =2; i*i<n; i++){
        if(n%i ==0)return false;
    }
    return true;
}


void printFactor(int n ){
    for(int i =1; i<n; i++){
        if(n%i ==0){
            cout<<i<<" ";
            if(i != (n/i)){
                cout<<n/i<<" ";
            }
        }
    }
    
}



int main()
{
    int n; cin>>n;

    if(isPrime(n)){
        cout<<"Is Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }

    printFactor(n);
    
 
    return 0;
}