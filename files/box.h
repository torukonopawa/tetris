#include <iostream>
#include <vector>

#ifndef BOX_H
#define BOX_H

//box top; top.create_box(

class box {
	public:
		box(int boxHeight, int boxWidth, char boxInside);
		~box();
		
		void draw();
		//void clearInside();		
		void insertBlock(std::vector< std::vector<char> > block, char blockIndex);
		//void refresh(); //prop on another library with movement
		std::vector< std::vector<char> > map;
		
	private:
		void insert();
		
		int height, width;
		int cursor;
		char inside, outside;
		//std::vector<char> map;
};

//constructor - destructor
box::box(int boxHeight, int boxWidth, char boxInside) {
	height = boxHeight;
	width = boxWidth;
	cursor = 0;
	inside = boxInside;
	map.resize(boxHeight);
	for(int i=0; i < boxHeight ;i++) map[i].resize(boxWidth);
	box::insert();
}

box::~box() {
}

//methods (member functions)
void box::insert() {
	for(int i=0; i < height ;i++)
	{
		for(int k=0; k < width ;k++)
		{
			map[i][k] = inside;
		}
	}
}
/*
void box::clearInside() {
	int temp = cursor;
	for(int i=0; i < (height - 2) ;i++)
	{
	    for(int j=0; j < (width - 2) ;j++)
	    {
	    	map[cursor] = inside;
	    	cursor += 1;
		}
	    cursor += 2;
	}
	cursor = temp;
}
*/
void box::draw() {
	for(int i=0; i < height ;i++)
	{
		for(int j=0; j < width ;j++)
		{
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}
}

void box::insertBlock(std::vector< std::vector<char> > block, char blockIndex) {
	if(blockIndex == 'I') { block.resize(2); block[1].resize(4); block[1].assign(4,'|'); }
	//else block.resize(8);
	for(int i=0; i < height ;i++)
	{
	    for(int j=0; j < width ;j++)
	    {
	    	map[i][j] = block[i][j];
		}
	}
}

#endif
