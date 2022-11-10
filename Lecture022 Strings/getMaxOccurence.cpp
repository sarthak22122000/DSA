#include<iostream>
#include<vector>
using namespace std;
/*char maxChar(vector<int> a){
    int max=-1;
    int index=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    char ans= 'a' + index;
    return ans;
}*/
char getMaxOcc(string s){
    int arr[26]={0};

    for(int i=0; i<s.length();i++){

        //lower case hai
        if(s[i]>='a' && s[i]<='z'){
            int number= s[i] - 'a';
            arr[number]++;
        } 
        //upper case
        else if(s[i]>='A' && s[i]<='Z'){
            int number= s[i] - 'A';
            arr[number]++;
        }    
    }
    int max=-1;
    int index=-1;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    char ans= 'a' + index;
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<getMaxOcc(s);
    return 0;
}