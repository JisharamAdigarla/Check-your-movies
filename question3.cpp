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
    cout<<"Enter the postfix expression to be evaluated: ";
    cin>>str;
    string ans="";
    stack<int>s;
    for(char c:str){
        if(c>='0' && c<='9'){
            int a=c-'0';
            s.push(a);
        }
        else{
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            if(c=='+'){
                s.push(a+b);
            }
            else if(c=='-'){
                s.push(b-a);
            }
            else if(c=='*'){
                s.push(a*b);
            }
            else if(c=='/'){
                s.push(b/a);
            }
            else{
                s.push(pow(a,b));
            }
        }
    }
    cout<<"Evaluated value: "<<s.top();
    return 0;
}