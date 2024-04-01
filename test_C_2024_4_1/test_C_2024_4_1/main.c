#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告

/*	计算阶乘	*/

#include <stdio.h>
int Jcheng(int x) {
	int ret = 1;
		if (1 == x) {
			ret = 1;
		}
		else {
			ret = x * Jcheng(x - 1);
			
		}
	return ret;
}

int main()
{
	int num = 0;
	int result = 0;
	scanf("%d", &num);
	while (num < 0) {
		printf("你的输入有错误，请重新输入\n");
		scanf("%d", &num);
	}
	result = Jcheng(num);
	printf("%d\n", result);
	return 0;
}