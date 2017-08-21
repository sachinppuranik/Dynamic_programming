#include<iostream>
using namespace std;

int maxA(int n)
{
/*	//int n=7; 
        int maxV =0;
	maxV= n;
        for (int i = 1; i <= n - 3; i++)
	{
            maxV = max(maxV, maxA(i) * (n - i - 1));
	    cout<<maxV<<endl;
	}
        cout<<maxV<<endl;*/
 	int dp[8]={0};// = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            dp[i] = i;
            for (int j = 1; j <= i - 3; j++)
		{
                	dp[i] = max(dp[i], dp[j] * (i - j - 1));
		cout<<"i = "<<i<<"j = "<<j<<"dp[i] = "<<dp[i]<< " " << dp[j] * (i - j - 1) <<endl;
		}
        }
        cout<< dp[n]<<endl;
}
int main()
{
maxA(7);
}
