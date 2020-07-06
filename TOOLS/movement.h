#include <iostream>
#include <vector>

#ifndef MOVEMENT_H
#define MOVEMENT_H

class movement {
	public:
		movement(std::vector<char> bottomMap, std::vector< std::vector<char> > blockVector);
	
	private:
		std::vector<char> map;
		std::vector< std::vector<char> > block;
};

//constructor - destructor
movement::movement(std::vector<char> bottomMap, vector< vector<char> > blockVector) {
	map = bottomMap;
	block = blockVector;
	
}

movement::~movement() {
}

//member functions (methods)


#endif
