#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop2.7\oop2.7\Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest27
{
	TEST_CLASS(UnitTest27)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Goods a;
			bool t;
			t = a.Init(111, 222, 333);
			Assert::AreEqual(t, true);
		}
	};
}
