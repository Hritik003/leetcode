#include<stdio.h>
#include<math.h>
int main()
{
	int num,k,i,c=0;
	scanf("%d %d",&num,&k);
   
    for(i=num;i>=1;i--)
    {
    	if(num%i==0)
    	c++;
    	if(c-1==k)
		{
		printf("%d",i);
		break;
		}
		
	}
	if(c<k)
	{
	return 1;
}
return 0;
	
	
	 
     
}
