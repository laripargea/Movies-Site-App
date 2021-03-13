#include "ui_benutzer.h"

using namespace std;

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

ui_user::ui_user() {

}

/// <summary>	Menu benutzer. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

void ui_user::Menu_User(RepoFilms* films)
{
	ControllerUser ctrl;
	

	int option;
	do {
		cout << "User Menu:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Show films by genre" << endl;
		cout << "2. Add movie" << endl;
		cout << "3. Delete movie" << endl;
		cout << "4. Rate movie" << endl;
		cout << "5. Show the list of movies " << endl;
		cout << "6. Watchlist in chosen File " << endl;
		

		cout << "Please choose an option: "; cin >> option; cout << endl;

		ctrl.options_user(option, films);

	} while (option != 0);
}
