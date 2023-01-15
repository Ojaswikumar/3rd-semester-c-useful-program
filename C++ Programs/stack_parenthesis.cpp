#include<bits/stdc++.h>
using namespace std;
bool balanced(string &str)
{
    stack<char> ch;
    for(int i=0;i<str.length();i++)
    {
        if(ch.empty())
        {
            ch.push(str[i]);
        } 
        else if((ch.top()=='('&& str[i]== ')')||
        (ch.top()=='{' && str[i]== '}')||
        (ch.top()=='[' && str[i]== ']'))
        {
            ch.pop();
        } 
        else
        {
            ch.push(str[i]);
        }
    } 
    if(ch.empty())
    {
        return true;
    } 
    else
    {
        return false;
    }
} 
int main()
{
    string str = "{}][";
    if(balanced(str))
    {
        cout<<"Balanced"<<endl;
    } 
    else
    {
        cout<<"Not balanced"<<endl;
    } 
    return 0;
}