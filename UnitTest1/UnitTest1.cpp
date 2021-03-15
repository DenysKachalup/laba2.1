#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.1/Line.h"
#include "../lab2.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line a(3, 3), b(2, 2);
			Line q = a + b;
			double s = q.GetFirst();
			Assert::AreEqual(s,5.0);
		}
	};
}
