#include <iostream>
using namespace std;

int main()
{
	int countt, i, arr[30], num, first, last, middle;
	cout<<"how many elements would you like to enter?:";
    cin>>countt;

	for (i=0; i<countt; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:";
        cin>>num;
	first = 0;
	last = countt-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n";
                break;
        }
        else
        {
        last = middle - 1;
        }
        middle = (first + last)/2;
        }
        if(first > last)
	   {
	   cout<<num<<" not found in the array";
	   }
	return 0;
}
