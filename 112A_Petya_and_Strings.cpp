#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s1,s2;
    bool difference = false;
    cin>> s1 >> s2;
    int l = s1.length();

    for (int i = 0; i < l; i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        
    }

    for (int i = 0; i <l; i++)
    {
        if (s1[i]<s2[i])
        {
            cout<<"-1";
            difference= true;
            break;
        }
        else if (s1[i]>s2[i])
        {
            cout<<"1";
            difference= true;
            break;
        }
    }
    if (difference == false)
    {
        cout<<"0";
    }

    return 0;
}