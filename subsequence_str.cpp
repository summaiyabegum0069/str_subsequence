#include<iostream>
#include<vector>
using namespace std;
void subsequence(string s,int index,int n,vector<string>&ans, string temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    //if no
    subsequence(s,index+1,n,ans,temp);
    //if yes
    temp.push_back(s[index]);
    subsequence(s,index+1,n,ans,temp);
}
int main()
{
    string s="abc";
    int arr[3]={1,2,3};
    vector<string>ans;
    string temp;
    subsequence(s,0,s.size(),ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}