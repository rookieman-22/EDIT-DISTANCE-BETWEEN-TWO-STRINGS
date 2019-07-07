#include<iostream>
#include<string>
using namespace std;
distance(string s1,string s2)
{
    int i=0,dist=0;
    int l1=s1.length();
    int l2=s2.length();
    int diff=max(l1,l2)-min(l1,l2);
    for(int i=0;i<min(l1,l2);i++)
    {
        if(s1[i]!=s2[i])
            dist++;
    }
    for(int i=0;i<diff;i++)
    {
        dist++;
    }
    return dist;
}
int main()
{
    string s1,s2;
    cout<<"Enter string : ";
    cin>>s1;
    cout<<"Enter string: ";
    cin>>s2;
    int x=distance(s1,s2);
    cout<<"Edit distance is : "<<x;
}

