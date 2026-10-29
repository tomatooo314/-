void J(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		int sign = 0;
		for(int j=0;j<len-i-1;j++)
		{
			if (arr[j]>arr[j+1])//正序
			{	
				int t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
				sign = 1;
			}
		}
		if (sign == 0)
		{
			break;
		}
	}
}