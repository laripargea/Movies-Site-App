#pragma once
#include "repo_filme.h"
#include <iostream>
#include <string>
#include <algorithm>

/// <summary>	A controller admin. </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>

class ControllerAdmin
{
public:
	/// <summary>	Zeigens this.  </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	void show_film(Film film);

	void show_films(RepoFilms* repo);

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ControllerAdmin();

	/// <summary>	Options admin. </summary>
	///
	/// <remarks>	Maria, 5/1/2020. </remarks>
	///
	/// <param name="i">   	Zero-based index of the. </param>
	/// <param name="repo">	[in,out] If non-null, the repo. </param>

	void options_admin(int i, RepoFilms* repo);
};