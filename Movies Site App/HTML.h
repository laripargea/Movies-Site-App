#pragma once
#include "repo_filme.h"
#include "ExportBase.h"

///////////
//html class
///////////

class HTML:public ExportBase
{
public:
	//
	// default constructor
	//
	HTML();

	// Inherited via ExportBase
	virtual void write_filmslist_in_file(vector<Film> v, string filename) override;

	~HTML();
};