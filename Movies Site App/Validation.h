#pragma once
#include "filme.h"
#include "repo_filme.h"

class Validation
{
public:
	//
	//default constructor
	//
	Validation();

	//
	//validates length of string
	//
	bool ensure_valid_length(string s);
	
	//
	//validates sign of integer
	//
	bool ensure_positive(int a);
};

