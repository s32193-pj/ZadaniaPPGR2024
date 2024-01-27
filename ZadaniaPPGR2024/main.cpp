#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Student
{
	int indeks;
	int stundent_number;
	string student_name;
	int student_class;
	int informatyka;
	int biologia;
	int j_polski;
	int matematyka;
};


int main()
{

	//int human_input;

	//cout << "Podaj liczbe calkowita: " << endl;
	//cin >> human_input;

	//int dividers = 0;

	//for (int i = 1; i <= human_input; i++)
	//{
	// if (i % 5 == 0 && i % 3 != 0)
	// {
	// dividers++;
	// }
	//}

	//cout << endl << dividers;

	//vector <Student> stud =
	//{
	// { 1391,1 },
	// { 1841,2 },
	// { 4567,3 },
	// { 1268,4 },
	// { 8912,5 },
	// { 3456,6 }
	//};

	//for (auto& i : stud)
	//{
	// cout << "Numer Studenta: " << i.stundent_number << endl;
	// cout << "Imie i nazwisko: ";
	// cin >> i.student_name;
	// cout << endl << "Ocena matematyka: ";
	// cin >> i.matematyka;
	// cout << endl << "Ocena informatyka: ";
	// cin >> i.informatyka;
	// cout << endl << "Ocena biologia: ";
	// cin >> i.biologia;
	// cout << endl << "Ocena j.polski: ";
	// cin >> i.j_polski;
	//}

	//cout << endl << endl << endl;

	//for (auto& k : stud)
	//{
	// cout << k.student_name << endl << "Ocena matematyka: " << k.matematyka << endl << "Ocena informatyka: " << k.informatyka << endl << "Ocena biologia: " << k.biologia << endl << "Ocena j.polski: " << k.j_polski << endl << endl;
	//}

	//for (int g = 0; g < stud.size(); g++)
	//{
	// for (int h = 0; h < stud.size()-1; h++)
	// {
	// if (stud[h].indeks > stud[h + 1].indeks) {
	// swap(stud[h], stud[h + 1]);
	// }
	// }
	//}
	//
	//for (auto& k : stud)
	//{
	// cout << endl << k.indeks << endl;
	//}

	string string_uzytkownika;
	string string_dodany;
	int powtorzenia;

	cout << endl << "Podaj ciag znakow: " << endl;
	getline(cin, string_uzytkownika);
	cout << "Ile razy mam dodac do siebie ten ciag znakow? ";
	cin >> powtorzenia;

	for (int i = 0; i < powtorzenia; i++)
	{
		string_dodany += string_uzytkownika;
	}
	cout << endl << string_dodany + string_uzytkownika;
}