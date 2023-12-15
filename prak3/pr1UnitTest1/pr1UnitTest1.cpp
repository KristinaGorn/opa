#include "pch.h"
#include "CppUnitTest.h"
#include "fstream"
#include "..\Project1\Data.h"
#include "..\Project1\Data.cpp"
#include "..\Project1\Estate.cpp"
#include "..\Project1\Estate.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace pr1UnitTest1
{
	TEST_CLASS(pr1UnitTest1)
	{
	public:
		
		TEST_METHOD(DataDefTest)
		{
			Data Date1;
			Assert::IsTrue((Date1.dd == 0)&&(Date1.mm == 0)&&(Date1.yyyy == 0));
		}
		TEST_METHOD(DataPrintTest)
		{
			Data date;
			date.dd = 28;
			date.mm = 05;
			date.yyyy = 2023;
			std::string str = "28/5/2023";
			std::stringstream sout;
			date.print(sout);
			Assert::AreEqual(str, sout.str());
		}
		TEST_METHOD(DataCorrectTest)
		{
			Data date;
			date.dd = 22;
			date.mm = 6;
			date.yyyy = 2004;
			Assert::IsTrue(((date.dd > 0) && (date.dd <= 31)) && ((date.mm > 0) && (date.mm <= 12)) && ((date.yyyy > 1900) && (date.yyyy < 2300)));
		}

		TEST_METHOD(DataInCorrectTest)
		{
			Data date;
			date.dd = 222;
			date.mm = 66;
			date.yyyy = 20041;
			Assert::IsTrue( !(((date.dd > 0) && (date.dd <= 31)) && ((date.mm > 0) && (date.mm <= 12)) && ((date.yyyy > 1900) && (date.yyyy < 2300))));
		}
		TEST_METHOD(EstatePrintTest)
		{
			Estate morzh;
			morzh.name = "Boris";
			morzh.topic = "Udichka";
			morzh.date.dd = 12;
			morzh.date.mm = 02;
			morzh.date.yyyy = 1996;
			std::string str = "Boris Udichka 12/2/1996\n";
			std::stringstream sout;
			morzh.print(sout);
			Assert::AreEqual(str, sout.str());
		}
	};
}
