void sortarray(int arr[],int size)
{
	int swap,x=size;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<x-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
		x--;
	}
}
