#include "controller_filme.h"
using namespace std;

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Moni, 11-Apr-20. </remarks>

ControllerFilms::ControllerFilms() {
}

/// <summary>	Menius. </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>
///
/// <param name="i">   	Zero-based index of the. </param>
/// <param name="repo">	[in,out] If non-null, the repo. </param>

void ControllerFilms::options_films(int i, RepoFilms* repo)
{
	ui_user benutzer;
	ui_administrator admin;
	switch (i) {
	case 0:
		cout << "Exit"<<endl;
		cout << endl;
		break;

	case 1:
		
		admin.Menu_Administrator(repo);
		cout << endl;
		break;

	case 2:
		
		benutzer.Menu_User(repo);
		cout<<endl;
		break;

	default:
		cout << "Please choose another option!\n";
		cout << endl;
		break;
	}
}
