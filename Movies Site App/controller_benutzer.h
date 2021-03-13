#pragma once
#include "repo_filme.h"
#include "CSV.h"
#include "HTML.h"
#include "TXT.h"
#include <iostream>
#include <string>
#include <algorithm>
#include "ExportBase.h"
#include <map>

/// <summary>	A controller user. </summary>
///
/// <remarks>	Maria, 5/1/2020. </remarks>

class ControllerUser
{
private:
	map <string, ExportBase*> mapexports;

public:

	/// <summary>	Default constructor. </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	ControllerUser();

	/// <summary>	Zeigens this.  </summary>
	///
	/// <remarks>	Moni, 12-Apr-20. </remarks>

	void show_film(Film film);

	/// <summary>	Filme genre. </summary>
	///
	/// <remarks>	Larisa, 4/11/2020. </remarks>
	///
	/// <param name="genre">	The genre. </param>

	void show_films(RepoFilms* repo);

	void films_genre(string genre, RepoFilms* repo);

	/// <summary>	Shows the watch. </summary>
	///
	/// <remarks>	Larisa, 4/11/2020. </remarks>

	void show_watchlist(RepoFilms* repo);

	void show_file(string filename);

	/// <summary>	Options user. </summary>
	///
	/// <remarks>	Maria, 5/1/2020. </remarks>
	///
	/// <param name="i">   	Zero-based index of the. </param>
	/// <param name="repo">	[in,out] If non-null, the repo. </param>

	void options_user(int i, RepoFilms* repo);
};

