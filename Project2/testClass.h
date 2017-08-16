#pragma once
#include"MyClass.h"
#include<iostream>
#include<string>
#include<string.h>
class testClass:public MyClass
{
public:
	void test();
private:
	int a;
	double b;
	char c;
};