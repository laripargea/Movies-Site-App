#include "controller_benutzer.h"
using namespace std;


/// <summary>	Default constructor. </summary>
///
/// <remarks>	Moni, 11-Apr-20. </remarks>

ControllerUser::ControllerUser() {
	mapexports.insert(make_pair("HTML", new HTML));
	mapexports.insert(make_pair("TXT", new TXT));
	mapexports.insert(make_pair("CSV", new CSV));
}

/// <summary>	Zeigens this.  </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>

void ControllerUser::show_film(Film film) {
	cout << "Titel: " << film.get_Title() << " Genre: " << film.get_Genre() << " Erscheinungsjahr: " << film.get_Releaseyear() << " Likes: " << film.get_Likes() << " Trailer: " << film.get_Trailer() << endl;
}

void ControllerUser::show_films(RepoFilms* repo)
{
	for (int i = 0; i < repo->get_films().size(); i++) {
		cout << i << ". ";
		show_film(repo->get_films().at(i));
	}
}

/// <summary>	Filme genre. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="genre">	The genre. </param>

void ControllerUser::films_genre(string genre, RepoFilms* repo)
{
	for (int i = 0; i < repo->get_films().size(); i++)
		if (repo->get_films()[i].get_Genre() == genre)
		{
			ShellExecuteA(0, "open", repo->get_films()[i].get_Trailer().c_str(), 0, 0, SW_SHOW);
			show_film(repo->get_films()[i]);
		}
}

/// <summary>	Shows the watch. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

void ControllerUser::show_watchlist(RepoFilms* repo)
{
	for (int i = 0; i < repo->get_watchlist().size(); i++) {
		cout << i << ". ";
		show_film(repo->get_watchlist().at(i));
	}
	mapexports["TXT"]->write_filmslist_in_file(repo->get_watchlist(), "watchlist.txt");
}


void ControllerUser::show_file(string filename) {

	//
	// displays content of file
	// param: string filename
	//

	ShellExecuteA(0, "open", filename.c_str(), 0, 0, SW_SHOW);
}

/// <summary>	Menius. </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>
///
/// <param name="i">   	Zero-based index of the. </param>
/// <param name="repo">	[in,out] If non-null, the repo. </param>

void ControllerUser::options_user(int i, RepoFilms* repo)
{
	int  index;
	string t, g, tr, genre, opt;
	switch (i) {
	case 0:
		cout << "Exit" << endl;
		cout << endl;
		break;

	case 1:
		show_films(repo);
		cout << "Which is the genre for the films you want to show?" << endl;
		cin >> genre;
		films_genre(genre, repo);
		cout << endl;
		break;

	case 2:
		show_films(repo);
		cout << "\n\nPlease choose the film`s index:";
		cin >> index;
		repo->add_watchlist(repo->get_films()[index]);
		show_watchlist(repo);
		cout << endl;
		break;

	case 3:
		cout << "Which film do you want to delete?\n";
		show_watchlist(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		repo->delete_watchlist(index);
		cout << endl;
		break;

	case 4:
		show_watchlist(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		repo->likes(index);
		show_watchlist(repo);
		cout << endl;
		break;

	case 5:
		show_watchlist(repo);
		cout << endl;
		break;

	case 6:
		cout << "\nChose export type for file: CSV, HTML, TXT\n";
		cin >> opt;

		if (opt == "CSV") {
			mapexports["CSV"]->write_filmslist_in_file(repo->get_watchlist(),"films.csv");
			show_file("films.csv");
		}

		if (opt == "HTML") {
			mapexports["HTML"]->write_filmslist_in_file(repo->get_watchlist(), "films.html");
			show_file("films.html");
		}

		if (opt == "TXT") {
			mapexports["TXT"]->write_filmslist_in_file(repo->get_watchlist(), "watchlist.txt");
			show_file("watchlist.txt");
		}
		break;

	default:
		cout << "Please choose another option!\n";
		cout << endl;
		break;
	}
}