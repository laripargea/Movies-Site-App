#pragma once
#include <string>
#include <vector>
#include "filme.h"
#include <fstream>
#include "Validation.h"

using namespace std;

/// <summary>	A repo filme. </summary>
///
/// <remarks>	Moni, 12-Apr-20. </remarks>

class RepoFilms
{
private:
    vector <Film> films;
    vector <Film> watchlist;

public:
    /// <summary>	Default constructor. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>

    RepoFilms();

    /// <summary>	Hinzufugens the given film. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="film">	The film. </param>

    void add(Film film);

    /// <summary>	Loschens. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>

    void remove(int index);

    /// <summary>	Edit titel. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>
    /// <param name="titel">	The titel. </param>

    void edit_title(int index, string titel);

    /// <summary>	Edit genre. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>
    /// <param name="genre">	The genre. </param>
 

    void edit_genre(int index, string genre);

    /// <summary>	Edit erscheinungsjahr. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">		   	Zero-based index of the. </param>
    /// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>

    void edit_releaseyear(int index, int erscheinungsjahr);

    /// <summary>	Edit likes. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>
    /// <param name="likes">	The likes. </param>

    void edit_likes(int index, int likes);

    /// <summary>	Edit trailer. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="index">  	Zero-based index of the. </param>
    /// <param name="trailer">	The trailer. </param>

    void edit_trailer(int index, string trailer);

    /// <summary>	Adds a watchliste. </summary>
    ///
    /// <remarks>	Larisa, 4/11/2020. </remarks>
    ///
    /// <param name="film">	The film. </param>

    void add_watchlist(Film film);

    /// <summary>	Deletes the watchliste described by index. </summary>
    ///
    /// <remarks>	Larisa, 4/11/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>

    void delete_watchlist(int index);

    /// <summary>	Likes. </summary>
    ///
    /// <remarks>	Larisa, 4/11/2020. </remarks>
    ///
    /// <param name="index">	Zero-based index of the. </param>

    void likes(int index);

    /// <summary>	Gets the films. </summary>
    ///
    /// <remarks>	Maria, 5/1/2020. </remarks>

    vector <Film> get_films();

    /// <summary>	Gets the watchliste. </summary>
    ///
    /// <remarks>	Maria, 5/1/2020. </remarks>
    ///
    /// <returns>	The watchliste. </returns>

    vector <Film> get_watchlist();

    //reads from file

    void read_from_file(string filename);

    /// <summary>	Destructor. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>

    ~RepoFilms();
};