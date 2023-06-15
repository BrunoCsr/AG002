#include<iostream>
using namespace std;

void readCheckUp();
void readGlic();

int main()
{
	//Leitura da glicose
	cout << "Qual seu nivel de glicose? (mg/dl)" << endl;
	readGlic();

	//Leitura do último check up
	cout << "Ha quantos meses voce fez seu ultimo check up? " << endl;
	readCheckUp();

	return 0;
}


void readGlic()
{

	float glicose;
	
	//Entrada do valor da glicose
	cin >> glicose;

	//Avaliação dos dados e print da informação
	if(glicose > 0 && glicose < 70)
		cout << "Hipoglicemia" << endl;

	else if(glicose >= 70 && glicose <= 100)
		cout << "Glicemia normalizada" << endl;

	else
		cout << "Hiperglicemia" << endl;


}

void readCheckUp()
{

	int checkUp; //tempo desde o último check up
	
	//Entrada do tempo desde o ultimo check up
	cin >> checkUp;

	//Avaliação dos valores e print da informação
	if(checkUp >= 12)
		cout << "Esta na hora de fazer um check up!" << endl;

	else
		cout << "ok..." << endl;

}

