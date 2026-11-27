#include<iostream>
using namespace std;
int main(){
    int n,k,passed=0;
    cin>> n >>k;
    int arr[51];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0 && arr[i]>=arr[k-1])
        {
            passed++;
        }
    }
    cout<<passed;
    return 0;
}