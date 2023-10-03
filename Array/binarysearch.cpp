#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter the size of an array: "<<endl;
	cin>>n;// size of an array
	int arr[n];
	int start, end, mid;
	start = 0; end=n; mid;// setting start, mid, end
	for( int i=0; i<n; i++)
	{
		cin>>arr[i];//taking input to an array
	}
	int item;
	cout<<"\nEnter the number whose index you want to find in an array : ";
	cin>>item;// taking input of item to be searched 
	int flag = 0;
	while(start<end)
	{
		mid = (start+end)/2;
		cout<<"start : mid : end "<<endl;
		cout<<start<<ends<<mid<<ends<<end<<endl;
		if(item==arr[mid])
		{
			cout<<"\nIndex of an item is : "<<mid<<endl;
			flag = flag+1;
			break;
		}
		else if(item<arr[mid])
		{
			end = mid-1;
		}
		else if(item>arr[mid])
		{
			start = mid+1;
		}
	}
	if(flag==0)
	{
		cout<<"\nItem is not available in an array";
	}
	return 0;
}
