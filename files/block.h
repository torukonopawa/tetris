#include <vector>

#ifndef BLOCK_H
#define BLOCK_H

class block {
	public:
		block(char blockType, char inside);
		~block();
		
		std::vector< std::vector<char> > blockVectorCreate();
		//void blockClear();
		
	private:
		std::vector< std::vector<char> > blockVector;
		//std::vector<char> *blocksPointer;
		char blockName, blockShape;
		int size;
};

//constructor - destructor
block::block(char blockType, char inside) {
	blockName = blockType;
	blockShape = inside;
	blockVector.clear();
	//blockVector.resize(16);
	//blocksPointer = &blockVector;
}

block::~block() {
}

//methods (member functions)
std::vector< std::vector<char> > block::blockVectorCreate() {
	switch(blockName)
	{
		case 'I':
			blockVector.resize(1);
			blockVector[0].resize(4); //0.row sized as 4
			//blockVector[1].resize(4);
			blockVector[0].assign(4,'|');
			blockVector[0][0]=blockShape;
			blockVector[0][1]=blockShape;
			blockVector[0][2]=blockShape;
			blockVector[0][3]=blockShape;
			break;
		case 'J':
			blockVector.resize(2);
			blockVector[0].resize(3); //0.row sized as 4
			blockVector[1].resize(3); //1.row sized as 4
			blockVector[0].assign(3,'|');
			blockVector[1].assign(3,'|');
			blockVector[0][0]=blockShape;
			blockVector[0][1]=blockShape;
			blockVector[0][2]=blockShape;
			blockVector[1][2]=blockShape;
			break;
		case 'L':
			blockVector.resize(2);
			blockVector[0].resize(3); //0.row sized as 4
			blockVector[1].resize(3); //1.row sized as 4
			blockVector[0].assign(3,'|');
			blockVector[1].assign(3,'|');
			blockVector[0][2]=blockShape;
			blockVector[1][0]=blockShape;
			blockVector[1][1]=blockShape;
			blockVector[1][2]=blockShape;
			break;
		case 'O':
			blockVector.resize(2);
			blockVector[0].resize(2);
			blockVector[1].resize(2);
			blockVector[0].assign(2,'|');
			blockVector[1].assign(2,'|');
			blockVector[0][0]=blockShape;
			blockVector[0][1]=blockShape;
			blockVector[1][0]=blockShape;
			blockVector[1][1]=blockShape;
			break;
		case 'S':
			blockVector.resize(2);
			blockVector[0].resize(3);
			blockVector[1].resize(3);
			blockVector[0].assign(3,'|');
			blockVector[1].assign(3,'|');
			blockVector[0][1]=blockShape;
			blockVector[0][2]=blockShape;
			blockVector[1][0]=blockShape;
			blockVector[1][1]=blockShape;
			break;
		case 'T':
			blockVector.resize(2);
			blockVector[0].resize(3);
			blockVector[1].resize(3);
			blockVector[0].assign(3,'|');
			blockVector[1].assign(3,'|');
			blockVector[0][1]=blockShape;
			blockVector[1][0]=blockShape;
			blockVector[1][1]=blockShape;
			blockVector[1][2]=blockShape;
			break;
		case 'Z':
			blockVector.resize(2);
			blockVector[0].resize(3);
			blockVector[1].resize(3);
			blockVector[0].assign(3,'|');
			blockVector[1].assign(3,'|');
			blockVector[0][0]=blockShape;
			blockVector[0][1]=blockShape;
			blockVector[1][1]=blockShape;
			blockVector[1][2]=blockShape;
			break;
	}
	
	return blockVector;
}
/*
void block::blockClear() {
	blockVector.clear();
	blockVector.resize(16);
}
*/

#endif
