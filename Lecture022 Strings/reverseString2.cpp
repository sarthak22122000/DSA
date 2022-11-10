#include<iostream>
#include<string>
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
//string reverseStr(string s)
int main()
{
    string s= "The sky is blue";
    reverse(s.begin(),s.end());
    cout<<s;
    cout<<reverseWords(s);
    return 0;
}