#include<bits/stdc++.h>
using namespace std;
void reverse(string &str)
{
    stack<char> s;
    for(int i = 0;i<str.length();i++)
    {
        char ch = str[i];
        s.push(ch);
    } 
    for(int i = 0;i<str.length();i++)
    {
       str[i] = s.top();
       s.pop();
    } 

} 
int main()
{
    string str = "Ojaswi Kumar";
    reverse(str);
    cout<<str;
    return 0;
}