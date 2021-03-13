#pragma once
#include <string>
#include <iostream>
#include <windows.h>
#include <shellapi.h>

using namespace std;

/// <summary>	A filme. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

class Film
{
    //friend class RepoFilms;

private:
    string Title;
    string Genre;
    int Releaseyear;
    int Likes;
    string Trailer;
    
public:

    /// <summary>	Constructor. </summary>
    ///
    /// <remarks>	Maria, 4/11/2020. </remarks>
    ///
    /// <param name="titel">		   	The titel. </param>
    /// <param name="genre">		   	The genre. </param>
    /// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>
    /// <param name="likes">		   	The likes. </param>
    /// <param name="trailer">		   	The trailer. </param>

    Film(string titel, string genre, int erscheinungsjahr, int likes, string trailer);

    /// <summary>	Gets the titel. </summary>
    ///
    /// <remarks>	Maria, 4/11/2020. </remarks>
    ///
    /// <returns>	The titel. </returns>

    string get_Title();

    /// <summary>	Gets the genre. </summary>
    ///
    /// <remarks>	Maria, 4/11/2020. </remarks>
    ///
    /// <returns>	The genre. </returns>

    string get_Genre();

    /// <summary>	Gets the erscheinungsjahr. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <returns>	The erscheinungsjahr. </returns>

    int get_Releaseyear();

    /// <summary>	Gets the likes. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <returns>	The likes. </returns>

    int get_Likes();

    /// <summary>	Gets the trailer. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <returns>	The trailer. </returns>

    string get_Trailer();

    /// <summary>	Sets a titel. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="titel">	The titel. </param>

    void set_Title(string titel);

    /// <summary>	Sets a genre. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="genre">	The genre. </param>

    void set_Genre(string genre);

    /// <summary>	Sets an erscheinungsjahr. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>

    void set_Releaseyear(int erscheinungsjahr);

    /// <summary>	Sets the likes. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="likes">	The likes. </param>

    void set_Likes(int likes);

    /// <summary>	Sets a trailer. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>
    ///
    /// <param name="trailer">	The trailer. </param>

    void set_Trailer(string trailer);

    /// <summary>	Equality operator. </summary>
    ///
    /// <remarks>	Maria, 4/11/2020. </remarks>
    ///
    /// <param name="flm">	The flm. </param>
    ///
    /// <returns>	True if the parameters are considered equivalent. </returns>

    bool operator==(const Film& flm);

    /// <summary>	Destructor. </summary>
    ///
    /// <remarks>	Larisa, 4/10/2020. </remarks>

    ~Film();
};