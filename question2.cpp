#include <bits/stdc++.h>
using namespace std;

int pre(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    return 1;
}

int main() {
    
    string str;
    cout<<" Adigarla Jisharam "<<" "<<22115004<<endl;
    cout<<"Enter the infix expression: ";
    cin>>str;
    string ans="";
    stack<int>s;
    for(char c:str){
        if(c=='('){
            s.push(c);
        }
        else if(c==')'){
            while(s.top()!='('){
                ans+=s.top();
                s.pop();
            }
            s.pop();
        }
        else if((c>='a' && c<='z')|| (c>='A' && c<='Z') || (c>='0' && c<='9')){
            ans+=c;
        }
        else{
            while(!s.empty() && s.top()!='(' && pre(s.top()) >= pre(c)){
                ans+=(s.top());
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<"Required postfix expression: "<<ans;
    return 0;
}