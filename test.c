#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu2
{
	char a;
	short b;
	double c;
};
struct stu
{
	struct stu2 sb;     //  结构体中的内容可以是另一个结构体
	char name[20];
	int age;
	char id[20];
}; s1, s2;          //这里也是结构体变量，是全局变量
//int main()
//{
//	struct stu s = { {'a',1,3.14},"张三",20,"20220430"};
//	printf("%c\n", s.sb.a);
//	printf("%s\n", s.id);
//	struct stu* ps = &s;
//	printf("%d\n", (*ps).age);
//	printf("%d\n", (*ps).sb.b);
//	printf("%d\n", ps->age);
//	printf("%d\n", ps->sb.b);
//	return 0;
//}


//     结构体传参
//    用一个函数打印结构体中的内容
void print1(struct stu x)
{
	printf("%c %d %lf %s %d %s\n", x.sb.a, x.sb.b, x.sb.c, x.name, x.age, x.id);
}

void print2(struct stu* y)
{
	printf("%c %d %lf %s %d %s", y->sb.a, (*y).sb.b, y->sb.c, y->name, (*y).age, (*y).id);
}
int main()
{
	struct stu s = { {'a',1,3.14},"张三",20,"20220430" };
	print1(s);       //传结构体
	print2(&s);
	return 0;
}
