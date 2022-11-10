#include<iostream>
#include<string>
using namespace std;
int countWords(string s){
    if(s==""){
        return 0;
    }
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            count++;
        }
    }
    return count+1;

}
int main()
{
    string s= "";
    cout<<"WORDS are: "<<countWords(s);

}