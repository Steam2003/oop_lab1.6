#include "pch.h"
#include "CppUnitTest.h"
#include "../Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time::Triad a;
			a.Init(1, 2, 3);
			Time a2;
			a2.Init(a);
			int test = a2.GetHours();
			Assert::AreEqual(test, 1);
		}
	};
}
