#include "controller_administrator.h"
using namespace std;
#include <exception>

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Moni, 11-Apr-20. </remarks>

ControllerAdmin::ControllerAdmin() {

}

/// <summary>	Zeigens this.  </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>

void ControllerAdmin::show_film(Film film) {
	cout << "Titel: " << film.get_Title() << " Genre: " << film.get_Genre() << " Erscheinungsjahr: " << film.get_Releaseyear() << " Likes: " << film.get_Likes() << " Trailer: " << film.get_Trailer() << endl;
}

void ControllerAdmin::show_films(RepoFilms* repo)
{
	for (int i = 0; i < repo->get_films().size(); i++) {
		cout << i << ". ";
		show_film(repo->get_films().at(i));
	}

	ofstream fin;
	fin.open("films.txt", ios::out | ios::trunc);
	for (int i = 0; i < repo->get_films().size(); i++)
		fin << repo->get_films().at(i).get_Title() << " " << repo->get_films().at(i).get_Genre() << " " << repo->get_films().at(i).get_Releaseyear() << " " << repo->get_films().at(i).get_Likes() << " " << repo->get_films().at(i).get_Trailer() << endl;

	fin.close();
}

/// <summary>	Menius. </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>
///
/// <param name="i">   	Zero-based index of the. </param>
/// <param name="repo">	[in,out] If non-null, the repo. </param>

void ControllerAdmin::options_admin(int i, RepoFilms* repo)
{
	int j,l,index, erscheinungsjahr,likes;
	string t,g,tr,titel,genre,trailer;
	Film* flm;
	
	switch (i) {
	case 0:
		cout << "Exit" << endl;
		cout << endl;
		break;

	case 1:
		cout << "Introduce new film\n";
		cout << "Title: ";
		cin >> t;
		cout << "Genre: ";
		cin >> g;
		cout << "ReleaseYear: ";
		cin >> j;
		cout << "Likes: ";
		cin >> l;
		cout << "Trailer:";
		cin >> tr;
		flm =new Film(t, g, j, l, tr);
		repo->add(*flm);
		show_films(repo);
		delete flm;
		cout << endl;
		break;

	case 2:
		cout << "Which film do you want to delete?\n";
		show_films(repo);
		cout << "Please choose film`s index:";
		cin >> index;
		repo->remove(index);
		cout << endl;
		show_films(repo);
		cout << endl;
		break;

	case 3:
		show_films(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		cout << "Which is the new title?";
		cin >> titel;
		repo->edit_title(index,titel);
		cout << endl;
		break;

	case 4:
		show_films(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		cout << "Which is the new genre?";
		cin >> genre;
		repo->edit_genre(index, genre);
		cout << endl;
		break;

	case 5:
		show_films(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		cout << "Which is the new Release Year?";
		cin >> erscheinungsjahr;
		repo->edit_releaseyear(index, erscheinungsjahr);
		cout << endl;
		break;

	case 6:
		show_films(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		cout << "Which is the new number of Likes?";
		cin >> likes;
		repo->edit_likes(index, likes);
		cout << endl;
		break;

	case 7:
		show_films(repo);
		cout << "Please choose the film`s index:";
		cin >> index;
		cout << "which is the new trailer?";
		cin >> trailer;
		repo->edit_trailer(index, trailer);
		cout << endl;
		break;

	case 8:
		show_films(repo);
		cout << endl;
		break;
	case 9:
		ShellExecuteA(0, "open", "films.txt", 0, 0, SW_SHOW);
		break;

	default:
		cout << "Please choose another option!\n";
		cout << endl;
		break;
	}
}