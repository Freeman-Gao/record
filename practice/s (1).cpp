#include<stdio.h>
int main(){
	int n,f;
	printf("plese enter n:");
	scanf("%d",&n);
	if(n<0){
		f=-1;
		printf("%d",f);
	}else if(n==0){
		f=0;
		printf("%d",f);
	}else{
		f=1;
		printf("%d",f);
	}
	return 0;
}
