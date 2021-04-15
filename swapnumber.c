 #include<stdio.h>
int main()
{
	printf("Enter two number");
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d",a,b);
}
