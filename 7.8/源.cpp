#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*double d = 3.14;
//	double*pd = &d;
//	*pd = 3.522;*/
//	printf("%lf\n", d);
//	//int a = 10;//������4���ֽڿռ�
//	////printf("%p\n" ,& a);
//	//int*p = &a;
//	////printf("%p\n", p);
//	//*p = 20;
//	//printf("a=%d\n", a);
//	//return 0;
//}


//�ṹ��
//char int double......
//�� - ���Ӷ��� - �ṹ�� - �����Լ����������һ������
//����һ���ṹ������
//struct book
//{
//	char name[20];//C���Գ������
//	short price;//55
//	
//};
//int main()
//{
//	//���ýṹ������Ϊ-����һ�������͵ı���
//	struct book b1 = {"C���Գ������",55};
//	struct book *pb = &b1;
//	//����pb��ӡ�����ͼ۸�
//	// .  �ṹ�����.��Ա
//	// -> �ṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("%s\n",(*pb).name);
//	//printf("����:%s �۸�:%d\n", b1.name,b1.price);
//	//b1.price = 15;//��������ֱ�Ӹ�ֵ������������
//  //strcpy(b1.name,"C++");//strcpy - string copy -�ַ�������-�⺯��-string.h
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	;
//	//�����
//    //��һ��;��������һ�����
//	return 0;
//}

//if���
//int main()
//{
//
//	int age = 500;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)//&&�߼���
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����");
//	return 0;
//}
//int main()
//{
//	int age ;
//	scanf("%d", &age);
//	if (age < 18)
//	{ printf("δ����\n");
//	  printf("���ԶԶ�");//Ҫ�д�����{}����������printf {}�Ǵ����
//	}
//		
//	else
//	{
//	 if (age >= 18 && age < 28)//&&�߼���
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����");
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
//		else//�������δƥ��ifƥ��
//			printf("haha\n");
//	
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5==num)//�ѳ���������ߣ��������Ҳ���в�����
//	{
//		printf("haha\n");
//
//	}
//	//if (num=5)// һ��=�Ǹ�ֵ �ж������==
//	//{
//	//	printf("hehe\n");
//
//	//}
//	return 0;
//}

//�ж��ǲ�������
//int main()
//{
//	int a;
//	int b;
//	scanf("%d", &a);
//	b = a % 2;
//	if (b==0)
//	{
//		printf("��������");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}

//���1~100������
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

//���1~100������
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

//switch���
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default://default���Է���ǰ��
//		printf("�������");
//		break;
//	}
	//switch (day)//Switch�����ͱ��ʽ
	//{
	//case 1://caseǰ��Ҫ���ͳ���123456789
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//}
	//��break��������������

	//if (1==day)
	//{
	//	printf("����һ\n");

	//}
	//else if(2==day)
	//{
	//	printf("���ڶ�\n");
	//}
	//else if(3==day)
	//{
	//	printf("������")��
	//}

//
//	return 0;
//}


//ѭ�����
//while    for    do while
//int main()
//{
//	int a = 1;
//	//while (1)// 1Ϊ�棬ִ�����
//	//{
// //    printf("8848");//����ѭ��
//	// 
//	//}
//	while (a<=10)
//	{
//		a++;
//		if (a == 5) 
//          continue; //����whileѭ��,��������ѭ���ĺ������
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
//	//int ch = getchar();//getchar���ܼ��̵�����
//	//putchar(ch);//putchar����������ݵ�����
//	//printf("%c\n", ch);
//	//EOF - end of file -> -1 �ļ�������
//	while (a=getchar() !=EOF) //ctrl+z ֹͣ
//	{
//		putchar(a);
//	}
//	return 0;
//}