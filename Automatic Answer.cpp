#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    string s;
    stringstream ss;
    while(n--)
    {
        cin>>x;
        x = ((((((x*567)/9)+7492)*235)/47)-498);
        ss << x;
        s = ss.str();
        i = s.size();
        cout<< s[i-2]<<endl;
    }

}
