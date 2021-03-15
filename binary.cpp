#include<stdio.h>
#include<conio.h>
int main()

 {
	int n; 
	int i=0;
	int bin[i];
	bin[0]=0;
	int j=1;int r;
	scanf("%d",&n);
	
	
	while(n>0)
	{  
		r = n%2;
		n = n/2;
		bin[i]= bin[i]+(j*r);
		j=j*10;
		
	}
	 
	printf("%d",bin[i]);
	 return 0;
	 
}

