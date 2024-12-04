#include<stdio.h>
int main(){
	int a[]={5,4,3,2,1};
	printf("Cac so truoc khi sap xep la :");
	for(int k=0;k<5;k++){
		printf("%d ",a[k]);
	}

	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}		
	}
	printf("\nCac so sau khi sap xep la :");
	for(int k=0;k<5;k++){
		printf("%d ",a[k]);
	}
}