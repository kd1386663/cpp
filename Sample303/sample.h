#pragma once

class Sample {
	//デフォルトはprivate
public:
	int a;
	void func1();//publicなためmain.cppから使用可能
private:
	int a;
	void func1();//privateなためmain.cppから使用不可
private:
	int b;
	void func2();
};