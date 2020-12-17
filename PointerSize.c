#include<stdio.h>
#include<stdlib.h>
void fun(int size,int initialValue,int increment){
	int *ptr_arr=NULL;
	int *q=NULL;
	int i=0;
	ptr_arr=(int*)malloc(sizeof(int));
	q=(int*)malloc(sizeof(int));
	if(ptr_arr==NULL){
		printf("申请失败");
		return;
	}
	while(i<size){
		i++;
		q++;
		*q=initialValue+i*increment;
		if(q==NULL){
			printf("失败");
			break;
		}printf("初始值:%d 内存地址:%X\n ",*q,*q);
	}
}
int main(){
       	int size,initialValue,increment;
	printf("请输入：内存大小 初始量 增量:\n");
	scanf("%d %d %d",&size,&initialValue,&increment);
	fun(size,initialValue,increment);
	return 0;
}
