#include <iostream.h>
 int main()
{
	int sum;
	int a[2]={1,2};
	int b[2]={3,4};
	for (int i=0; i<2 ;i++)
	{
		sum+=a[i]+b[i];
	}
	cout<<"sum of two 1D array is ="<<sum;
	return 0;
}
