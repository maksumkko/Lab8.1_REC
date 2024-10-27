#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1_REC/Lab8.1_REC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81REC
{
	TEST_CLASS(UnitTest81REC)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "a,b,c";
			char expected1[] = "a**b**c";
			char* result1 = ReplaceCommasWithStars(str1);
			Assert::AreEqual(strcmp(result1, expected1), 0);
			delete[] result1;
		}
	};
}
