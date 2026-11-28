#include<iostream>
using namespace std;
int main(){
    int n,x,y,movs;
    for(int i=1;i<=5;i++){
        for(int j=1; j<=5; j++){
            cin>>n;
            if(n==1){
                x=i;
                y=j;
            }
        }
    }
    x=abs(3-x);
    y=abs(3-y);
 
    movs = x+y;
    cout<<movs;
return 0;
}