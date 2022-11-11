#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s) {
        string ans;
        
        for(int i=0;i<s.length();i++){
            
            if(ans.back()==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }

int main()
{
    string s;
    cin>>s;
    cout<<removeDuplicates(s);
    
}