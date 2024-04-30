
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <cmath>
using namespace std;

int i;

struct Face{ //Propiedades de las caras
	char happy[5] = { ']', '}', ')', '>', 'D' };
	char sad[5] = { '[', '{', '(', '<', 'C' };
	char crazy[5] = { 'P', '3', 'O', 'V', 'U' };
	char angry[5] = { '/', '|', 'L', 'Y', '#' };
	char feyes[5] = { ':', ';', '8', '=', 'B' };
	char fnose[6] = { '-', ',', 'o', '0', 'V', '^' };
};

Face face01; //nombre del struct

//funcion si usuario elige cara feliz
char scaleHappy(int x) {
	if (x == 0 || x == 1 || x == 2) {
		return face01.happy[0];
	}
	else if (x == 3 || x == 4) {
		return face01.happy[1];
	}
	else if (x == 5 || x == 6) {
		return face01.happy[2];
	}
	else if (x == 7 || x == 8) {
		return face01.happy[3];
	}
	else if (x == 9 || x == 10) {
		return face01.happy[4];
	}
	else {
		system("cls");
		cout << "\nPlease, try again [MOUTH ERROR]" << endl;
	}
}

//...cara trizte
char scaleSad(int x) {
	if (x == 0 || x == 1 || x == 2) {
		return face01.sad[0];
	}
	else if (x == 3 || x == 4) {
		return face01.sad[1];
	}
	else if (x == 5 || x == 6) {
		return face01.sad[2];
	}
	else if (x == 7 || x == 8) {
		return face01.sad[3];
	}
	else if (x == 9 || x == 10) {
		return face01.sad[4];
	}
	else {
		system("cls");
		cout << "\nPlease, try again [MOUTH ERROR]" << endl;
	}
}

//...cara loca
char scaleCrazy(int x) {
	if (x == 0 || x == 1 || x == 2) {
		return face01.crazy[0];
	}
	else if (x == 3 || x == 4) {
		return face01.crazy[1];
	}
	else if (x == 5 || x == 6) {
		return face01.crazy[2];
	}
	else if (x == 7 || x == 8) {
		return face01.crazy[3];
	}
	else if (x == 9 || x == 10) {
		return face01.crazy[4];
	}
	else {
		system("cls");
		cout << "\nPlease, try again [MOUTH ERROR]" << endl;
	} return 0;
}

//...cara enojada
char scaleAngry(int x) {
	if (x == 0 || x == 1 || x == 2) {
		return face01.angry[0];
	}
	else if (x == 3 || x == 4) {
		return face01.angry[1];
	}
	else if (x == 5 || x == 6) {
		return face01.angry[2];
	}
	else if (x == 7 || x == 8) {
		return face01.angry[3];
	}
	else if (x == 9 || x == 10) {
		return face01.angry[4];
	}
	else {
		system("cls");
		cout << "\nPlease, try again [MOUTH ERROR]" << endl;
	} 
}

//funcion para los ojos
char eyeTypes(int eyes) {
		if (eyes == 1 || eyes == 2 || eyes == 3 || eyes == 4 || eyes == 5) {
			eyes = eyes - 1;
			return face01.feyes[eyes];
		}
		else {
			system("cls");
			cout << "\nPlease enter the correct prompt next time! [EYE ERROR]" << endl;
		}
}

//funcion para la nariz
char noseTypes(int nose) {
	if (nose == 1 || nose == 2 || nose == 3 || nose == 4 || nose == 5 || nose == 6) {
		nose = nose - 1;
		return face01.fnose[nose];
	}
	else {
		system("cls");
		cout << "\nPlease enter the correct prompt next time! [NOSE ERROR]" << endl;
	}
}

int main()
{
	int menu, eyes, nose, scale;
	ofstream textfile("character.txt");


	//combinacion de los char para formar un string
	string Character01 = string() + eyeTypes(eyes) + noseTypes(nose) + scaleHappy(scale);
	string Character02 = string() + eyeTypes(eyes) + noseTypes(nose) + scaleSad(scale);
	string Character03 = string() + eyeTypes(eyes) + noseTypes(nose) + scaleCrazy(scale);
	string Character04 = string() + eyeTypes(eyes) + noseTypes(nose) + scaleAngry(scale);

	cout << "Introductory message" << endl;
	cout << "Choose personality type" << endl;
	cout << "1. Happy\n2. Sad\n3. Crazy\n4. Angry" << endl;
	cout << "Type: ";
	cin >> menu;

	//menu para usuario
	switch (menu) {
		//si elige feliz
	case 1:
		system("cls");

		cout << "You chosed a happy face!\n";
		cout << "Please, on a scale on 1 to 10, how happy should it be?\n";
		cin >> scale;
		system("cls");
		scaleHappy(scale);
		cout << "How should it's eyes be?\n";
		cout << "1) Normal\n2) Teasing\n3) Big\n4) Funny\n5) Cool" << endl;
		cin >> eyes;
		system("cls");
		eyeTypes(eyes);
		cout << "And how should the nose be?\n";
		cout << "1) Normal\n2) Small\n3) Big\n4) Very Big\n5) Long\n6) Very Long" << endl;
		cin >> nose;
		system("cls");
		noseTypes(nose);
		cout << Character01;
		textfile << Charater01;

		break;
		//si elige trizte
	case 2:
		system("cls");

		cout << "You chosed a sad face!\n";
		cout << "Please, on a scale on 1 to 10, how sad should it be?\n";
		cin >> scale;
		system("cls");
		scaleSad(scale);
		cout << "How should it's eyes be?\n";
		cout << "1) Normal\n2) Teasing\n3) Big\n4) Funny\n5) Cool" << endl;
		cin >> eyes;
		system("cls");
		eyeTypes(eyes);
		cout << "And how should the nose be?\n";
		cout << "1) Normal\n2) Small\n3) Big\n4) Very Big\n5) Long\n6) Very Long" << endl;
		cin >> nose;
		system("cls");
		noseTypes(nose);
		cout << Character02;

		break;
		//si elige loca
	case 3:
		system("cls");

		cout << "You chosed a crazy face!\n";
		cout << "Please, on a scale on 1 to 10, how crazy should it be?\n";
		cin >> scale;
		system("cls");
		scaleCrazy(scale);
		cout << "How should it's eyes be?\n";
		cout << "1) Normal\n2) Teasing\n3) Big\n4) Funny\n5) Cool" << endl;
		cin >> eyes;
		system("cls");
		eyeTypes(eyes);
		cout << "And how should the nose be?\n";
		cout << "1) Normal\n2) Small\n3) Big\n4) Very Big\n5) Long\n6) Very Long" << endl;
		cin >> nose;
		system("cls");
		noseTypes(nose);
		cout << Character03;

		break;
		//si elige enojada
	case 4:
		system("cls");

		cout << "You chosed an angry face!\n";
		cout << "Please, on a scale on 1 to 10, how angry should it be?\n";
		cin >> scale;
		system("cls");
		scaleAngry(scale);
		cout << "How should it's eyes be?\n";
		cout << "1) Normal\n2) Teasing\n3) Big\n4) Funny\n5) Cool" << endl;
		cin >> eyes;
		system("cls");
		eyeTypes(eyes);
		cout << "And how should the nose be?\n";
		cout << "1) Normal\n2) Small\n3) Big\n4) Very Big\n5) Long\n6) Very Long" << endl;
		cin >> nose;
		system("cls");
		noseTypes(nose);
		cout << Character04;

		break;
		//si no elige ninguno de los 4
	default:
		system("cls");
		cout << "\nPlease choose one of the four options next time!";
	}
	return 0;
}

