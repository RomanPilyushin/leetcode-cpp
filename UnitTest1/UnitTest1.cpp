#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int getSum(int x, int y)
{
	return x + y;
}


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5;
			int y = 3;

			Assert::IsTrue(getSum(x, y) == 2);
		}

	};

	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			int x = 5;
			int y = 3;

			Assert::IsTrue(getSum(x, y) == 8);
		}

	};
}
