#include<iostream>
#include <ctime>
#include<random>
#include<string>
using namespace std;
char ch, sh;
//ch = player 1 and sh = player 2 or computer
char board[9] = { ' ',' ',' ', ' ', ' ', ' ', ' ', ' ',' ' };
void make_board() {
	cout << "                                                                        <===============================>" << "\n";
	cout << "                                                                                  TRY TO WIN!" << "\n";
	cout << "                                                                        <===============================>" << "\n" << endl << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
	cout << "                                                                               " << board[0] << "   |   " << board[1] << "    |   " << board[2] << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
	cout << "                                                                             ---------------------" << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
	cout << "                                                                               " << board[3] << "   |   " << board[4] << "    |   " << board[5] << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
	cout << "                                                                             ---------------------" << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
	cout << "                                                                               " << board[6] << "   |   " << board[7] << "    |   " << board[8] << endl;
	cout << "                                                                               " << "    |   " << "   " << "  |   " << "   " << endl;
}
//easy mode computer choice
void computer_choice()
{
	srand(time(0));
	int choice = 0;
	do
	{
		choice = rand() % 9;
	} while (board[choice] != ' ');
	board[choice] = sh;
}
//hard mode computer choice
void computer_choice2() {
	if ((board[0] == board[1] && board[1] == sh && board[2] == ' ') || (board[4] == board[6] && board[4] == sh && board[2] == ' ') || (board[5] == board[8] && board[5] == sh && board[2] == ' '))
		board[2] = sh;
	else if ((board[0] == board[2] && board[0] == sh && board[1] == ' ') || (board[4] == board[7] && board[4] == sh && board[1] == ' '))
		board[1] = sh;
	else if ((board[1] == board[2] && board[1] == sh && board[0] == ' ') || (board[6] == board[3] && board[6] == sh && board[0] == ' ') || (board[4] == board[8] && board[4] == sh && board[0] == ' '))
		board[0] = sh;
	else if ((board[3] == board[4] && board[3] == sh && board[5] == ' ') || (board[2] == board[8] && board[2] == sh && board[5] == ' '))
		board[5] = sh;
	else if ((board[3] == board[5] && board[3] == sh && board[4] == ' ') || (board[2] == board[6] && board[2] == sh && board[4] == ' ') || (board[0] == board[8] && board[8] == sh && board[4] == ' ') || (board[1] == board[7] && board[1] == sh && board[4] == ' '))
		board[4] = sh;
	else if ((board[4] == board[5] && board[4] == sh && board[3] == ' ') || (board[0] == board[6] && board[0] == sh && board[3] == ' '))
		board[3] = sh;
	else if ((board[6] == board[7] && board[6] == sh && board[8] == ' ') || (board[2] == board[5] && board[2] == sh && board[8] == ' ') || (board[0] == board[4] && board[0] == sh && board[8] == ' '))
		board[8] = sh;
	else if ((board[6] == board[8] && board[6] == sh && board[7] == ' ') || (board[1] == board[4] && board[1] == sh && board[7] == ' '))
		board[7] = sh;
	else if ((board[7] == board[8] && board[7] == sh && board[6] == ' ') || (board[0] == board[3] && board[0] == sh && board[6] == ' ') || (board[2] == board[4] && board[2] == sh && board[6] == ' '))
		board[6] = sh;
	//
	else if ((board[0] == board[1] && board[1] == ch && board[2] == ' ') || (board[5] == board[8] && board[5] == ch && board[2] == ' ') || (board[4] == board[6] && board[4] == ch && board[2] == ' '))
		board[2] = sh;
	else if ((board[0] == board[2] && board[0] == ch && board[1] == ' ') || (board[4] == board[7] && board[4] == ch && board[1] == ' '))
		board[1] = sh;
	else if ((board[1] == board[2] && board[1] == ch && board[0] == ' ') || (board[6] == board[3] && board[6] == ch && board[0] == ' ') || (board[4] == board[8] && board[4] == ch && board[0] == ' ') || (board[4] == board[6] && board[4] == ch && board[0] == ' '))
		board[0] = sh;
	else if ((board[3] == board[4] && board[3] == ch && board[5] == ' ') || (board[2] == board[8] && board[2] == ch && board[5] == ' '))
		board[5] = sh;
	else if ((board[3] == board[5] && board[3] == ch && board[4] == ' ') || (board[2] == board[6] && board[2] == ch && board[4] == ' ') || (board[0] == board[8] && board[8] == ch && board[4] == ' ') || (board[1] == board[7] && board[1] == ch && board[4] == ' '))
		board[4] = sh;
	else if ((board[4] == board[5] && board[4] == ch && board[3] == ' ') || (board[0] == board[6] && board[6] == ch && board[3] == ' '))
		board[3] = sh;
	else if ((board[6] == board[7] && board[6] == ch && board[8] == ' ') || (board[2] == board[5] && board[2] == ch && board[8] == ' ') || (board[0] == board[4] && board[0] == ch && board[8] == ' '))
		board[8] = sh;
	else if ((board[6] == board[8] && board[6] == ch && board[7] == ' ') || (board[1] == board[4] && board[1] == ch && board[7] == ' '))
		board[7] = sh;
	else if ((board[7] == board[8] && board[7] == ch && board[6] == ' ') || (board[0] == board[3] && board[0] == ch && board[6] == ' ') || (board[2] == board[4] && board[2] == ch && board[6] == ' '))
		board[6] = sh;
	//
	else if (board[4] == ch && board[2] == ' ')
		board[2] = sh;
	else if (board[4] != ch && board[4] == ' ')
		board[4] = sh;
	else
	{
		srand(time(0));
		int choice = 0;
		do {
			choice = rand() % 9;
		} while (board[choice] != ' ');
		board[choice] = sh;
	}
}

