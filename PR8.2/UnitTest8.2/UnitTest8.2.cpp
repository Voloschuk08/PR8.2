#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.2/PR8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testStr1 = "This is   a test";

			Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(testStr1));
		}
	};
}
