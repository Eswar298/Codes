#GENERAL

if(m>size_array)
{
	m=m%n;
}
while(m--)
{
	temp=arr[0];
	for(i=0;i<arr.size()-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}

#OPTIMISED

if(m>n)
{
	m=m%n;
}
arr[i]=arr[(i+m)%n]//in in a loop
arr[i]=arr[(i+n-m)%n]//in a loop
