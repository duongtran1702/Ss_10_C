#include<stdio.h>
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n,m;
	int a[100][100];
	printf("Nhap vao hang:");
	scanf("%d",&n);
	printf("Nhap vao cot :");
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Mang truoc khi dc sap xep la :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n;i++){
			for(int x=i+1;x<n;x++){
				if(a[i][j]>a[x][j]){
					swap(a[i][j],a[x][j]);
				}
			}
		}
	}
	printf("\nMang sau khi dc sap xep la :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}	
}















