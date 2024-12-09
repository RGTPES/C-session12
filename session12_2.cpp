#include<stdio.h>
void tinhMang(int arr[], int size){
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int b;
printf("moi ban nhap mang : ");
scanf("%d",&b);
int mang[b];
for(int i =0;i<b;i++){
	printf(" nhap phan tu thu %d : ",i+1);
	scanf("%d",&mang[i]);
	
}
tinhMang(mang,b);






return 0;

}

