// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void terminateTest()
{
	cout << "程序正在结束..." << endl;
}

int main()
{
	// 注册退出处理函数
	atexit(terminateTest);

	cout << "the end of main()" << endl;

    return 0;
}

