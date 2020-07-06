#include <iostream>
#include <vector>
#include <string>

//#include <concol.h>
#include "box.h"
#include "block.h"
#include "movement.h"

using namespace std;
//using namespace eku;

/*
	concolinit();
	char a[30];
	SetConsoleTitle("Color");
	cout<<red<<"Hello"<<endl;
	setcolor(red,yellow);
	cout<<"Hello2"<<endl;
	setcolor(white,defbackcol);
	cout<<"Hello3"<<endl;
	settextcolor(blue);
	cout<<"Enter a word ";
	cin>>green>>a;
	cout<<pink<<"You entered "<<yellow<<a<<endl;
	settextcolor(cyan);
*/

int main(){

	char blockIndex;
	char dotsInside = 'x';
	char input;
	
	// ----------- TOP INITIALIZATIONS ----------- //
	box top(2, 4, '-');

	// ----------- MAP INITIALIZATIONS ----------- //	
	box bottom(22, 10, '|');
	
	// ----------- BLOCKS INITIALIZATIONS ----------- //
	blockIndex = 'T';
	
	//DETERMINING BLOCK TYPE
	//randomLetter();
	block currentBlock(blockIndex, dotsInside);
	
	//BLOCK VECTOR ASSIGNED
	vector< vector<char> > block_vector = currentBlock.blockVectorCreate();
	
	// ----------- DYNAMIC BLOCK INITIALIZATION ----------- //
	engine dynamic_block(bottom.map, block_vector, 'w');
	
	//INITIAL MAP ASSIGNED
	bottom.map = dynamic_block.map;
	
	//THE PLAYING LOOP
	while(1)
	{
		//COLOR FUNC
		//concolinit();
		
		//PLACING BLOCK_VECTOR IN TOP-BOX
		top.insertBlock(block_vector, blockIndex);
		
		//TOP-BOX DRAWING
		top.draw();	

		//BOTTOM-BOX DRAWING
		bottom.draw();

		//MOVEMENT
	    cin >> input;
	    switch(input)
	    {
	    	case 'w':  break;
	    	case 's': cout << "Pressed s"; break;
			case 'a': dynamic_block.moveTo_x(); bottom.map = dynamic_block.map; break;
			case 'd': dynamic_block.moveTo_x(); bottom.map = dynamic_block.map; break;
			case 'q': //.rotate('q');
			case 'e': //.rotate('e');
				
			default: cout << "Invalid movement"; break;		
		}
	    cout << endl;
	    
	    //REFRESHING SCREEN
	    //system("cls");
	    
	}

	return 0;
}
