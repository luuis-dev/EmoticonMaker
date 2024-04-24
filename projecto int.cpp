
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int i = 0;

struct Face{
	char mouth;
	char eyes;
	char nose;
};

struct Face happy[5] = {']', '}', ')', '>', 'D'};
struct Face sad[5] = {'[', '{', '(', '<', 'C'};
struct Face crazy[5] = {'P', '3', 'O', 'V', 'U'};
struct Face angry[5] = {'/', '|', 'L', 'Y', '#'};

struct Face feyes[5] = { ':', ';', '8', '=', 'B' };
struct Face fnose[6] = { '-', ',', 'o', '0', 'V', '^' };



int scaleHappy(int x) {
	if (x == 0 || x == 1 || x == 2) {
		happy[0].mouth;
	}
	else if (x == 3 || x == 4) {
		happy[1].mouth;
	}
	else if (x == 5 || x == 6) {
		happy[2].mouth;
	}
	else if (x == 7 || x == 8) {
		happy[3].mouth;
	}
	else if (x == 9 || x == 10) {
		happy[4].mouth;
	}
	else system("cls");
	cout << "Please, try again" << endl;
	return happy[i].mouth;
}

int scaleSad(int x) {
	if (x == 0 || x == 1 || x == 2) {
		sad[0].mouth;
	}
	else if (x == 3 || x == 4) {
		sad[1].mouth;
	}
	else if (x == 5 || x == 6) {
		sad[2].mouth;
	}
	else if (x == 7 || x == 8) {
		sad[3].mouth;
	}
	else if (x == 9 || x == 10) {
		sad[4].mouth;
	}
	else system("cls");
	cout << "Please, try again" << endl;
	return sad[i].mouth;
}

int scaleCrazy(int x) {
	if (x == 0 || x == 1 || x == 2) {
		crazy[0].mouth;
	}
	else if (x == 3 || x == 4) {
		crazy[1].mouth;
	}
	else if (x == 5 || x == 6) {
		crazy[2].mouth;
	}
	else if (x == 7 || x == 8) {
		crazy[3].mouth;
	}
	else if (x == 9 || x == 10) {
		crazy[4].mouth;
	}
	else system("cls");
	cout << "Please, try again" << endl;
	return crazy[i].mouth;
}

int scaleAngry(int x) {
	if (x == 0 || x == 1 || x == 2) {
		angry[0].mouth;
	}
	else if (x == 3 || x == 4) {
		angry[1].mouth;
	}
	else if (x == 5 || x == 6) {
		angry[2].mouth;
	}
	else if (x == 7 || x == 8) {
		angry[3].mouth;
	}
	else if (x == 9 || x == 10) {
		angry[4].mouth;
	}
	else system("cls");
	cout << "Please, try again" << endl;
	return angry[i].mouth;
}

string eyeTypes(string eyes) {
	if (eyes == "normal" || eyes == "Normal") {
		feyes[0].eyes;
	}
	else if (eyes == "teasing" || eyes == "Teasing") {
		feyes[1].eyes;
	}
	else if (eyes == "big" || eyes == "Big") {
		feyes[2].eyes;
	}
	else if (eyes == "funny" || eyes == "Funny") {
		feyes[3].eyes;
	}
	else if (eyes == "cool" || eyes == "Cool") {
		feyes[4].eyes;
	}
	else system("cls");
	cout << "Please enter the correct prompt next time!" << endl;
	return feyes[i].eyes;
}

string noseType(string nose) {
	if (nose == "normal" || nose == "Normal") {
		fnose[0].nose;
	}
	else if (nose == "small" || nose == "Small") {
		fnose[1].nose;
	}
	else if (nose == "big" || nose == "Big") {
		fnose[2].nose;
	}
	else if (nose == "very big" || "Very Big" || "Very big" || "Verybig" || "verybig") {
		fnose[3].nose;
	}
	else if (nose == "very long" || "Very Long" || "Very long" || "Verylong" || "verylong") {
		fnose[4].nose;
	}
	else if (nose == "long" || nose == "Long") {
		fnose[5].nose;
	}
	else system("cls");
	cout << "Please enter the correct prompt next time!" << endl;
	return fnose[i].nose;
}


int main()
{
	char happy = '.', sad = '.', crazy = '.', angry = '.';
	int menu, scale;
	string eyes, nose;
	
	cout << "Introductory message" << endl;
	cout << "Choose personality type" << endl;
	cout << "1. Happy\n2. Sad\n3. Crazy\n4. Angry" << endl;
	cout << "Type: ";
	cin >> menu;

	switch (menu) {
	case 1:
		system("cls");

		cout << "You chosed a happy face!\n";
		cout << "Please, on a scale on 1 to 10, how happy should it be?\n";
		cin >> scale;
		cout << "How should it's eyes be?\n";
		cout << "Normal - Teasing - Big - Funny - Cool" << endl;
		cin >> eyes;
		cout << "And how should the nose be?\n";
		cout << "Normal - Small - Big - Very Big - Long - Very Long" << endl;
		cin >> nose;
		cout << eyeTypes(eyes) << noseType(nose) << scaleHappy(scale);

		break;
	case 2:
		system("cls");

		cout << "You chosed a sad face!\n";
		cout << "Please, on a scale on 1 to 10, how sad should it be?\n";
		cin >> scale;
		cout << "How should it's eyes be?\n";
		cout << "Normal - Teasing - Big - Funny - Cool" << endl;
		cin >> eyes;
		cout << "And how should the nose be?\n";
		cout << "Normal - Small - Big - Very Big - Long - Very Long" << endl;
		cin >> nose;
		cout << eyeTypes(eyes) << noseType(nose) << scaleSad(scale);

		break;
	case 3:
		system("cls");

		cout << "You chosed a crazy face!\n";
		cout << "Please, on a scale on 1 to 10, how crazy should it be?\n";
		cin >> scale;
		cout << "How should it's eyes be?\n";
		cout << "Normal - Teasing - Big - Funny - Cool" << endl;
		cin >> eyes;
		cout << "And how should the nose be?\n";
		cout << "Normal - Small - Big - Very Big - Long - Very Long" << endl;
		cin >> nose;
		cout << eyeTypes(eyes) << noseType(nose) << scaleCrazy(scale);

		break;
	case 4:
		system("cls");

		cout << "You chosed an angry face!\n";
		cout << "Please, on a scale on 1 to 10, how angry should it be?\n";
		cin >> scale;
		cout << "How should it's eyes be?\n";
		cout << "Normal - Teasing - Big - Funny - Cool" << endl;
		cin >> eyes;
		cout << "And how should the nose be?\n";
		cout << "Normal - Small - Big - Very Big - Long - Very Long" << endl;
		cin >> nose;
		cout << eyeTypes(eyes) << noseType(nose) << scaleAngry(scale);

		break;
	default:
		system("cls");
		cout << "Please choose one of the four options next time!";
	}
	return 0;
}

