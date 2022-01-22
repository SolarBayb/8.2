#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/Olga/source/repos/8.2/8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int b = MaxLength(" ");
			Assert::AreEqual(1, b);
		}
	};
}
