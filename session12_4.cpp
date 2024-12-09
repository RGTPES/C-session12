#include<stdio.h>
void maxArr(int arr[],int size){
int max =arr[0];
for(int i =0;i<size;i++){
	if(arr[i]>max) max = arr[i];
	
		
	
}
	printf("so lon nhat trong mang la %d",max);
}
int main(){
printf("nhap mang : ");
int b;
scanf("%d",&b);
int a[b];
int size = sizeof(a)/sizeof(a[0]);
for(int i =0;i<b;i++){
	printf("nhap so thu %d : ",i+1);
		scanf("%d",&a[i]);
	}

maxArr(a,b);



return 0;

}

