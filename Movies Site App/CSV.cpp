#include "CSV.h"

CSV::CSV() :ExportBase() {
    //
    // default constructor
    //
}


void CSV::write_filmslist_in_file(vector<Film> v, string filename)
{
    //
    // write to csv file
    // param: vector<Film> v, string filename
    //

    ofstream fin;
    fin.open(filename, ios::out | ios::trunc);
    for (int i = 0; i < v.size(); i++)
        fin << i << "," << v.at(i).get_Title() << "," << v.at(i).get_Genre() << "," << v.at(i).get_Releaseyear() << "," << v.at(i).get_Likes() << "," << v.at(i).get_Trailer() << endl;

    fin.close();
}

CSV::~CSV() {

}