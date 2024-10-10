#include<iostream>
using namespace std;

int solve(int pipe,int x,int y,int z/*vector<int>dp*/)
{
   //base case
    if(pipe == 0)
        return 0;
    if(pipe < 0)
        return INT_MIN;
   //call
    int first = solve(pipe-x,x,y,z);
    int second = solve(pipe-y,x,y,z);
    int third = solve(pipe-z,x,y,z);
   //return state
   return/* int dp[i]=*/1+max(first,max(second,third));

}
int main()
{
    int pipe = 25;
    int x=9, y=7, z=11;
  //  vector<int>dp(pipe, INT_MIN);
    int ans = solve(pipe,x,y,z/*,dp*/);
    cout << "max cuts are : "<< ans <<endl;
    return 0;
}
