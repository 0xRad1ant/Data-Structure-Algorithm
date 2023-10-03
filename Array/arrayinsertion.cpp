#include<iostream>
using namespace std;
// Linear Insertion at Beggining
void printarray(int arr[], int length)
{
	cout<<endl<<"array after inserting the item at desired position : \n";
	for(int i=0; i<length; i++)
	{
		cout<<arr[i]<<ends;
	}
}
void LinearInsertionBeggining(int arr[], int capacity, int length, int item)
{
	if(length>=capacity)
	{
		cout<<"overflow----exiting the program";
		return;
	}
	else
	{
		// shifting elements to one step at right
		int i;
		
		for(i=length;i>=1;i--)
		{
			arr[i]=arr[i-1];//if indexing stars from 0
		}
//		int i=length-1;
//		while (i>=0)
//		{
//			arr[i+1]=arr[i];
//			i = i-1;
//		}
//		arr[i+1]=item;
		arr[i]=item;
		length= length+1;
	}
	printarray(arr,length);
}
// Linear Insertion at the End
void LinearInsertionEnd(int arr[], int capacity, int length, int item)
{
	if(length>=capacity)
	{
		cout<<"overflow----exiting the program";
		return;
	}
	else
	{
		arr[length] = item;
		length = length +1 ;
	}
	printarray(arr,length);

}
// Linear Insertion at Random position 
void LinearInsertionRandom(int arr[], int capacity, int length, int pos, int item )
{
	if(length>=capacity)
	{
		cout<<"overflow----exiting the program";
		return;
	}
	else
	{
		int i= length-1;
		while (i>=pos)
		{
			arr[i+1]=arr[i];
			i = i-1;
		}
		arr[pos]=item;
		length = length +1;
	}
	printarray(arr,length);
}


int main()
{
	int capacity,size,pos,item;
	cout<<"Enter the capacity of an array : \t";cin>>capacity;
	int arr[capacity];
	cout<<"\nEnter size of an array : \t";cin>>size;
	cout<<"\nEnter the elements in an array : \n";
	for(int i=0; i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Enter item you want to insert : \t";cin>>item;
	char choice;
	cout<<"\nEnter your choice for insertion\nb->beggining\te-->end   \tr-->random\n";
	cin>>choice;
	if(choice=='b')
	{
		LinearInsertionBeggining(arr,capacity,size,item);
	}
	else if(choice=='e')
	{
		LinearInsertionEnd(arr,capacity,size,item);
	}
	else if(choice == 'r')
	{
		cout<<endl<<"Enter position where you want to insert : \t";cin>>pos;
		LinearInsertionRandom(arr,capacity,size,pos,item);
	}
	else
	{
		cout<<"choice is case sensetive follow the instruction carefully :-)\n";
	}
	
	return 0;
}
