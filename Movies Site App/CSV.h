#pragma once
#include "repo_filme.h"
#include "ExportBase.h"

///////////
//csv class
///////////

class CSV :public ExportBase
{
public:
	//
	// default constructor
	//
	CSV();
 
	// Inherited via ExportBase
	virtual void write_filmslist_in_file(vector<Film> v, string filename) override;

	~CSV();
};