#include<iostream>
using namespace std;
int  main(){
    int n,sum=0;
    cin>>n;
    while(n!=0){
        int a=n%10;
         n=n/10;
         sum=sum*10+a;
    }
    cout<<"Sum is "<<" "<<sum<<endl;
}