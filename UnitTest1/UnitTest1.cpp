#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_13.2.2/lab_13.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int even_number = 4;
			int odd_number = 5;

			Assert::IsTrue(IS_EVEN(even_number));
			Assert::IsFalse(IS_EVEN(odd_number));
		}
	};
}
