#include<stdio.h>
int main()
{
	int array[10];
	int s1[10];
	int s2[10];
	int i,tur,tut,m=0;
	int counter=3;
	int power=1;
	
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	
	
	for(i=0;i<=9;i++)
	{
		s1[i]=array[i];
		s2[i]=array[i];
	}
	
	while(counter>0)
	{
	
	for(tur=1 ; tur<=10-1 ; tur++)
	{
		for(i=0 ; i<=8 ; i++)
		{
			if( (s1[i]/power)%10 > (s1[i+1] /power)%10  )
			{
				tut=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=tut;
			}
		}
	}
	power*=10;
	counter--;	
	
	
}

	
		
	power=100;
	counter=3;
	
	while(counter>0)
	{
	
	for(tur=1 ; tur<=10-1 ; tur++)
	{
		for(i=0 ; i<=8 ; i++)
		{
			if( (s2[i]/power)%10 > (s2[i+1] /power)%10  )
			{
				tut=s2[i];
				s2[i]=s2[i+1];
				s2[i+1]=tut;
			}
		}
	}
	power/=10;
	counter--;	


}


for(i=0;i<=9;i++)
{
	printf("%d ",s1[i]);
	
}
printf("\n");
for(i=0;i<=9;i++)
{
	printf("%d ",s2[i]);
	
}
printf("\n");
for(i=0;i<=9;i++)
{
	if(s1[i] != s2[i])
	{
		m++;
	}
}

printf("%%%d hata",m*10);
	
	

	
	
}
