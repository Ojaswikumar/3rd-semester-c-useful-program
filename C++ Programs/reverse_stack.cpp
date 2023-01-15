#include<bits/stdc++.h>
using namespace std;
void reverse(string &str)
{
    stack<char> s;
    char ch;
    int i;
    for(i = 0;i<str.length();i++)
    {
        ch = str[i];
        s.push(ch);
    }  
    for(i = 0;i<str.length();i++)
    {
        str[i] = s.top();
        s.pop();
    } 
} 
int main()
{
    string str = "abcde";
    reverse(str);
    cout<<str;
    return 0;
}