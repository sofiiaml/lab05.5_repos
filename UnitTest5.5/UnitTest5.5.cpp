#include "pch.h"
#include "CppUnitTest.h"
#include "../05.5/05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = bn(2,4,3);
			Assert::AreEqual(t, 32, 0.000001);

		}
	};
}
