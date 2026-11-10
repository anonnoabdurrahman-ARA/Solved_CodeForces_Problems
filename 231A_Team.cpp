#include<iostream>
using namespace std;
    int main(){
        int count=0,n,a,b,c;
        cin>>n;
        for (int i = 0; i<n; i++)
        {
            cin>>a>>b>>c;
            if ((a+b+c)>=2)
            {
                count++;
            }
        }
        cout<<count;
return 0;
}