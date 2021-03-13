#include "TXT.h"

TXT::TXT() {

}

TXT::~TXT() {

}


/// <summary>	Writes a filmslist in file. </summary>
///
/// <remarks>	Maria, 08/05/2020. </remarks>
///
/// <param name="v">	   	A vector&lt;Film&gt; to process. </param>
/// <param name="filename">	Filename of the file. </param>

void TXT::write_filmslist_in_file(vector<Film> v, string filename)
{
    ofstream fin;
    fin.open(filename, ios::out | ios::trunc);
    for (int i = 0; i < v.size(); i++)
        fin << i << "." << v.at(i).get_Title() << "," << v.at(i).get_Genre() << "," << v.at(i).get_Releaseyear() << "," << v.at(i).get_Likes() << "," << v.at(i).get_Trailer() << endl;

    fin.close();
}