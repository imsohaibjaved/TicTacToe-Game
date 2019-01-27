#include<iostream>
#include<string>
using namespace std;

string name, name2;
int check = 0, check1 = 0;

void drawTable(char gameMatrix[3][3]);
void player1(char gameMatrix[3][3], char choice);
void player2(char gameMatrix[3][3], char choice);
void winStatus1(char gameMatrix[3][3]);
void winStatus2(char gameMatrix[3][3]);

int main()
{
	char gameMatrix[3][3] = { {'A','B','C' },  {'D','E','F' },  {'G','H','I' } };
	char choice = '#';

	cout << "====================================================" << endl;
	cout << "|        T I C    T A C    T O E    G A M E        |" << endl;
	cout << "|                                                  |" << endl;
	cout << "|    M A D E    B Y    S O H A I B    J A V E D    |" << endl;
	cout << "====================================================" << endl;
	cout << endl << endl;

	cout << "Enter Name of Player # 1: ";
	cin >> name;
	cout << endl;
	cout << "Enter Name of Player # 2: ";
	cin >> name2;

	cout << endl << endl;
	drawTable(gameMatrix);
	cout << endl << endl;

	while (check == 0)
	{
		player1(gameMatrix, choice);
		drawTable(gameMatrix);
		winStatus1(gameMatrix);
		if (check1 == 0)
		{
			player2(gameMatrix, choice);
			drawTable(gameMatrix);
			winStatus2(gameMatrix);
		}
	}

	system("pause");
	return 0;
}

void drawTable(char gameMatrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << gameMatrix[i][j] << "  |  ";
		}
		cout << endl;
		cout << "----------------" << endl;
	}
	cout << endl;
}
void player1(char gameMatrix[3][3], char choice)
{
	cout << name << " :";
	cin >> choice;
	switch (choice)
	{
	case 'A':
	case 'a':
		gameMatrix[0][0] = 'X';
		break;
	case 'B':
	case 'b':
		gameMatrix[0][1] = 'X';
		break;
	case 'C':
	case 'c':
		gameMatrix[0][2] = 'X';
		break;
	case 'D':
	case 'd':
		gameMatrix[1][0] = 'X';
		break;
	case 'E':
	case 'e':
		gameMatrix[1][1] = 'X';
		break;
	case 'F':
	case 'f':
		gameMatrix[1][2] = 'X';
		break;
	case 'G':
	case 'g':
		gameMatrix[2][0] = 'X';
		break;
	case 'H':
	case 'h':
		gameMatrix[2][1] = 'X';
		break;
	case 'I':
	case 'i':
		gameMatrix[2][2] = 'X';
		break;
	default:
		break;
	}
}
void player2(char gameMatrix[3][3], char choice)
{
	cout << name2 << " :";
	cin >> choice;
	switch (choice)
	{
	case 'A':
	case 'a':
		gameMatrix[0][0] = 'O';
		break;
	case 'B':
	case 'b':
		gameMatrix[0][1] = 'O';
		break;
	case 'C':
	case 'c':
		gameMatrix[0][2] = 'O';
		break;
	case 'D':
	case 'd':
		gameMatrix[1][0] = 'O';
		break;
	case 'E':
	case 'e':
		gameMatrix[1][1] = 'O';
		break;
	case 'F':
	case 'f':
		gameMatrix[1][2] = 'O';
		break;
	case 'G':
	case 'g':
		gameMatrix[2][0] = 'O';
		break;
	case 'H':
	case 'h':
		gameMatrix[2][1] = 'O';
		break;
	case 'I':
	case 'i':
		gameMatrix[2][2] = 'O';
		break;
	default:
		break;
	}
}
void winStatus1(char gameMatrix[3][3])
{
	if ((gameMatrix[0][0] == 'X' && gameMatrix[0][1] == 'X' && gameMatrix[0][2] == 'X') || (gameMatrix[1][0] == 'X' && gameMatrix[1][1] == 'X' && gameMatrix[1][2] == 'X') || (gameMatrix[2][0] == 'X' && gameMatrix[2][1] == 'X' && gameMatrix[2][2] == 'X') || (gameMatrix[0][0] == 'X' && gameMatrix[1][0] == 'X' && gameMatrix[2][0] == 'X') || (gameMatrix[0][1] == 'X' && gameMatrix[1][1] == 'X' && gameMatrix[2][1] == 'X') || (gameMatrix[0][2] == 'X' && gameMatrix[1][2] == 'X' && gameMatrix[2][2] == 'X') || (gameMatrix[0][0] == 'X' && gameMatrix[1][1] == 'X' && gameMatrix[2][2] == 'X') || (gameMatrix[0][2] == 'X' && gameMatrix[1][1] == 'X' && gameMatrix[2][0] == 'X'))
	{
		cout << "====================================================" << endl;
		cout << "             " << name << "      W I N S :)        " << endl;
		cout << "====================================================" << endl;
		check++;
		check1++;
	}
}
void winStatus2(char gameMatrix[3][3])
{
	if ((gameMatrix[0][0] == 'O' && gameMatrix[0][1] == 'O' && gameMatrix[0][2] == 'O') || (gameMatrix[1][0] == 'O' && gameMatrix[1][1] == 'O' && gameMatrix[1][2] == 'O') || (gameMatrix[2][0] == 'O' && gameMatrix[2][1] == 'O' && gameMatrix[2][2] == 'O') || (gameMatrix[0][0] == 'O' && gameMatrix[1][0] == 'O' && gameMatrix[2][0] == 'O') || (gameMatrix[0][1] == 'O' && gameMatrix[1][1] == 'O' && gameMatrix[2][1] == 'O') || (gameMatrix[0][2] == 'O' && gameMatrix[1][2] == 'O' && gameMatrix[2][2] == 'O') || (gameMatrix[0][0] == 'O' && gameMatrix[1][1] == 'O' && gameMatrix[2][2] == 'O') || (gameMatrix[0][2] == 'O' && gameMatrix[1][1] == 'O' && gameMatrix[2][0] == 'O'))
	{
		cout << "====================================================" << endl;
		cout << "             " << name2 << "      W I N S :)        " << endl;
		cout << "====================================================" << endl;
		check++;
	}
}