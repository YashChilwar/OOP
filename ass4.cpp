#include<iostream>
using namespace std;

template <class T> void selection()
{
    T arr[50];
    T temp;
    int n,j;

    cout<<"Enter No of Elements you want in an array : ";
    cin>>n;
    cout<<"Enter Elements in the array :"<<endl;

    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int  midindex=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[midindex])
           midindex=j;
       }
       temp=arr[i];
       arr[i]=arr[midindex];
       arr[midindex]=temp;

    }

    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

int main()
 {
	cout<<"Integer Sorting :"<<endl;
	selection<int>();

	cout<<"Float Sorting :"<<endl;
	selection<float>();


    return 0;
 }

