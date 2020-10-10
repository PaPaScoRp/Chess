#pragma once
#include "File.h"
#include <type_traits>
#include <algorithm>
#include<sstream>  

class Location
{
	
private:
	eFile file;
	int rank;

public:
	 
	Location(eFile, int);
	eFile getFile();
	int getRank();
	bool Equals(const Location&);
	std::string ToString() {
		std::string fileAr[] = { "A", "B", "C", "D", "E", "F", "G", "H" };
		std::stringstream temp;
		temp << rank;
		std::string tempFinal;
		temp >> tempFinal;
		return fileAr[file] + "," + tempFinal;
	}
};
