#include "pch.h"
#include "CppUnitTest.h"
#include "Complex.h"
#include "Z:/university/ооп/програми/1.3/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex h;
			h.Sub();
			double x1 = 2;
			double y1 = 3;
			double x2 = 4;
			double y2 = 5;
			int test = h.Sub();
			Assert::AreEqual(test, 0);
		}
	};
}
