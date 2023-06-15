#include<iostream>
using namespace std;

void readCheckUp();
void readGlic();

int main()
{

	cout << "Qual seu nivel de glicose? (mg/dl)" << endl;
	readGlic();

	cout << "Ha quantos meses voce fez seu ultimo check up? " << endl;
	readCheckUp();

	return 0;
}


void readGlic()
{

	float glicose;
	cin >> glicose;

	if(glicose > 0 && glicose < 70)
		cout << "Hipoglicemia" << endl;

	else if(glicose >= 70 && glicose <= 100)
		cout << "Glicemia normalizada" << endl;

	else
		cout << "Hiperglicemia" << endl;


}

void readCheckUp()
{

	int checkUp;
	cin >> checkUp;

	if(checkUp >= 12)
		cout << "Esta na hora de fazer um check up!" << endl;

	else
		cout << "ok..." << endl;

}

