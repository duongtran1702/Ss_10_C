#include<stdio.h>
int main(){
	int a[]={5,4,3,2,1};
	printf("Cac so truoc khi sap xep la :");
	for(int k=0;k<5;k++){
		printf("%d ",a[k]);
	}
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}		
	}
	printf("\nCac so sau khi sap xep la :");
	for(int x=0;x<5;x++){
		printf("%d ",a[x]);
	}
}