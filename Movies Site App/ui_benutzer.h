#pragma once
#include <iostream>
#include "controller_benutzer.h"
#include "controller_filme.h"
#include "filme.h"
#include "repo_filme.h"

/// <summary>	A benutzer. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

class ui_user
{
public:

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ui_user();

	/// <summary>	Menu benutzer. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	void Menu_User(RepoFilms* films);
};
