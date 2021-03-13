#pragma once
#include <iostream>
#include "controller_administrator.h"
#include "controller_filme.h"
#include "filme.h"
#include "repo_filme.h"

/// <summary>	An administrator. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

class ui_administrator
{
public:

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ui_administrator();

	/// <summary>	Menu administrator. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	void Menu_Administrator(RepoFilms* films);
};

