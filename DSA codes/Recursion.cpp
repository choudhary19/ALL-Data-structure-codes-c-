#include<iostream>
using namespace std;
  
 
  int power(int n,int p)
  {
  	if(n==0)
  	{
  		return 1;
  		
	  }
	  int prepower=power(n,p-1);
	  return n * prepower;
	  
  }
  int main()
{    int n,p;
//	cout<<"Enter number "<<endl;
//	cin>>n;
	//cout<<sum(n);
	cout<<"enter number "<<endl;
	cin>>n;
	cout<<"power "<<endl;
	cin>>p;
	cout<<power(n,p)<<endl;
	
 	
	
}
