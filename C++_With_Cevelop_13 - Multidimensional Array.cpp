#include<iostream>

using namespace std;

int main(){
	//2d array
		int tiles [3][3] =
		{
			{1,2,1},
			{0,0,0},
			{1,1,1}
		};
		cout << "2D ARRAY" << endl << endl;
		for(int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << tiles[i][j];
			}
			cout << endl;
		}
		cout << endl;

		//2d tile mapping
		for(int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						switch(tiles[i][j])
						{
						case 0:
							cout << '#';
							break;
						case 1:
							cout << '$';
							break;
						case 2:
							cout << '*';
							break;
						}
					}
					cout << endl;
				}

	cout << endl << endl;

///////////////////////////////////////////////////////////////////////////////////////

	//3d array
	int tiles3d [3][3][3] =
	{
			{
					{1,2,1},
					{0,0,0},
					{1,1,1}
			},

			{
					{1,0,1},
					{1,2,3},
					{3,2,1}
			},

			{
					{3,3,3},
					{2,2,2},
					{0,0,0}
			},
	};

	cout << "3D ARRAY" << endl << endl;
	for(int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << tiles3d[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}
