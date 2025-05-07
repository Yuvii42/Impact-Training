#include<bits/stdc++.h>
using namespace std;
class Palin{
    public:
    string s;
    Palin(string s){
        this->s=s;
    }
    void process(){
        int l=s.length(), flag=0;
        for(int i=0, j=l-1; i<=j; i++, j--){
            if(s[i]!=s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"The string is a palindrome."<<endl;
        }
        else{
            cout<<"The string is not a palindrome."<<endl;
        }
    }
};

int main(){
    string s;
    cin>>s;
    Palin* p = new Palin(s);
    p->process();
}