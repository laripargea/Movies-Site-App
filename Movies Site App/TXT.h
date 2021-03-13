#pragma once
#include "ExportBase.h"
#include <fstream>

class TXT:public ExportBase{
public:
	TXT();
	
	~TXT();

	virtual void write_filmslist_in_file(vector<Film> v, string filename) override;
};