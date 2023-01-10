# include<iostream>
using namespace std;
    
/*program for linear search of array element

*/
int main()
{
 	int num,i;
 	int A[num];
	int key;
	cout<<"Enter no of terms for array"<<endl;
    cin>>num;
	
	for(int i=0;i<num;i++)
	
	{
	    cout<<"enter numbers \n";
		cin>>A[i];
	}
	cout<<"enter key";
	cin>>key;
	for(int i=0;i<num;i++)
	{
		if(key==A[i])
		{
			cout<<"found at"<<i;
			return 0;
		}
	}	
	cout<<"not found";
	return 0;
}		



