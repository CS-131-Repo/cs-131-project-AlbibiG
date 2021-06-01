#include <iostream>
using namespace std;

//random number generator
int spin(int *betNumbers)
{
	int v1 = rand() % 38;
	cout << "Winning number: " << v1 << "\n";
	for (int i = 0; i < 18; i++)
	{
		if (betNumbers[i] == v1)
			return 1;
	}
	return 0;
}

int main(){
	int money, betMain, bet;
	char ans;

	cout << "Welcome to the virtual casino!\nHow much would you like to deposit? ";
	cin >> money;
	if (money <= 0)
		money = 1;

	do {
		int betNumbers[18] = {'\0'};

		cout << "Here's the board:\n00 0\n1R  2B  3R\n4B  5R  6B\n7R  8B  9R\n10B  11B  12R\n13B  14R  15B\n16R  17B  18R\n19R  20B  21R\n22B  23R  24B\n25R  26B  27R\n28B  29B  30R\n31B  32R  33B\n34R  35B  36R\n";

		cout << "How much would you like to bet: ";
		cin >> bet;

		//bet too big error check
		while (bet > money)
		{
			cout << "Too much. Input another number between 0 and " << money << "\n";
			cin >> bet;
		}

		cout << "1. Column\n2. Dozen\n3. Red\n4. Black\n5. Odd\n6. Even\n7. Low\n8. High\n9. Single number\n10. Split\n11. Street\n12. Five\n13. Line\nWhat type of bet: ";
		cin >> betMain;

		if (betMain == 1)
		{
			int column;
			cout << "Which column (1-3): ";
			cin >> column;
			if (column == 1)
			{
				int num = 1;
				for (int i = 0; i < 12; i++)
				{
					betNumbers[i] = num;
					num += 3;
				}
			}
			if (column == 2)
			{
				int num = 2;
				for (int i = 0; i < 12; i++)
				{
					betNumbers[i] = num;
					num += 3;
				}
			}
			if (column == 3)
			{
				int num = 3;
				for (int i = 0; i < 12; i++)
				{
					betNumbers[i] = num;
					num += 3;
				}
			}
		}
		else if (betMain == 2)
		{
			cout << "Note: When typing 00, input 37.\n";
			for (int i = 0; i < 12; i++)
			{
				cout << "Number " << i + 1 << ": ";
				cin >> betNumbers[i];
			}
		}
		else if (betMain == 3)
		{
			betNumbers[0] = 1;
			betNumbers[1] = 3;
			betNumbers[2] = 5;
			betNumbers[3] = 7;
			betNumbers[4] = 9;
			betNumbers[5] = 12;
			betNumbers[6] = 14;
			betNumbers[7] = 16;
			betNumbers[8] = 18;
			betNumbers[9] = 19;
			betNumbers[10] = 21;
			betNumbers[11] = 23;
			betNumbers[12] = 25;
			betNumbers[13] = 27;
			betNumbers[14] = 30;
			betNumbers[15] = 32;
			betNumbers[16] = 34;
			betNumbers[17] = 36;
		}
		else if (betMain == 4)
		{
			betNumbers[0] = 2;
			betNumbers[1] = 4;
			betNumbers[2] = 6;
			betNumbers[3] = 8;
			betNumbers[4] = 10;
			betNumbers[5] = 11;
			betNumbers[6] = 13;
			betNumbers[7] = 15;
			betNumbers[8] = 17;
			betNumbers[9] = 20;
			betNumbers[10] = 22;
			betNumbers[11] = 24;
			betNumbers[12] = 26;
			betNumbers[13] = 28;
			betNumbers[14] = 29;
			betNumbers[15] = 31;
			betNumbers[16] = 33;
			betNumbers[17] = 35;
		}
		else if (betMain == 5)
		{
			for (int i = 0; i < 18; i++)
			{
				int num = 1;
				betNumbers[i] = num;
				num += 2;
			}
		}
		else if (betMain == 6)
		{
			for (int i = 0; i < 18; i++)
			{
				int num = 2;
				betNumbers[i] = num;
				num += 2;
			}
		}
		else if (betMain == 7)
		{
			for (int i = 0; i < 18; i++)
				betNumbers[i] = i + 1;
		}
		else if (betMain == 8)
		{
			for (int i = 0; i < 18; i++)
			betNumbers[i] = i + 19;
		}
		else if (betMain == 9)
		{
			cout << "Note: When typing 00, input 37.\n";
			cout << "Choose your number: ";
			cin >> betNumbers[0];
		}
		else if (betMain == 10)
		{
			cout << "Note: When typing 00, input 37.\n";
			cout << "Number 1: ";
			cin >> betNumbers[0];
			cout << "Number 2: ";
			cin >> betNumbers[1];
		}
		else if (betMain == 11)
		{
			int row;
			cout << "Which row (1-12): ";
			cin >> row;
			if (row == 1)
			{
				betNumbers[0] = 1;
				betNumbers[1] = 2;
				betNumbers[2] = 3;
			}
			else if (row == 2)
			{
				betNumbers[0] = 4;
				betNumbers[1] = 5;
				betNumbers[2] = 6;
			}
			else if (row == 3)
			{
				betNumbers[0] = 7;
				betNumbers[1] = 8;
				betNumbers[2] = 9;
			}
			else if (row == 4)
			{
				betNumbers[0] = 10;
				betNumbers[1] = 11;
				betNumbers[2] = 12;
			}
			else if (row == 5)
			{
				betNumbers[0] = 13;
				betNumbers[1] = 14;
				betNumbers[2] = 15;
			}
			else if (row == 6)
			{
				betNumbers[0] = 16;
				betNumbers[1] = 17;
				betNumbers[2] = 18;
			}
			else if (row == 7)
			{
				betNumbers[0] = 19;
				betNumbers[1] = 20;
				betNumbers[2] = 21;
			}
			else if (row == 8)
			{
				betNumbers[0] = 22;
				betNumbers[1] = 23;
				betNumbers[2] = 24;
			}
			else if (row == 9)
			{
				betNumbers[0] = 25;
				betNumbers[1] = 26;
				betNumbers[2] = 27;
			}
			else if (row == 10)
			{
				betNumbers[0] = 28;
				betNumbers[1] = 29;
				betNumbers[2] = 30;
			}
			else if (row == 11)
			{
				betNumbers[0] = 31;
				betNumbers[1] = 32;
				betNumbers[2] = 33;
			}
			else if (row == 12)
			{
				betNumbers[0] = 34;
				betNumbers[1] = 35;
				betNumbers[2] = 36;
			}
		}
		else if (betMain == 12)
		{
			betNumbers[0] = 0;
			betNumbers[1] = 1;
			betNumbers[2] = 2;
			betNumbers[3] = 3;
			betNumbers[4] = 37;
		}
		else if (betMain == 13)
		{
			int line;
			cout << "Which line (1-11): ";
			cin >> line;
			if (line == 1)
			{
				betNumbers[0] = 1;
				betNumbers[1] = 2;
				betNumbers[2] = 3;
				betNumbers[3] = 4;
				betNumbers[4] = 5;
				betNumbers[5] = 6;
			}
			else if (line == 2)
			{
				betNumbers[0] = 4;
				betNumbers[1] = 5;
				betNumbers[2] = 6;
				betNumbers[3] = 7;
				betNumbers[4] = 8;
				betNumbers[5] = 9;
			}
			else if (line == 3)
			{
				betNumbers[0] = 7;
				betNumbers[1] = 8;
				betNumbers[2] = 9;
				betNumbers[3] = 10;
				betNumbers[4] = 11;
				betNumbers[5] = 12;
			}
			else if (line == 4)
			{
				betNumbers[0] = 10;
				betNumbers[1] = 11;
				betNumbers[2] = 12;
				betNumbers[3] = 13;
				betNumbers[4] = 14;
				betNumbers[5] = 15;
			}
			else if (line == 5)
			{
				betNumbers[0] = 13;
				betNumbers[1] = 14;
				betNumbers[2] = 15;
				betNumbers[3] = 16;
				betNumbers[4] = 17;
				betNumbers[5] = 18;
			}
			else if (line == 6)
			{
				betNumbers[0] = 16;
				betNumbers[1] = 17;
				betNumbers[2] = 18;
				betNumbers[3] = 19;
				betNumbers[4] = 20;
				betNumbers[5] = 21;
			}
			else if (line == 7)
			{
				betNumbers[0] = 19;
				betNumbers[1] = 20;
				betNumbers[2] = 21;
				betNumbers[3] = 22;
				betNumbers[4] = 23;
				betNumbers[5] = 24;
			}
			else if (line == 8)
			{
				betNumbers[0] = 22;
				betNumbers[1] = 23;
				betNumbers[2] = 24;
				betNumbers[3] = 25;
				betNumbers[4] = 26;
				betNumbers[5] = 27;
			}
			else if (line == 9)
			{
				betNumbers[0] = 25;
				betNumbers[1] = 26;
				betNumbers[2] = 27;
				betNumbers[3] = 28;
				betNumbers[4] = 29;
				betNumbers[5] = 30;
			}
			else if (line == 10)
			{
				betNumbers[0] = 28;
				betNumbers[1] = 29;
				betNumbers[2] = 30;
				betNumbers[3] = 31;
				betNumbers[4] = 32;
				betNumbers[5] = 33;
			}
			else if (line == 11)
			{
				betNumbers[0] = 31;
				betNumbers[1] = 32;
				betNumbers[2] = 33;
				betNumbers[3] = 34;
				betNumbers[4] = 35;
				betNumbers[5] = 36;
			}
		}

		//win/loss
		if (spin(betNumbers) == 1)
		{
			cout << "Winner!\n";
			if (betMain == 3 || betMain == 4 || betMain == 5 || betMain == 6 || betMain == 7 || betMain == 8)
				money = bet + money;
			else if (betMain == 1 || betMain == 2)
				money = 2 * bet + money;
			else if (betMain == 9)
				money = 35 * bet + money;
			else if (betMain == 10)
				money = 17 * bet + money;
			else if (betMain == 11)
				money = 11 * bet + money;
			else if (betMain == 12)
				money = 6 * bet + money;
			else if (betMain == 13)
				money = 5 * bet + money;
		}
		else
		{
			cout << "Loser!\n";
			money = money - bet;
		}

		cout << "Money: " << money << "\nWould you like to play again?\n";
		cin >> ans;
	} while ((ans == 'y' || ans == 'yes') && money > 0);

	return 0;
}