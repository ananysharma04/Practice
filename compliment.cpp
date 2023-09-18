#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    if(n==0){
        cout<<1<<endl;
    }
    int mask=0;
    while(m!=0){
     mask=(mask<<1)|1;
    }
    int ans=(~n)&mask;
    cout<<ans<<endl;
}
