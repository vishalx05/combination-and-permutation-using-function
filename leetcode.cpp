#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}

int npr(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;

    }
    return f;
}

int main(){

   int n,r;
   cout<<"enter the n ";
   cin>>n;
   cout<<"enter the r ";
   cin>>r;

    int a=npr(n);
    int b=npr(n-r);

    cout<<a<<endl<<b<<endl;
    cout<<a/b;


    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);

    cout<<a/(b*c);










}
