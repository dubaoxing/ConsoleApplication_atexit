// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void terminateTest()
{
	cout << "�������ڽ���..." << endl;
}

int main()
{
	// ע���˳�������
	atexit(terminateTest);

	cout << "the end of main()" << endl;

    return 0;
}

