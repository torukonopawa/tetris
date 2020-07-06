#include <iostream>
#include <vector>

#ifndef MOVEMENT_H
#define MOVEMENT_H

class engine {
	public:
		engine(std::vector< std::vector<char> > bottomMap, std::vector< std::vector<char> > blockVector, char shiftDirection);
		~engine();
		
		std::vector< std::vector<char> > map;
		void moveTo_x();
		void moveTo_y();
	private:
		void initialInsert();
		void gravity();
		void rotate(char rotateDirection);
				
		std::vector< std::vector<char> > block;
		char direction;
		int cursorX, cursorY;
};

//constructor - destructor
engine::engine(std::vector< std::vector<char> > bottomMap, std::vector< std::vector<char> > blockVector, char shiftDirection) {
	map = bottomMap;
	block = blockVector;
	direction = shiftDirection;
	
	initialInsert();
}

engine::~engine() {
}

//member functions (methods)
void engine::initialInsert() {
	cursorX = 4;
	cursorY = 0;
	int tempx = cursorX, tempy = cursorY;
	for(int i=0; i < block.size() ;i++)
	{
		for(int j=0; j < block[i].size() ;j++)
		{
			map[cursorY][cursorX] = block[i][j];
			cursorX++;
		}
		cursorY++;
		cursorX = 4;
	}
	cursorX = tempx; cursorY = tempy;
}

void engine::moveTo_x() {
	int tempx = cursorX, tempy = cursorY;
	
	//left
	if(direction == 'a')
	{
		cursorX--;
		for(int i=0; i < block.size() ;i++)
		{
			for(int j=0; j < block[i].size() ;j++)
			{
				map[cursorY][cursorX] = block[i][j];
				cursorX++;
			}
			cursorY++;
			cursorX = tempx - 1;
		}
		cursorX = tempx; cursorY = tempy;
	}
	//right
	else if(direction == 'd')
	{
		cursorX++;
		for(int i=0; i < block.size() ;i++)
		{
			for(int j=0; j < block[i].size() ;j++)
			{
				map[cursorY][cursorX] = block[i][j];
				cursorX++;
			}
			cursorY++;
			cursorX = tempx + 1;
		}
		cursorX = tempx; cursorY = tempy;
	}
}

void engine::moveTo_y() {
	
}

void engine::gravity() {
	
}

void engine::rotate(char rotateDirection) {
	
}


#endif
