#include<iostream>
using namespace std;
int insert(int arr[],int size,int element,int index,int capacity)
{ 

   if(size>capacity){   
     return 1;   
}
for(int i=size-1;i>=index;i--)
{
	arr[i+1]=arr[i];
	
	
}
arr[index]=element;
return 1;
}
int main()

{    
     
    
	int arr[5]=[5,3,2,1,0];
	insert(arr,5,44,5,5);
}
	
	 
