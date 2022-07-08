#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*double d = 3.14;
//	double*pd = &d;
//	*pd = 3.522;*/
//	printf("%lf\n", d);
//	//int a = 10;//申请了4个字节空间
//	////printf("%p\n" ,& a);
//	//int*p = &a;
//	////printf("%p\n", p);
//	//*p = 20;
//	//printf("a=%d\n", a);
//	//return 0;
//}


//结构体
//char int double......
//书 - 复杂对象 - 结构体 - 我们自己创造出来的一种类型
//创建一个结构体类型
//struct book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//	
//};
//int main()
//{
//	//利用结构体类型为-创建一个该类型的变量
//	struct book b1 = {"C语言程序设计",55};
//	struct book *pb = &b1;
//	//利用pb打印书名和价格
//	// .  结构体变量.成员
//	// -> 结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("%s\n",(*pb).name);
//	//printf("书名:%s 价格:%d\n", b1.name,b1.price);
//	//b1.price = 15;//变量可以直接赋值，数组名不行
//  //strcpy(b1.name,"C++");//strcpy - string copy -字符串拷贝-库函数-string.h
//	//printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	;
//	//空语句
//    //由一个;结束就是一条语句
//	return 0;
//}

//if语句
//int main()
//{
//
//	int age = 500;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)//&&逻辑与
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("仙人");
//	return 0;
//}
//int main()
//{
//	int age ;
//	scanf("%d", &age);
//	if (age < 18)
//	{ printf("未成年\n");
//	  printf("啊对对对");//要有大括号{}才能有两个printf {}是代码块
//	}
//		
//	else
//	{
//	 if (age >= 18 && age < 28)//&&逻辑与
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("仙人");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//     }
//		else//与最近的未匹配if匹配
//			printf("haha\n");
//	
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5==num)//把常量放在左边，就算错了也运行不起来
//	{
//		printf("haha\n");
//
//	}
//	//if (num=5)// 一个=是赋值 判断相等是==
//	//{
//	//	printf("hehe\n");
//
//	//}
//	return 0;
//}

//判断是不是奇数
//int main()
//{
//	int a;
//	int b;
//	scanf("%d", &a);
//	b = a % 2;
//	if (b==0)
//	{
//		printf("不是奇数");
//	}
//	else
//	{
//		printf("是奇数");
//	}
//	return 0;
//}

//输出1~100的奇数
//int main()
//{
//	int a =1;
//	while (a<=100)
//	{
//		if (a%2==1)
//		{
//			printf("%d ", a);
//		}
//        a++;
//	}
//	return 0;
//}

//输出1~100的奇数
//int main()
//{
//	int a = 1;
//	while (a<=100)
//	{
//		printf("%d ", a);
//		a += 2;
//
//	}
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	int a = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (a == 1)
//			printf("8848\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default://default可以放在前面
//		printf("输入错误");
//		break;
//	}
	//switch (day)//Switch是整型表达式
	//{
	//case 1://case前面要整型常量123456789
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//}
	//用break跳到这里结束语句

	//if (1==day)
	//{
	//	printf("星期一\n");

	//}
	//else if(2==day)
	//{
	//	printf("星期二\n");
	//}
	//else if(3==day)
	//{
	//	printf("星期三")；
	//}

//
//	return 0;
//}


//循环语句
//while    for    do while
//int main()
//{
//	int a = 1;
//	//while (1)// 1为真，执行语句
//	//{
// //    printf("8848");//无限循环
//	// 
//	//}
//	while (a<=10)
//	{
//		a++;
//		if (a == 5) 
//          continue; //继续while循环,跳过本次循环的后面代码
//			//break;
//		printf("%d\n", a);
//		
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	//int ch = getchar();//getchar接受键盘的输入
//	//putchar(ch);//putchar输出键盘数据的输入
//	//printf("%c\n", ch);
//	//EOF - end of file -> -1 文件结束符
//	while (a=getchar() !=EOF) //ctrl+z 停止
//	{
//		putchar(a);
//	}
//	return 0;
//}