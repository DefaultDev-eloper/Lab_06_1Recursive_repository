#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1Recursive.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int test_b[size] = { -4, 2, -6, 0, 5 };
			int count = 0;

			int actual_sum = SumRec(test_b, size, count, 0);

			int expected_sum = -10;
			int expected_count = 3;

			Assert::AreEqual(expected_sum, actual_sum);
			Assert::AreEqual(expected_count, count);

			Assert::AreEqual(0, test_b[0]);
			Assert::AreEqual(2, test_b[1]);
			Assert::AreEqual(0, test_b[2]);
			Assert::AreEqual(0, test_b[3]);
			Assert::AreEqual(5, test_b[4]);
		}
	};
}
