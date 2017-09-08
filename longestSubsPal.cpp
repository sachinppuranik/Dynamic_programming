#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string temp = "GEEKSFORGEEKS";
	int k=0;
	int n = temp.size();
	vector<vector<int>> lis(n,vector<int> (n));
	for(int i =0;i < n; i++)
		lis[i][i] = 1;
	for(int i = n - 1; i >= 0; i--)
	{
		for(int j = i+1; j < n; j++)
		{

			if(temp[i] == temp[j])
			{
				lis[i][j] = (lis[i+1][j-1] + 2);
			}
			else
			{
				lis[i][j] = (max(lis[i][j-1],lis[i+1][j]));
			}
			cout<<i<< "    "<<j<<"         "<<lis[i][j]<<endl;
		}
	}
	cout<<"ans = "<<lis[0][n-1]<<endl;

}
