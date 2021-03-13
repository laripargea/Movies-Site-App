#include "HTML.h"

HTML::HTML() :ExportBase() {
    //
    // default constructor
    //
}

void HTML::write_filmslist_in_file(vector<Film> v, string filename)
{
    //
    // write to csv file
    // param: vector<Film> v, string filename
    //
    ofstream fin;
    fin.open(filename, ios::out | ios::trunc);
    fin << "<!DOCTYPE html>\n<html>\n<head>\n<title>Watchliste</title>\n</head>\n<body>\n<table style='background-color:violet' border='5' bordercolor='Lime' align='center'>\n<tr style='font-weight:bold;background-color:#8051E0'>\n<td>Title</td>\n<td>Genre</td>\n<td>Releaseyear</td>\n<td>Likes</td>\n<td>Trailer link</td>\n</tr>\n";
    for (int i = 0; i < v.size(); i++)
        fin << "<tr>\n<td>" << v[i].get_Title() << "</td>\n<td>" << v[i].get_Genre() << "</td>\n<td>" << v[i].get_Releaseyear() << "</td>\n<td>" << v[i].get_Likes() << "</td>\n<td><a href=" << v[i].get_Trailer() << ">Link</a>\n</td>\n</tr>\n";
    fin << "</table>\n</body>\n</html>\n";
    fin.close();
}

HTML::~HTML() {

}