#include "pch.h"
#include "CppUnitTest.h"
#include "../laba9.2/laba9.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string sur = "А";
			Student* s = new Student[2];
			s[0].prizv = "Б";
			s[0].kurs = 1;
			s[0].spec = KN;
			s[0].markPh = 5;
			s[0].markMath = 5;
			s[0].markInfo = 5;

			s[1].prizv = "А";
			s[1].kurs = 1;
			s[1].spec = KN;
			s[1].markPh = 4;
			s[1].markMath = 5;
			s[1].markInfo = 5;
			double testNum = LineSearch(s, 2);
			Assert::AreEqual(testNum, 50.);
			Sort(s, 2);
			Assert::AreEqual(s[0].prizv, sur);
		}
	};
}
