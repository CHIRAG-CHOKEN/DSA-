#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch= 'A'+n-i+j-1;               
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;


    }
}

// mmethod 2
// char ch = 'A' +n-row
// cout<<ch;
// ch=ch+1;