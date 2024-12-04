#include<stdio.h>
int main(){
	int a[5]={2,5,3,4,1};
	int n=5;
	printf("Mang ban dau la :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0&&temp<a[j]){
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=temp;
	}
	printf("\nMang da sap xep la :");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nNhap vao mot so de kiem tra :");
	int x;
	scanf("%d",&x);
	int l=0;
	int r=n-1;
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			pos=m;
			break;
		}
		else if(x<a[m]){
			r=m-1;
		}
		else {
			l=m+1;
		}
	}
	if(pos==-1){
		printf("Khong co phan tu nhu vay trong mang!");
	}
	else{
		printf("Vi tri cua phan tu %d trong mang la :%d",x,pos+1);
	}
	return 0;
}























