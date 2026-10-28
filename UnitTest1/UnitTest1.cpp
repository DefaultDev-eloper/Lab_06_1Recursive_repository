#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1Recursive.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestCountRec)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			Assert::AreEqual(3, CountRec(test_b, size, 0));
		}

		TEST_METHOD(TestSumRec)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			Assert::AreEqual(-10, SumRec(test_b, size, 0));
		}

		TEST_METHOD(TestZeroRec)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			ZeroRec(test_b, size, 0);

			Assert::AreEqual(0, test_b[0]);
			Assert::AreEqual(2, test_b[1]);
			Assert::AreEqual(0, test_b[2]);
			Assert::AreEqual(0, test_b[3]);
			Assert::AreEqual(5, test_b[4]);
		}

		TEST_METHOD(TestCountAndSumDoNotModifyArray)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };

			CountRec(test_b, size, 0);
			SumRec(test_b, size, 0);

			Assert::AreEqual(-4, test_b[0]);
			Assert::AreEqual(2, test_b[1]);
			Assert::AreEqual(-6, test_b[2]);
			Assert::AreEqual(0, test_b[3]);
			Assert::AreEqual(5, test_b[4]);
		}
	};
}