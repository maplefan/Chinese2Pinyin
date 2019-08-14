// PinyinDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"Pinyin.h"
#include<time.h>


int _tmain(int argc, _TCHAR* argv[])
{
	Pinyin *a = new Pinyin();
	wchar_t *r = L"苟利国家生死以";
	std::vector<std::string> t;
		 t = a->GetAllStrPinyins(r);;
	for (int i = 0; i < t.size(); i++){
		std::cout << t[i] << std::endl;
	}
	system("pause");
	return 0;
}

