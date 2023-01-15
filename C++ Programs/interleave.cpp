#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4); 

    stack<int> s;
    int n = 4;
    int i;
    for(i = 0;i<n/2;i++)
    {
        s.push(q.front());
        q.pop();
    }  
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(i = 0;i<n/2;i++)
    {
        q.push(q.front());
        q.pop();
    } 
    for(i = 0;i<n/2;i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop(); 
        q.push(q.front());
        q.pop();
    } 
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}