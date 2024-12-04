#include<stdio.h>
int main(){
	int a[]={1,2,3,3,4,3,5,5};
	int n=sizeof(a)/4;
	printf("Nhap vao 1 phan tu :");
	int number;
	int index=0;
	scanf("%d",&number);
	int b[n]={0};
	for(int i=0;i<n;i++){
		if(a[i]==number){
			b[i]=1;
			index+=1;
		}
	}
	if(index==0){
		printf("Khong co phan tu nay trong mang");	
	}
	else{	
		printf("Vi tri cua phan tu %d trong mang la :",number);
		for(int i=0;i<n;i++){
			if(b[i]==1){
				printf("%d ",i+1);
			}
		}
	}
}