void player_choice1() {
	while (true) {
		cout << "Select Number From 1 To 9:" << endl;
		int choice;
		cin >> choice;
		choice--;
		if (choice < 0 || choice>8)
			cout << "Please Select Number From 1 To 9: " << endl;
		else if (board[choice] != ' ')
			cout << "Please Select An Empty Place: " << endl;
		else if (choice >= 0 && choice <= 8)
		{
			board[choice] = ch;
			break;
		}
	}
}

void player_choice2() {
	while (true) {
		cout << "Select Number From 1 To 9: " << endl;
		int choice;
		cin >> choice;
		choice--;
		if (choice < 0 || choice > 8)
			cout << "Please Select Number From 1 To 9: " << endl;
		else if (board[choice] != ' ')
			cout << "please Select An Empty Place: " << endl;
		else if (choice >= 0 && choice <= 8)
		{
			board[choice] = sh;
			break;
		}
	}
}

int count_board(char symbol) {
	int total = 0;
	for (int i = 0; i < 9; i++)
	{
		if (board[i] == symbol)
			++total;
	}
	return total;
}

char check_winner() {
	if (board[0] == board[1] && board[1] == board[2] && board[0] != ' ' || board[0] == board[4] && board[4] == board[8] && board[0] != ' ' || board[0] == board[3] && board[3] == board[6] && board[0] != ' ')
		return board[0];
	else if (board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
		return board[3];
	else if (board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
		return board[6];
	else if (board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
		return board[1];
	else if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ' || board[2] == board[4] && board[4] == board[6] && board[2] != ' ')
		return board[2];
	else if (count_board(ch) + count_board(sh) < 9)

		return 'c';
	else
		return'd';
}
//computer vs player easy mode
void computer_vs_player() {
	string player_name, st;
	cout << "Please Enter Your Name: ";
	cin >> player_name;
	cout << "Choose Your Letter X or O: " << endl;
	cout << player_name << ": ";
	while (true) {
		cin >> st;
		if (st.size() > 1) {
			cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
			cout << "Choose Your Letter X or O: ";
		}
		else {
			ch = st[0];
			if (ch == 'X') {
				sh = 'O';
				break;
			}
			else if (ch == 'O') {
				sh = 'X';
				break;
			}
			else if (ch == 'x') {
				sh = 'o';
				break;
			}
			else if (ch == 'o') {
				sh = 'x';
				break;
			}
			else if (ch != 'X' && ch != 'O' && ch != 'x' && ch != 'o') {
				cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
				cout << "Choose Your Letter X or O: ";
			}
		}
	}
	while (true)
	{
		system("cls");
		make_board();
		if (count_board(ch) == count_board(sh)) {
			cout << player_name << "'s Turn: " << endl;
			player_choice1();
		}
		else
		{
			computer_choice();
		}
		char winner = check_winner();
		if (winner == ch) {
			system("cls");
			make_board();
			cout << endl << "Congratulation " << player_name << " Won The Game!" << endl;
			break;
		}
		else if (winner == sh) {
			system("cls");
			make_board();
			cout << endl << "Mosh 3eb lma aksabak!!!" << endl;
			break;
		}
		else if (winner == 'd') {
			system("cls");
			make_board();
			cout << endl << "Draw!" << endl;
			break;
		}
	}
}

void computer_vs_player_hard() {
	string player_name, st;
	cout << "Please Enter Your Name: ";
	cin >> player_name;
	cout << "Choose Your Letter X or O: " << endl;
	cout << player_name << ": ";
	while (true) {
		cin >> st;
		if (st.size() > 1) {
			cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
			cout << "Choose Your Letter X or O: ";
		}
		else {
			ch = st[0];
			if (ch == 'X') {
				sh = 'O';
				break;
			}
			else if (ch == 'O') {
				sh = 'X';
				break;
			}
			else if (ch == 'x') {
				sh = 'o';
				break;
			}
			else if (ch == 'o') {
				sh = 'x';
				break;
			}
			else if (ch != 'X' && ch != 'O' && ch != 'x' && ch != 'o') {
				cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
				cout << "Choose Your Letter X or O: ";
			}
		}
	}
	while (true)
	{
		system("cls");
		make_board();
		if (count_board(ch) == count_board(sh)) {
			cout << player_name << "'s Turn: " << endl;
			player_choice1();
		}
		else
		{
			computer_choice2();
		}
		char winner = check_winner();
		if (winner == ch) {
			system("cls");
			make_board();
			cout << endl << "Congratulation " << player_name << " Won The Game!" << endl;

			break;
		}
		else if (winner == sh) {
			system("cls");
			make_board();
			cout << endl << "Mosh 3eb lma aksabak!!!" << endl;
			break;
		}
		else if (winner == 'd') {
			system("cls");
			make_board();
			cout << endl << "Draw!" << endl;
			break;
		}
	}
}

void player_vs_player() {
	string player_name, player_name_2, st;
	cout << "Player 1 Name: ";
	cin >> player_name;
	cout << "player 2 Name: ";
	cin >> player_name_2;
	cout << "Choose Your Letter X or O: " << endl;
	cout << player_name << ": ";
	while (true) {
		cin >> st;
		if (st.size() > 1) {
			cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
			cout << "Choose Your Letter X or O: ";
		}
		else {
			ch = st[0];
			if (ch == 'X') {
				sh = 'O';
				break;
			}
			else if (ch == 'O') {
				sh = 'X';
				break;
			}
			else if (ch == 'x') {
				sh = 'o';
				break;
			}
			else if (ch == 'o') {
				sh = 'x';
				break;
			}
			else if (ch != 'X' && ch != 'O' && ch != 'x' && ch != 'o') {
				cout << "Invalid Letter." << "\n" << "Select X or O." << endl;
				cout << "Choose Your Letter X or O: ";
			}
		}
	}
	while (true)
	{
		system("cls");
		make_board();
		if (count_board(ch) == count_board(sh)) {
			cout << player_name << "'s Turn: " << endl;
			player_choice1();
		}
		else
		{
			cout << player_name_2 << "'s Turn: " << endl;
			player_choice2();
		}
		char winner = check_winner();
		if (winner == ch) {
			system("cls");
			make_board();
			cout << endl << "Congratulation " << player_name << " Won The Game!" << endl;
			break;
		}
		else if (winner == sh) {
			system("cls");
			make_board();
			cout << endl << "Congratulation " << player_name_2 << " Won The Game!" << endl;
			break;
		}
		else if (winner == 'd') {
			system("cls");
			make_board();
			cout << endl << "Draw!" << endl;
			break;
		}
	}
}


int main()
{
	string re = "0";
	do {
		for (int i = 0; 9 > i; i++)
			board[i] = ' ';
		system("cls");
		cout << endl;
		cout << "                                                                 <===============================>" << endl;
		cout << "                                                                    Welcome to TIC TAC TOE game" << "\n";
		cout << "                                                                 <===============================>" << "\n";

		string se;
		cout << "1.Player Vs Player" << endl << "2.Player Vs Computer" << endl << "Select 1 or 2: ";
		cin >> se;
		if (se == "2")
		{
			cout << "1.Easy Mode" << endl << "2.Hard Mode" << endl << "Select 1 or 2: ";
			string num;
			cin >> num;
			if (num == "1")
				computer_vs_player();
			else if (num == "2")
				computer_vs_player_hard();
			while (num != "2" && num != "1")
			{
				cout << "Please Enter The Correct Choice: ";
				cin >> num;
				if (num == "1")
					computer_vs_player();
				else if (num == "2")
					computer_vs_player_hard();
			}
		}
		else if (se == "1")
		{
			player_vs_player();
		}
		while (se != "2" && se != "1")//if he choose out of range
		{
			cout << "Please Enter The Correct Choice: ";
			cin >> se;
			if (se == "2")
			{
				cout << "1.Easy Mode" << endl << "2.Hard Mode" << endl << "Select 1 or 2: ";
				string num;
				cin >> num;
				if (num == "1")
					computer_vs_player();
				else if (num == "2")
					computer_vs_player_hard();
				while (num != "2" && num != "1")//if he choose out of range
				{
					cout << "Please Enter The Correct Choice: ";
					cin >> num;
					if (num == "1")
						computer_vs_player();
					else if (num == "2")
						computer_vs_player_hard();
				}
			}
			else if (se == "1")
			{
				player_vs_player();
			}
		}
		cout << endl;
		cout << "Do You Want To\n1.Play A New Game!\n" << "2.Exit.\nSeclect 1 or 2 : ";
		cin >> re;
		cout << endl;
	} while(re== "1");