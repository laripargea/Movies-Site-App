#include "filme.h"

using namespace std;

/// <summary>	Constructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="titel">		   	The titel. </param>
/// <param name="genre">		   	The genre. </param>
/// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>
/// <param name="likes">		   	The likes. </param>
/// <param name="trailer">		   	The trailer. </param>

Film::Film(string titel, string genre, int erscheinungsjahr, int likes, string trailer)
{
    Title = titel;
    Genre = genre;
    Releaseyear = erscheinungsjahr;
    Likes = likes;
    Trailer = trailer;
}

/// <summary>	Gets the titel. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <returns>	The titel. </returns>

string Film::get_Title()
{
    return Title;
}

/// <summary>	Gets the genre. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <returns>	The genre. </returns>

string Film::get_Genre()
{
    return Genre;
}

/// <summary>	Gets the erscheinungsjahr. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <returns>	The erscheinungsjahr. </returns>

int Film::get_Releaseyear()
{
    return Releaseyear;
}

/// <summary>	Gets the likes. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <returns>	The likes. </returns>

int Film::get_Likes()
{
    return Likes;
}

/// <summary>	Gets the trailer. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <returns>	The trailer. </returns>

string Film::get_Trailer()
{
    return Trailer;
}

/// <summary>	Sets a titel. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="titel">	The titel. </param>

void Film::set_Title(string titel)
{
    Title = titel;
}

/// <summary>	Sets a genre. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="genre">	The genre. </param>

void Film::set_Genre(string genre)
{
    Genre = genre;
}

/// <summary>	Sets an erscheinungsjahr. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>

void Film::set_Releaseyear(int erscheinungsjahr)
{ 
   Releaseyear = erscheinungsjahr;
}

/// <summary>	Sets the likes. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="likes">	The likes. </param>

void Film::set_Likes(int likes)
{ 
    Likes = likes;
}

/// <summary>	Sets a trailer. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="trailer">	The trailer. </param>

void Film::set_Trailer(string trailer)
{ 
   Trailer = trailer;
}

/// <summary>	Equality operator. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="flm">	The flm. </param>
///
/// <returns>	True if the parameters are considered equivalent. </returns>

bool Film::operator==(const Film& flm)
{
    return flm.Title == Title && flm.Genre == Genre && flm.Releaseyear == Releaseyear && flm.Likes == Likes && flm.Trailer == Trailer;
}

/// <summary>	Destructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

Film::~Film()
{
}