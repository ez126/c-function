#include<iostream>
using namespace std;
#include <string>

//1、创建学生数据类型 ：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组合成的一个类型
//语法 struct 类型的名称{ 成员列表 }
struct Student
{
	//成员列表

	//姓名
	string name;

	//年龄
	int age;

	//分数
	int score;

}s3;  //顺便创建一个结构体变量

// 2、通过学生类型创建具体学生
//2.1 struct Student s1
//2.2 struct Student s2 = {.....}
//2.3 在定义结构体实顺便创建结构体变量



int main1() {

//2.1 struct Student s1

	//struct关键字可以省略（只是在结构体创建的时候）定义的时候不行
	struct Student s1;
	//给s1属性赋值，通过 .访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;


	cout << "姓名： " << s1.name << "  年龄： " << s1.age << "  成绩： " << s1.score << endl;

//2.2 struct Student s2 = {.....}
	struct Student s2 = { "李四", 19, 80 };
	cout << "姓名： " << s2.name << "  年龄： " << s2.age << "  成绩： " << s2.score << endl;

//2.3 在定义结构体实顺便创建结构体变量

	s3 .name = "王五";
	s3.age = 20;
	s3.score = 69;
	cout << "姓名： " << s3.name << "  年龄： " << s3.age << "  成绩： " << s3.score << endl;

	system("pause");
	return 0;
}
