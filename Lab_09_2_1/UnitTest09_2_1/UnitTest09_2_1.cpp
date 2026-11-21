#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_09_2_1/Lab_09_2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0921
{
	TEST_CLASS(UnitTest0921)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2;
			double z = 7;                                   // 5 < z < 10 – перша гілка
			double w = MAX(x, z) * MIN(x + z, x * z);       // 7 * 9
			Assert::AreEqual(63.0, w);
		}
	};
}
