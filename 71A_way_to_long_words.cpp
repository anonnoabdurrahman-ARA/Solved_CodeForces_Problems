#include<iostream>
#include<cstring>
using namespace std;
    int main(){
        int n;
        cin>>n;
        char word[101];
        for (int i = 0; i < n; i++) {
            cin>>word;
            int len = strlen(word);
            if (len <= 10){
                cout<<word<<endl;
            }
            else{
                cout<<word[0]<<len-2<<word[len-1]<<endl;
            }
        }
return 0;
}