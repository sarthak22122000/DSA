#include<iostream>
#include<string>
//#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        int i=0;
        
        for(int j=0; j<s.length(); j++){
            
            if(s[j]==' '){
                reverse(s.begin()+i, s.begin()+j);
                i=j+1;
            }
        }
        reverse(s.begin()+i, s.end());
        return s;
    }
int main()
{
    string s="sarthak agarwal";
    cout<<reverseWords(s);
    return 0;
}