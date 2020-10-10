#include "Location.h"
#include <type_traits>
#include <algorithm>

template<typename Base, typename T>
inline bool instanceof(const T*) {
	return std::is_base_of<Base, T>::value;
}
Location::Location(eFile file = A, int rank = 0){
	this->file = file;
	this->rank = rank;
}

eFile Location::getFile() {
	return file;
}

int Location::getRank() {
	return rank;
}

bool Location::Equals(const Location& o) {

	if (this == &o) { return true; }
	if (!(instanceof<Location>(&o))) { return false; }
	Location location = (Location)o;
	return file == location.file && rank == location.rank;
}

	
