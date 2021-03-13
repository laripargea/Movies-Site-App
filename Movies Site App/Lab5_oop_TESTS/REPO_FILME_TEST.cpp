#include "pch.h"
#include "CppUnitTest.h"
#include "../repo_filme.h"
#include <cassert>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


// namespace: LAB5_oop_TEST
//
// summary:	.

namespace LAB5_oop_TEST
{
	/// <summary>	Copy constructor. </summary>
	///
	/// <remarks>	Maria, 4/10/2020. </remarks>
	///
	/// <param name="parameter1">	The first parameter. </param>

	TEST_CLASS(REPO_FILME_TEST)
	{
	public:
		RepoFilms test;

		TEST_METHOD(ConstructorTest)
		{
		}
		TEST_METHOD(hinzufugen_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
		    test.add(film);
			assert(test.get_films().size() == 1);

			Film film2 = Film("Countdown", "Horror", -1, 10000, "https://coiqoijoij");
			test.add(film2);
			Film film3 = Film("Countdown", "Horrrrorrrr", 2019, 10000, "https://coiqoijoij");
			test.add(film3);
			Film film4 = Film("Countdown", "Horror", 2030, -10000, "https://coiqoijoij");
			test.add(film4);
			Film film5 = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film5);
			assert(test.get_films().size() == 1);
		}

		TEST_METHOD(loschen_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.remove(0);
			assert(test.get_films().size() == 0);
			test.remove(100);
			assert(test.get_films().size() == 0);
		}

		TEST_METHOD(edit_titel_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.edit_title(0, "Blabla");
			assert(test.get_films()[0].get_Title() == "Blabla");
		}

		TEST_METHOD(edit_likes_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.edit_likes(0, 5);
			assert(test.get_films()[0].get_Likes() == 5);
			test.edit_likes(0, -5);
			assert(test.get_films()[0].get_Likes() == -5);

		}

		TEST_METHOD(edit_genre_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.edit_genre(0, "Romance");
			assert(test.get_films()[0].get_Genre() == "Romance");
		}

		TEST_METHOD(edit_releaseyear_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.edit_releaseyear(0,2019);
			assert(test.get_films()[0].get_Releaseyear() == 2019);
		}

		TEST_METHOD(edit_trailer_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.edit_trailer(0, "https://acoiqoijoij");
			assert(test.get_films()[0].get_Trailer() == "https://acoiqoijoij");
		}

		TEST_METHOD(add_watchliste_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.add_watchlist(test.get_films()[0]);
			assert(test.get_watchlist().size() == 1);
		}

		TEST_METHOD(delete_watchliste_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.add_watchlist(test.get_films()[0]);
			test.delete_watchlist(0);
			assert(test.get_watchlist().size() == 0);
		}
		
		TEST_METHOD(likes_Test)
		{
			Film film = Film("Countdown", "Horror", 2020, 10000, "https://coiqoijoij");
			test.add(film);
			test.add_watchlist(test.get_films()[0]);
			test.likes(0);
			assert(test.get_watchlist()[0].get_Likes() == 10001);
		}

		TEST_METHOD(read_file)
		{
			test.read_from_file("films.txt");
			assert(test.get_films().size() < 30);
		}
	};
}