#include<stdio.h>
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int row,col;
	int temp[100];
	int a[100][100];
	printf("Nhap vao hang :");
	scanf("%d",&row);
	printf("Nhap vao cot :");
	scanf("%d",&col);
	if(row!=col){
		printf("hang va cot khac nhau => khong co duong cheo");
		return 0;
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Mang truoc khi dc sap xep la :\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<row;i++){
		temp[i]=a[i][row-i-1];	
	}
	for(int x=0;x<row;x++){
		for(int y=0;y<row-1-x;y++){
			if(temp[y]<temp[y+1]){
				swap(temp[y],temp[y+1]);
			}
		}
	}
	for(int i=0;i<row;i++){
		a[i][row-i-1]=temp[i];
	}
	printf("Mang sau khi dc sap xep la :\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
} 















