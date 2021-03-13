#include "ui_filme.h"

using namespace std;

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

ui_films::ui_films() {
		films.read_from_file("films.txt");
	
}

/// <summary>	Menus this.  </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

void ui_films::Menu()
{

	int option;
	do {
		cout << "Main Menu:" << endl;
		cout << "0. Exit" << endl;
		cout << "1. Administrator" << endl;
		cout << "2. User" << endl;
		cout << "Please choose an option: "; cin >> option; cout << endl;

		ctrl.options_films(option, &films);

	} while (option != 0);
}