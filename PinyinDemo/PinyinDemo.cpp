// PinyinDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"Pinyin.h"
#include<time.h>


int _tmain(int argc, _TCHAR* argv[])
{
	Pinyin *a = new Pinyin();
	wchar_t *r = L"��������������";
	std::vector<std::string> t;
		 t = a->GetAllStrPinyins(r);;
	for (int i = 0; i < t.size(); i++){
		std::cout << t[i] << std::endl;
	}
	system("pause");
	return 0;
}

