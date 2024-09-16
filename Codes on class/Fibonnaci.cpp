#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto where you want a Fibonnaci series : "<<endl;
    cin>>n;
    int n1=0,n2=1,n3;
    int i;
    n1==0?cout<<n1<<" "<<n2<<" ":cout<<0;
    for(i=2;i<n;i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    cout<<endl;
    return 0;
}