#include "pch.h"
#include "CppUnitTest.h"
#include "../filme.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


// namespace: Lab5_oop_TESTS
//
// summary:	.

namespace Lab5_oop_TESTS
{
	/// <summary>	Copy constructor. </summary>
	///
	/// <remarks>	Maria, 4/13/2020. </remarks>
	///
	/// <param name="parameter1">	The first parameter. </param>

	TEST_CLASS(FILME_TEST)
	{
	public:
		TEST_METHOD(ConstructorTest)
		{
			auto film = new Film("Everything, Everything", "Romance", 2017, 6475, "https://www.youtube.com/watch?v=42KNwQ6u42U");
			Assert::AreEqual(string("Everything, Everything"), film->get_Title());
			Assert::AreEqual(string("Romance"), film->get_Genre());
			Assert::AreEqual(2017, film->get_Releaseyear());
			Assert::AreEqual(6475, film->get_Likes());
			Assert::AreEqual(string("https://www.youtube.com/watch?v=42KNwQ6u42U"), film->get_Trailer());

		}
	};
}

