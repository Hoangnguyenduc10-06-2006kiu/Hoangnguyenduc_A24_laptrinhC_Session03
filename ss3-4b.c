#include<stdio.h> 
int main(){
	float diemtoan, diemvan, diemanh,tbc;
	printf("nhap diem van\n: ");
	scanf("%f",&diemvan) ;
	printf("nhap diem toan\n: ");
	scanf("%f",&diemtoan) ;
	printf("nhap diem anh: \n");
	scanf("%f",&diemanh) ;
	tbc=(diemvan+diemtoan+diemanh)/3; 
	printf("diem trung binh cong ba mon l� %f",tbc) ;
	return 0; 

} 