#include "repo_filme.h"
#include <sstream>

/// <summary>	Default constructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

RepoFilms::RepoFilms()
{
}

/// <summary>	Hinzufugens the given film. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="film">	The film. </param>

void RepoFilms::add(Film film)
{   
    Validation va;
    bool exist = false;
    try {
        if (va.ensure_positive(film.get_Likes()) == false)
            throw exception("Likes must be positive");
        if (va.ensure_valid_length(film.get_Genre()) == false)
            throw exception("Genre must have less than 10 letters!");
        if (va.ensure_positive(film.get_Releaseyear()) == false)
            throw exception("The Release Year must be positive!");
        for (int i = 0; i < films.size(); i++)
            if (films.at(i) == film)
                exist = true;
        if (exist != true)
            films.push_back(film);
    }
    catch (exception&) {
    } 
}

/// <summary>	Loschens. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>

void RepoFilms::remove(int index)
{
    if (index < films.size())
      for (int i = 0; i < films.size(); i++)
          if (i == index)
          {
                films.erase(films.begin() + i);
                break;
          }
}

/// <summary>	Edit titel. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>
/// <param name="title">	The title. </param>

void RepoFilms::edit_title(int index, string title)
{
    films[index].set_Title(title);
}

/// <summary>	Edit genre. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>
/// <param name="genre">	The genre. </param>

void RepoFilms::edit_genre(int index, string genre)
{
    films[index].set_Genre(genre);
}

/// <summary>	Edit erscheinungsjahr. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">		   	Zero-based index of the. </param>
/// <param name="erscheinungsjahr">	The erscheinungsjahr. </param>

void RepoFilms::edit_releaseyear(int index, int erscheinungsjahr)
{
    films[index].set_Releaseyear(erscheinungsjahr);
}

/// <summary>	Edit likes. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>
/// <param name="likes">	The likes. </param>

void RepoFilms::edit_likes(int index, int likes)
{
    films[index].set_Likes(likes);
}

/// <summary>	Edit trailer. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">  	Zero-based index of the. </param>
/// <param name="trailer">	The trailer. </param>

void RepoFilms::edit_trailer(int index, string trailer)
{
    films[index].set_Trailer(trailer);
}

/// <summary>	Adds a watchliste. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="film">	The film. </param>

void RepoFilms::add_watchlist(Film film)
{
    watchlist.push_back(film);
}

/// <summary>	Deletes the watchliste described by index. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>

void RepoFilms::delete_watchlist(int index)
{
    for (int i = 0; i < watchlist.size(); i++)
        if (i == index)
        {
            watchlist.erase(watchlist.begin() + i);
            break;
        }
}

/// <summary>	Likes. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>
///
/// <param name="index">	Zero-based index of the. </param>

void RepoFilms::likes(int index)
{
    watchlist[index].set_Likes(watchlist[index].get_Likes() + 1);
}

/// <summary>	Gets the films. </summary>
///
/// <remarks>	Maria, 5/1/2020. </remarks>
///
/// <returns>	The films. </returns>

vector <Film> RepoFilms::get_films() 
{
    return films;
}

/// <summary>	Gets the watchlist. </summary>
///
/// <remarks>	Maria, 5/1/2020. </remarks>
///
/// <returns>	The watchlist. </returns>

vector <Film> RepoFilms::get_watchlist()
{
    return watchlist;
}

void RepoFilms::read_from_file(string filename)
{
    ifstream myfile;
    myfile.open(filename);
    string title;
    string genre;
    int year;
    int likes;
    string trailer;
    if (myfile.is_open())
    {
        while (!myfile.eof())
            while (myfile >> title >> genre >> year >> likes >> trailer)
            {
                Film film = Film(title, genre, year, likes, trailer);
                films.push_back(film);
            }

        myfile.close();
    }
}

/// <summary>	Destructor. </summary>
///
/// <remarks>	Maria, 4/11/2020. </remarks>

RepoFilms::~RepoFilms()
{
}