#pragma once
#include "ui_benutzer.h"
#include "ui_administrator.h"
#include "repo_filme.h"
#include <iostream>
#include <string>
#include <algorithm>

/// <summary>	A controller films. </summary>
///
/// <remarks>	Maria, 5/1/2020. </remarks>

class ControllerFilms
{
public:

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ControllerFilms();

	/// <summary>	Options films. </summary>
	///
	/// <remarks>	Maria, 5/1/2020. </remarks>
	///
	/// <param name="i">   	Zero-based index of the. </param>
	/// <param name="repo">	[in,out] If non-null, the repo. </param>

	void options_films(int i, RepoFilms* repo);
};