#include<stdio.h>
void arr(int arr[],int *size){
	
	for(int i =0;i<*size;i++){
		printf(" nhap gia tri so thu tu  thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
}
void printMenu(){

		
	printf("\nMENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.in ra gia tri cac phan tu quan ly\n");
	printf("3.them mot phan tu vao vi tri chi dinh\n");
	printf("4.sua mot phan tu o vi tri chi dinh\n");
	printf("5.xoa mot phan tu o vi tri chi dinh\n");
	printf("6.sap xep cac phan tu\n");
	printf("7.tim kiem phan tu nhap vao\n");
	printf("8.thoat\n");
	printf("Nhap lua chon cua ban : ");

}
void printArr(int arr[],int size){

for(int i =0;i<size;i++){
	printf("%d ",arr[i]);
}
}
void addArr(int arr[],int *size,int index,int value){

	for(int i = *size;i>= index;i--){
		arr[i]=arr[i-1];
	}
	(*size)++;
	arr[index -1]=value;
		for(int i =0;i<*size;i++){
				printf("%d ",arr[i]);
}	
}
void fixArr(int arr[],int index, int value,int size){


	arr[index-1]=value;
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
void deleteArr(int arr[],int index , int *size){
	for(int i =index;i<*size;i++){
		arr[i-1]=arr[i];
	}
	(*size)--;
	for(int i =0;i<*size;i++){
		printf("%d ",arr[i]);
	}
}
void sortArr(int arr[],int size){
for(int i =0;i<size;i++){
	for(int j =0;j<size-1-i;j++){
		if(arr[j]<arr[j+1]){
			int temp = arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
		}
	}
}

}
void sortArr2(int arr[],int size){
for(int i =0;i<size;i++){
	for(int j =0;j<size-1-i;j++){
		if(arr[j]>arr[j+1]){
			int temp = arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;}
		}
	}
}
void linearSearch(int arr[],int size,int check){
	for(int i =0;i<size;i++){
		if(check==arr[i]){
			printf("%d co trong mang",check);
			return;
		}
	}
	printf("%d khong co trong mang",check);
}
void binarySearch(int arr[],int size,int check){
	int start = 0;
	int end = size -1;
	int mid;
	while(start<=end){
		mid = (start+end)/2;
		if(check == mid){
			printf("%d co trong mang",check);
			return;
		}else if(mid > check){
			end = mid - 1;
		}else if(mid < check){
			start = mid +1;
		}
	}
	printf("%d khong co trong mang",check);
	
}
int main(){
	int check;
		int index,value;
	int flag = 0;
	int ans =0;
	int array[100];
do{
	printMenu();
	scanf("%d",&ans);
	switch(ans){
		case 1:
			flag = 1;
			int size;
			printf("Nhap mang ");
			scanf("%d",&size);
			arr(array,&size);
			break;
		case 2:
			if (flag ==1)	printArr(array,size);
			else printf("moi ban nhap mang");
		
		break;
		case 3:

			if( flag ==1){
				printf("moi ban nhap vi tri can them : ");
				scanf("%d",&index);
				printf("moi ban nhap gia tri can them : ");
				scanf("%d",&value);
				addArr(array,&size,index,value);

			}	else printf("moi ban nhap mang");
			
		break;
		case 4:
			if(flag==1){
			
			printf("Nhap vi tri can sua : ");
			scanf("%d",&index);
			printf("Nhap gia tri can sua : ");
			scanf("%d",&value);
			fixArr(array,index,value,size);
			}else printf("moi ban nhap mang");
				
		break;
		case 5:
			if(flag==1){
				printf("Nhap vi tri can xoa : ");
			scanf("%d",&index);
			deleteArr(array,index,&size);	
			}	else printf("moi ban nhap mang");
		
		break;
		case 6:
		if(flag ==1){
		printf("1. Giam dan \n");
		printf("2. Tang dan \n");
		scanf("%d",&ans);
		switch(ans){
			case 1:
				sortArr(array,size);
				break;
			case 2:
					sortArr2(array,size);
			break;	
		}
		}else printf("moi ban nhap mang");	
		break;
		case 7:
			if(flag==1){
				printf("1. Tim kiem tuyen tinh \n");
				printf("2. Tim kiem nhi phan \n");
				scanf("%d",&ans);
				switch(ans){
					case 1:
						printf("Nhap so can tim kiem \n");
						scanf("%d",&check);
						linearSearch(array,size,check);
						break;
					case 2:
							printf("Nhap so can tim kiem \n");
						scanf("%d",&check);
						binarySearch(array,size,check);
						break;
				}
			}
		break;
			
	}
}while(ans!=8);



return 0;

}

