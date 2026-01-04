#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if(c=='*' || c=='/') return 10;
    else if(c=='+' || c=='-') return 5;
    return 0;
}

int main() {
    string infix, postfix = "";
    getline(cin, infix);
    stack<char> st;

    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];
        if(isalnum(ch)) postfix += ch;
        else if(ch == '(') st.push(ch);
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else {
            while(!st.empty() && priority(st.top()) >= priority(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << postfix << endl;
    return 0;
}
