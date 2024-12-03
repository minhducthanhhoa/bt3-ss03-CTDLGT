#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0 || n > 100);
	
	int arr[n];
	
	printf("Nhap %d phan tu cua mang: \n", n);
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// Dao nguoc mang
	for(int i = 0; i < n / 2; i++){
		int temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 -i] = temp;
	}
	
	// In mang da dao nguoc
	printf("Mang sau khi dao nguoc: \n");
	for(int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}

