#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);  

    v[1] = 100;
    v[3] = 1002;
    v[4] = 1003;

    v.push_back(40);
    v.push_back(50);

    cout<<v.at(2)<<endl;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl; 
    cout<<v.capacity()<<endl;

    // cout<<"size:"<<v.size();
    // cout<<v.at(2)<<endl;
    // cout<<v.at(5)<<endl;

    return 0;

}