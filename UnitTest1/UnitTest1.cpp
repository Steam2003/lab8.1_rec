#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			char k[] = { "qwerty***qwerty" };
			t = IsOrNot(k, 0);
			Assert::AreEqual(t, true);
		}
	};
}
