#include<stdio.h>
#include<math.h>
int ss(int a); 
	int main(){
	printf("Enter two number in order:");
	int n,m,total=0,sum=0;
	scanf("%d%d",&n,&m);
  	if(m<n){printf("not in order");
  	return 0;
	  }else{
	for(n;n<=m;n++){
		int v;
		v=ss(n);
		if(v!=0){
			sum=sum+v;
			total++;
		}else{}
	
	}	
	}
	printf("%d %d",total,sum);

	}
	int ss(int a){
		int m=sqrt(a)+1;
	for(int z=2;z<=m;z++){
		int c;
		c=a%z;
		if(c==0){
		a=0;
		return a;
		break;}
		if(z==m){return a;
		}
			}
}

