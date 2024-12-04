#include<stdio.h>
int main(){
	int a[]={5,4,3,2,1};
	printf("Cac so truoc khi sap xep la :");
	for(int k=0;k<5;k++){
		printf("%d ",a[k]);
	}
	int n=sizeof(a)/sizeof(int);
	for(int i=1;i<n;i++){
		int x=a[i];
		int j=i-1;
		while(j>=0&&x<a[j]){
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=x; 
	}
	printf("\nCac so sau khi sap xep la :");
	for(int k=0;k<5;k++){
		printf("%d ",a[k]);
	}
}