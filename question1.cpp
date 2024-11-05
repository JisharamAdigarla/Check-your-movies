#include <bits/stdc++.h>
using namespace std;

bool solve(string str){
    stack<char>s;
    for(char c:str){
        if(c=='('){
            s.push('(');
        }
        else if(c==')'){
            if(s.empty() || s.top()==')'){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    if(!s.empty()){
        return false;
    }
    return true;
}

int main() {
    
    string s;
    cout<<" Adigarla Jisharam "<<" "<<22115004<<endl;
    cout<<"Enter the expression to be checked: ";
    cin>>s;
    if(solve(s)){
        cout<<"Balanced Parenthesis.";
    }
    else{
        cout<<"Unmatched Parenthesis.";
    }
    return 0;
}