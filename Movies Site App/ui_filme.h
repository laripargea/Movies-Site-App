#pragma once
#include <iostream>
#include "controller_filme.h"
#include "filme.h"
#include "repo_filme.h"

/// <summary>	A filme. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

class ui_films
{
public:
	ControllerFilms ctrl;
	RepoFilms films;

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ui_films();

	/// <summary>	Menus this.  </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	void Menu();
};
