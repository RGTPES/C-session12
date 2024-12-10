#include<stdio.h>
void importArr(int arr[100][100],int a, int b){
arr[a][b];
	for(int i =0;i<a;i++){
		for(int j =0;j<b;j++){
			printf("Nhap gia tri cua array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void printArr(int arr[100][100],int a,int b){
arr[a][b];	 
	for(int i =0;i<a;i++){
		for(int j =0;j<b;j++){
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
}
void cornerArr(int arr[100][100],int a,int b){
	printf("%d ",arr[0][0]);
	printf("%d ",arr[0][b-1]);
	printf("%d ",arr[a-1][0]);
	printf("%d ",arr[a-1][b-1]);
}
void borderArr(int arr[100][100],int a,int b){
	for(int i =0;i<a;i++){
		for(int j=0;j<b;j++){
		if(i==0||i==a-1||j==0||j == b-1){
		printf("%d ",arr[i][j]);
		}
		
		}
	}
}
void mainDiagonal(int arr[100][100],int a, int b){
	if(a!=b){
		printf("khong co duong cheo chinh");
	}else{
		for(int i =0;i<a;i++){
			printf("duong cheo chinh la \n");
			printf(" %d \n",arr[i][i]);
	}
	
		
	}
}
void secondaryDiagonal (int arr[100][100],int a, int b){
	for(int i = a-1;i>=0;i--){
		printf(" duong cheo phu la \n");
		printf("  %d \n",arr[i][i]);
	}
}
void perfectNumber(int arr[100][100],int a,int b){
	
	for(int i =0;i<a;i++){
		for(int j=0;j<b;j++){
		int count = 0;
			for(int k=1;k<=arr[i][j];k++){
				if(arr[i][j]%k==0){
					count++;
				}
		
			
			}	if(count ==2){
				printf("%d ",arr[i][j]);	
			}
		}
	}
}

void printMenu(){

		
			printf("\nMenu\n");
	printf("1. Nhap gia tri cac phan tu cua mang\n");
	printf("2. In gia tri cac phan tu cua mang theo ma  tran\n");
	printf("3. In ra cac phan tu o goc theo ma tran\n");
	printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
	printf("5. In ra cac phan tu nam tren dong cheo chinh va duong cheo phu theo ma tran\n");
	printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
	printf("7. Thoat chuong trinh \n");
	printf("Nhap lua chon cua ban : ");

}




int main(){
	int flag =0;
	int array[100][100];
	int ans;
	int rows,colums;
	printf("nhap so hang : ");
	scanf("%d",&rows);
	printf("nhap so cot : ");
	scanf("%d",&colums);
do{
	printMenu();
	scanf("%d",&ans);
	switch(ans){
		case 1:
			flag=1;
		importArr(array,rows,colums);	
		break;
		case 2:
			if(flag ==1){
				printArr(array,rows,colums);
		
			}else printf("nhap mang ");
				break;
		case 3:
			if(flag==1){
				cornerArr(array,rows,colums);
			}else printf("nhap mang ");
			break;
		case 4:	
		if(flag==1){
				borderArr(array,rows,colums);
			}else printf("nhap mang ");
			break;
		case 5:
			 mainDiagonal(array,rows,colums);
			secondaryDiagonal(array,rows,colums);
			break;
		case 6:
			perfectNumber(array,rows,colums);
			break;
				
	}

}	while(ans!=7);




return 0;

}


