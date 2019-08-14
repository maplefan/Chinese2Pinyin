#include <stdexcept>
#include <vector>
#include <string>
#include<iostream>
#include<windows.h>

	typedef short Int16;
	typedef int Int32;
	typedef long long int Int64;
	class Pinyin
	{
		/// <summary>
		/// The minimum integer value of a valid Chinese character.
		/// The maximum integer value of a valid Chinese character.
		/// [12295, 12295]、 [19968, 40869]和 [59418, 59491]这三个区间
		/// </summary>
	private:
		static const Int32 MinValue = 12295;
		static const Int32 Part1MinValue = 19968;
		static const Int32 Part1MaxValue = 40869;
		static const Int32 Part2MinValue = 59418;
		static const Int32 Part2MaxValue = 59491;

		static const char* PinyinTable[];
		static const Int64 PinyinCodes[];
		static const Int64 PinyinPart1[];
		static const Int64 PinyinPart2[];

		static const Int64 ling = 175;

		static std::vector<std::string> DecodePinyins(Int64 pinyinCode);

	public:
		static bool IsChinese(wchar_t chr);
		static std::vector<std::string> GetPinyins(wchar_t chr);
		static std::vector<std::string> Pinyin::GetAllStrPinyins(wchar_t*);
	};

	std::string wchar_tToString(wchar_t *wchar);
	wchar_t* stringToWchar_t(std::string str);