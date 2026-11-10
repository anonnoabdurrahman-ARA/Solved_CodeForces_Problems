#include<iostream>
using namespace std;
    int main(){
        int n,a,b;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a>>b;
            if (b<=a && (a-b)%2==0)
            {
                cout<<a<<endl;
            }
            else if(b<=a+1){
                cout<<a+1<<endl;
            }
            else if (b>a+1)
            {
                cout<<"-1"<<endl;
            }
        }
        return 0;
    }