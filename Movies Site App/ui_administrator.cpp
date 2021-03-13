#include "ui_administrator.h"

using namespace std;

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

ui_administrator::ui_administrator() {
}

/// <summary>	Menu administrator. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

void ui_administrator::Menu_Administrator(RepoFilms* films)
{
	ControllerAdmin ctrl;

	int option;
	do {
		cout << "Administrator Menu:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Add movie" << endl;
		cout << "2. Delete movie" << endl;
		cout << "3. Modify title" << endl;
		cout << "4. Modify genre" << endl;
		cout << "5. Modify release year" << endl;
		cout << "6. Modify likes" << endl;
		cout << "7. Modify trailer" << endl;
		cout << "8. Show the list of movies" << endl;
		cout << "9. Show in file" << endl;

		cout << "Please choose an option: "; cin >> option; cout << endl;

		ctrl.options_admin(option, films);

	} while (option != 0);
}