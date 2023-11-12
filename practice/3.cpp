#include<stdio.h>
double prime(int n){
	int j=1;
	for(int a=1;a<=n;a++){
	j=j*a;
	}
	return j;
}                         /*定义函数*/ 
int main ()
{int m,n,result;
	printf("please enter n:");
    scanf("%d",&n);
    printf("please enter m:");
    scanf("%d",&m);
    result=prime(n)/(prime(m)*prime(n-m));
    printf("result=%d",result);
    return 0;
}/*主函数*/ 

	
 
