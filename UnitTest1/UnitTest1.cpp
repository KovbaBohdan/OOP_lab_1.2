#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_lab_1.2/Vector.h"
#include "../OOP_lab_1.2/Vector.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector v;
			Assert::IsTrue(v.Init(1));
			Assert::IsFalse(v.Init(-1));
		}
	};
}
