#include<iostream>
#include<string>
 
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int z=1;z<=T;z++)
    {
        string s, a1=".",a2=".",a3="#";
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            a1 = a1+".#..";
            a2 = a2+"#.#.";
            a3 = a3 + "." + s[i] + ".#";
        }
        cout<<a1<<"\n"<<a2<<"\n"<<a3<<"\n"<<a2<<"\n"<<a1<<"\n";
    }
}