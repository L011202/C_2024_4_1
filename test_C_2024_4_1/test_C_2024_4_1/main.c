#define _CRT_SECURE_NO_DEPRECATE    
//只有VS编译器需要这个语句，防止有些C关键词使用的时候会报警告

/*	计算阶乘	*/

#include <stdio.h>
int Jcheng(int x) {
	int ret = 1;
		if (1 == x) {				//当要计算的数为1时直接输出打印1
			ret = 1;
		}
		else {					//非一的情况
			ret = x * Jcheng(x - 1);		
		}
	return ret;
}

int main()
{
	int num = 0;
	int result = 0;					//定义一个变量来接收计算所得的结果
	scanf("%d", &num);
	while (num < 0) {				//判断输入的数是否有效，若无效，将进行清屏重新输入。
		//输入负数时，printf语句会输出乱码，未调试完成
		printf("你的输入有错误，请重新输入\n");
		Sleep(3000);			//3s后进行屏幕清屏
		System("cls");			//清屏		
		scanf("%d", &num);
	}
	result = Jcheng(num);
	printf("%d\n", result);
	return 0;
}
