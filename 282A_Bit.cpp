#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n,x=0;
    char arr[10];

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr;

        if(strcmp(arr,"X++")==0)
            x++;
        else if(strcmp(arr,"++X")==0)
            ++x;
        else if(strcmp(arr,"X--")==0)
            x--;
        else if(strcmp(arr,"--X")==0)
            --x;
    }

    cout << x;
    return 0;
}