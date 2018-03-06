/**
 *name:big_little_endian.c
 *auther:周韦
 *date:2018.3.6
 *copyright:无
 *brief:本文件包含了大端模式，小端模式的检测函数以及转换函数
 * */


#include <stdio.h>

/**
 *name:check_endian
 *brief:进行大小端检测，利用联合体union的存放顺序是所有成员都从低地址开始存放这一特性.
 *param:none
 *retval: 1大端模式，0 小端模式
 * */
int check_endian()
{
	union
	{
		int a;
		char b;
	}u;

	u.a = 1;
	if(u.a == 1) //低地址存放低权重位LSB  小端模式
		return 0;
	if(u.b == 1) //高地址存放低权重为MSB  大端模式
		return 1;
}

int main()
{
	int blflag;
	printf("Big Little endian check:\n");
	
	blflag = check_endian();
	if(blflag == 0)
		printf("this is Little mode\n");
	if(blflag == 1)
		printf("this is Big mode\n");



	return 0;
}







