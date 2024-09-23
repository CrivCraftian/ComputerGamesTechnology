#include <iostream>
#include "GraphicsManager.h"	

//Ponter reference to classes
Room* room;
Robot* robby;
GraphicsManager* picture;

enum Direction
{
	LEFT = 0,
	RIGHT = 1
};


int main()

{
	room = new Room(5);
	robby = new Robot();
	picture = new GraphicsManager(room, robby);

	// Speed of the render delay in milliseconds
	picture->setDrawDelay(1000);

	int distances[11] = {3, 7, 3, 2, 4, 2, 3, 3, 7, 4, 3};
	Direction dir[11] = {
		RIGHT,
		LEFT,
		LEFT,
		RIGHT,
		LEFT,
		LEFT,
		RIGHT,
		RIGHT,
		RIGHT,
		LEFT
	};

	for(int i = 0; i < sizeof(distances) / sizeof(int); i++)
	{
		for(int j = 0; j < distances[i]; j++)
		{
			robby->move();
			picture->draw();
		}

		switch (dir[i])
		{
		case RIGHT:
			robby->right();
			break;
		case LEFT:
			robby->left();
			break;
		}
	}

	std::cout << "hello"; //End of Instructions for Robby
	system("Pause");
}