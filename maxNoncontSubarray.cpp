#include<iostream>
using namespace std;
	
int main()
{
int a[10]={5, 5, 10, 100, 10, 5};
//	int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;
 
  for (i = 1; i < 6; i++)
  {
 //    /* current max excluding i */
   //  excl_new = (incl > excl)? incl: excl;
// 	cout<<excl_new<<endl;
     /* current max including i */
  /*   incl = excl + arr[i];
	cout<<incl<<endl;
     excl = excl_new;
	cout<<excl<<endl;
	cout<<"\n"<<endl;*/
	int m[10]={0};
	m[0] = a[0];
	m[1] = max(a[0],a[1]);
	for(i = 2; i < 6; i++)
	{
		m[i] = max(a[i]+m[i-2],m[i-1]);
		cout<<a[i]<<endl;
		cout<<m[i]<<endl;
		cout<<m[i-1]<<endl;
		cout<<m[i-2]<<endl;
		cout<<"\n"<<endl;
	}
	
  }
 
   /* return max of incl and excl */
 //  cout<<((incl > excl)? incl : excl);
}
