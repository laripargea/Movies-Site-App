#pragma once
#include <string>
#include "filme.h"
#include <vector>
#include <windows.h>
#include <shellapi.h>

class ExportBase
{
public:
	ExportBase();
	virtual void write_filmslist_in_file(vector<Film> v, string filename)=0;
	
};