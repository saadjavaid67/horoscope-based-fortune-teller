#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<ctime>
#include<chrono>

using namespace std;
using namespace chrono;

string fname, lname, username,password, age,TOC;
int day, year, month, menu;
const int SIZE = 50;
void activityLog(string s);

struct login{
	char username[SIZE];
	char password[SIZE];
};

struct createAcc{
	char fname[SIZE];
	char lname[SIZE];
	char username[SIZE];
	int age;
	char DOB[SIZE];
	char password[SIZE];
};

void capricon()
{
	cout << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(5) << setfill(' ') << "**" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(8) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(25) << setfill(' ') << "**" << endl;
	cout << setw(21) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(20) << setfill(' ') << "**" << setw(9) << setfill(' ') << "*" << endl;
	cout << "" << setw(20) << setfill(' ') << "*  *" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(15) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(25) << setfill(' ') << "**" << endl;
	cout << endl;
}

void pisces()
{
	cout << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(6) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "****" << endl;
	cout << setw(6) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << endl;
}

void aries()
{
	cout << endl;
	cout << setw(5) << setfill(' ') << "**" << setw(6) << setfill(' ') << "**" << endl;
	cout << setw(2) << setfill(' ') << "*" << setw(6) << setfill(' ') << "**" << setw(5) << setfill(' ') << "*" << endl;
	cout << "*" << setw(7) << setfill(' ') << "**" << setw(6) << setfill(' ') << "*" << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << setw(8) << setfill(' ') << "**" << endl;
	}
	cout << endl;
}

void aquarius()
{
	cout << endl;
	cout << setw(9) << setfill(' ') << "***" << setw(10) << setfill(' ') << "*" << setw(8) << setfill(' ') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(11) << setfill(' ') << "***" << setw(8) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << endl;
	cout << setw(9) << setfill(' ') << "***" << setw(10) << setfill(' ') << "*" << setw(8) << setfill(' ') << "*" << endl;;
	cout << setw(5) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(11) << setfill(' ') << "***" << setw(8) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << endl;
}

void taurus()
{
	cout << endl;
	cout << " **" << setw(12) << setfill(' ') << "**" << endl;;
	cout << "*" << setw(3) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << "  *" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(6) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "****" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(4) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "****" << endl;
	cout << endl;
}

void gemini()
{
	cout << endl;
	for (int i = 0; i <= 11; ++i){
		cout << "*";
	}
	cout << endl;
	for (int k = 0; k <= 5; ++k){
		cout << setw(5) << setfill(' ') << "*" << setw(3) << setfill(' ') << "*" << endl;
	}
	for (int i = 0; i <= 11; ++i){
		cout << "*";
	}
	cout << endl << endl;
}

void cancer()
{
	cout << endl;
	cout << setw(15) << setfill(' ') << "*" << setw(15) << setfill('*') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(10) << setfill(' ') << "*" << setw(10) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << setw(14) << setfill(' ') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(10) << setfill(' ') << "*" << setw(16) << setfill(' ') << "*" << endl;
	cout << setw(15) << setfill(' ') << "*" << setw(6) << setfill('*') << "*" << endl;
	cout << setw(32) << setfill(' ') << "*" << setw(6) << setfill('*') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(17) << setfill(' ') << "*" << setw(10) << setfill(' ') << "*" << endl;
	cout << setw(14) << setfill(' ') << "*" << setw(15) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << endl;
	cout << setw(16) << setfill(' ') << "*" << setw(13) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << endl;
	cout << setw(19) << setfill(' ') << "*" << setw(11) << setfill(' ') << "*" << setw(10) << setfill(' ') << "*" << endl;
	cout << setw(22) << setfill(' ') << " " << setw(16) << setfill('*') << "*" << endl;
	cout << endl;
}

void leo()
{
	cout << endl;
	cout << setw(16) << setfill(' ') << "****" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(9) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(8) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(6) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(3) << setfill('*') << "" << setw(4) << setfill(' ') << "*" << endl;
	cout << setw(9) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << setw(2) << setfill(' ') << "*" << endl;
	cout << setw(9) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << setw(2) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(3) << setfill('*') << "" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(22) << setfill(' ') << "***" << endl;
	cout << endl;
}

void libra()
{
	cout << endl;
	cout << setw(15) << setfill(' ') << "*" << setw(10) << setfill('*') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(14) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(18) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(20) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(20) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(18) << setfill(' ') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(14) << setfill(' ') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(8) << setfill('*') << "*" << setw(14) << setfill(' ') << "*" << setw(8) << setfill('*') << "*" << endl;
	cout << setw(5) << setfill(' ') << "*" << setw(30) << setfill('*') << "*" << endl;
	cout << endl;
}

void virgo()
{
	cout << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(5) << setfill(' ') << "**" << setw(5) << setfill(' ') << "**" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(4) << setfill(' ') << "**" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(2) << setfill(' ') << "*" << setw(3) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(2) << setfill(' ') << "*" << endl;
	cout << setw(22) << setfill(' ') << "*" << endl;
	cout << setw(22) << setfill(' ') << "* *" << endl;
	cout << endl;
}

void sagittarius()
{
	cout << endl;
	cout << setw(30) << setfill(' ') << "* * * * *" << endl;
	cout << setw(27) << setfill(' ') << "*" << setw(3) << setfill(' ') << "*" << endl;
	cout << setw(25) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(23) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(11) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(7) << setfill(' ') << "*" << endl;
	cout << setw(14) << setfill(' ') << "*" << setw(3) << setfill(' ') << "*" << endl;
	cout << setw(15) << setfill(' ') << "*" << endl;
	cout << setw(13) << setfill(' ') << "*" << setw(4) << setfill(' ') << "*" << endl;
	cout << setw(11) << setfill(' ') << "*" << setw(8) << setfill(' ') << "*" << endl;
	cout << setw(9) << setfill(' ') << "*" << setw(12) << setfill(' ') << "*" << endl;
	cout << endl;
}

void scorpio()
{
	cout << endl;
	cout << setw(10) << setfill(' ') << "*" << setw(5) << setfill(' ') << "**" << setw(5) << setfill(' ') << "**" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(4) << endl;
	cout << setw(12) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(23) << setfill(' ') << "*" << setw(5) << setfill(' ') << "*" << endl;
	cout << setw(26) << setfill(' ') << "**" << endl;
	cout << endl;
}

void choice()
{
	cout << setw(42) << setfill('-') << "\n";
	cout << "What do you want to know about yourself?\n\n";
	cout << "1.  Daily Horoscope\n";
	cout << "2.  Weekly Horosope\n";
	cout << "3.  Monthly Horosope\n";
	cout << "4.  Yearly Horosope\n";
	cout << "5.  Career Horosope\n";
	cout << "6.  Money Horosope\n";
	cout << "7.  Health Horosope\n";
	cout << "8.  Planets Horosope\n";
	cout << "9.  Lucky Number\n";
	cout << "10. Lucky Gem\n";
	cout << "11. Lucky Color\n";
	cout << "0. Return to Main Menu\n\n";

}

void fileRead(string path)
{
	string x;

	ifstream file(path);
	cout << setw(80) << setfill('-') << "\n";
	while (!file.eof())
	{
		getline(file, x);
		cout << x << endl;
	}
	cout << setw(80) << setfill('-') << "\n";
	file.close();
}

void starCase(string star, string  timePeriod)
{
	cout << "Your star sign is " << star << "\n";
	cout << timePeriod << "\n";
	choice();
	cout << "Enter what you want to know: "; cin >> menu;
	switch (menu)
	{
	case 1:
		fileRead("Horoscope\\" + star + "\\Daily\\Horoscope.txt");
		activityLog(username + " Checked daily horoscope.");
		break;

	case 2:
		activityLog(username + " Checked weekly horoscope.");
		fileRead("Horoscope\\" + star + "\\Weekly\\Horoscope.txt");
		break;

	case 3:
		fileRead("Horoscope\\" + star + "\\Monthly\\Horoscope.txt");
		activityLog(username + " Checked monthly horoscope.");
		break;

	case 4:
		fileRead("Horoscope\\" + star + "\\Yearly\\Horoscope.txt");
		activityLog(username + " Checked yearly horoscope.");
		break;

	case 5:
		fileRead("Horoscope\\" + star + "\\career.txt");
		activityLog(username + " Checked career horoscope.");
		break;

	case 6:
		fileRead("Horoscope\\" + star + "\\money.txt");
		activityLog(username + " Checked money horoscope.");
		break;

	case 7:
		fileRead("Horoscope\\" + star + "\\health.txt");
		activityLog(username + " Checked health horoscope.");
		break;

	case 8:
		fileRead("Horoscope\\" + star + "\\planets.txt");
		activityLog(username + " Checked planets horoscope.");
		break;

	case 9:
		fileRead("Horoscope\\" + star + "\\Lucky Number.txt");
		activityLog(username + " Checked lucky number horoscope.");
		break;

	case 10:
		fileRead("Horoscope\\" + star + "\\Lucky Gem.txt");
		activityLog(username + " Checked lucky gem horoscope.");
		break;

	case 11:
		fileRead("Horoscope\\" + star + "\\Lucky Color.txt");
		activityLog(username + " Checked lucky color horoscope.");
		break;
	case 0:
		return;
	}
}

int horoscope(){
	int n_day, n_month, c_day, c_month;
	string x;
	char i = 1;
	int dateChoice;

	do{
		do{
			cout << setw(42) << setfill('-') << "\n";
			cout << "Whose Horoscope do you want to know?\n\n1. Your Own?\n2. Anyone Else?\n\nEnter Your Choice: "; cin >> dateChoice;
			cout << setw(42) << setfill('-') << "\n";
			if (dateChoice == 1){
				activityLog(username + " Checked his/her own horoscope.");
				cout << "Your Date of Birth is:\n\n"
					<< "Day:   " << day << endl
					<< "Month: " << month << endl;
				c_day = day; c_month = month;
			}
			else if (dateChoice == 2){
				cout << "Enter his/her date of birth\n";
				cout << "Day:   "; cin >> n_day;
				cout << "Month: "; cin >> n_month; cout << endl;
				c_day = n_day; c_month = n_month;
				activityLog(username + " Checked horoscope for someone else.");
			}
		} while (dateChoice != 1 && dateChoice != 2);

		cout << setw(42) << setfill('-') << "\n";

		//<------------------------- Aries ------------------------->
		if ((c_day >= 21 && c_month == 3) || (c_day <= 19 && c_month == 4)){
			aries();
			starCase("Aries", "(21st March - 19th April)");
		}

		//<------------------------- Taurus ------------------------->
		else if ((c_day >= 20 && c_month == 4) || (c_day <= 20 && c_month == 5)){
			taurus();
			starCase("Taurus", "(20th April - 20th May)");
		}

		//<------------------------- Gemini ------------------------->
		else if ((c_day >= 21 && c_month == 5) || (c_day <= 20 && c_month == 6)){
			gemini();
			starCase("Gemini", "(21st May - 20th June)");
		}

		//<------------------------- Cancer ------------------------->
		else if ((c_day >= 21 && c_month == 6) || (c_day <= 22 && c_month == 7)){
			cancer();
			starCase("Cancer", "(21st June - 22nd July)");
		}

		//<------------------------- Leo ------------------------->
		else if ((c_day >= 23 && c_month == 7) || (c_day <= 22 && c_month == 8)){
			leo();
			starCase("Leo", "(23rd July - 22nd August)");
		}

		//<------------------------- Virgo ------------------------->
		else if ((c_day >= 23 && c_month == 8) || (c_day <= 22 && c_month == 9)){
			virgo();
			starCase("Virgo", "(23rd August - 22nd September)");
		}

		//<------------------------- Libra ------------------------->
		else if ((c_day >= 23 && c_month == 9) || (c_day <= 22 && c_month == 10)){
			libra();
			starCase("Libra", "(23rd September - 22nd October)");
		}

		//<------------------------- Scorpio ------------------------->
		else if ((c_day >= 23 && c_month == 10) || (c_day <= 21 && c_month == 11)){
			scorpio();
			starCase("Scorpio", "(23rd October - 21st November)");
		}

		//<------------------------- Sagittarius ------------------------->
		else if ((c_day >= 22 && c_month == 11) || (c_day <= 21 && c_month == 12)){
			sagittarius();
			starCase("Sagittarius", "(22nd November - 21st December)");
		}

		//<------------------------- Capricon ------------------------->
		else if ((c_day >= 22 && c_month == 12) || (c_day <= 19 && c_month == 1)){
			capricon();
			starCase("Capricon", "(22nd December - 19th January)");
		}

		//<------------------------- Aquarius ------------------------->
		else if ((c_day >= 20 && c_month == 1) || (c_day <= 18 && c_month == 2)){
			aquarius();
			starCase("Aquarius", "(20th January - 18th February)");
		}

		//<------------------------- Pisces ------------------------->
		else if ((c_day >= 19 && c_month == 2) || (c_day <= 20 && c_month == 3)){
			pisces();
			starCase("Pisces", "(19th February - 20th March)");
		}
		cout << "Do you want to know another horoscope? Enter Y for Yes and N for no: "; cin >> i;
		system("cls");
	} while ((i == 'Y' || i == 'y') && (i != 'N' || i != 'n'));
	return 1;
}

int digitsum(int num)
{
	int sum = 0;
	while (num>0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int loveCalculator(){
	char YourName[40], LoverName[40];
	int yoursum, loversum, i, choice, Percentage = 0;
	do
	{

		cout << "Enter Your Name " << endl;
		cin.getline(YourName, 40);
		cout << "----------------------          " << endl;

		gets_s(YourName);

		cout << "Enter Your Lovers Name " << endl;

		cin.getline(LoverName, 40);
		cout << "----------------------          " << endl;
		yoursum = 0;
		for (i = 0; i<signed(strlen(YourName)); i++)
		{
			yoursum += (YourName[i]);
		}
		loversum = 0;
		for (i = 0; i<signed(strlen(LoverName)); i++)
		{
			loversum += (LoverName[i]);
		}
		cout << "Calculation completed!!!!!" << endl;
		Percentage = (digitsum(yoursum) + digitsum(loversum)) + 40;
		if (Percentage>100) Percentage = 100;
		cout << "your love percentage is " << Percentage << " %" << endl;
		cout << "Want to calculate with someone else press 1 and 0 for exit" << endl;
		cin >> choice;
		system("cls");
	} while (choice != 0);
	//Added by Muhammad Saad
	activityLog(username + " Calculated love percentage with "+YourName+" & "+LoverName+".");
	return 1;
}

string spaceToDash(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isspace(s[i]) && i != s.length() - 1)
			s[i] = '_';
		if (s[i]=='\n')
			s.erase(i,1);

	}
	return s;
}

string getTime()
{
	auto timenow = system_clock::to_time_t(system_clock::now());
	return  spaceToDash(ctime(&timenow));
}

void activityLog(string s){
	ofstream file;
	file.open("activity.log", ios::app);
	file << "[" << getTime() << "]: "<<s<<endl;
	file.close();
}

void printHeading(char str[]){
	int lenght = 0;
	while (str[lenght] != '\0'){
		lenght++;
	}
	cout << "  -" << setw(lenght + 3) << setfill(' ') << "-" << "\n " << setw(lenght + 7) << setfill('-') << "\n"
		<< "-   " << str << "   -\n "
		<< setw(lenght + 7) << setfill('-') << "\n" << "  -" << setw(lenght + 3) << setfill(' ') << "-" << "\n";
}

void writeNewAcc(createAcc newAcc){
	ofstream file;
	file.open("users.dat", ios::app);
	file << setw(50)<<setfill('=') << "\n";
	file << "username: " << newAcc.username << endl;
	file << "password: " << newAcc.password << endl;
	file << "fname: " << newAcc.fname << endl;
	file << "lname: " << newAcc.lname << endl;
	file << "age: " << newAcc.age << endl;
	file << "day of Birth: " << newAcc.DOB[0] << newAcc.DOB[1] << endl;
	file << "month of Birth: " << newAcc.DOB[3] << newAcc.DOB[4] << endl;
	file << "year of Birth: " << newAcc.DOB[6] << newAcc.DOB[7] << newAcc.DOB[8] << newAcc.DOB[9] << endl;
	file << "Time of Account Creation: " << getTime()<<endl;
	file << setw(50) << setfill('=') << "\n";
	file.close();
	cout << "\nYou have Created an Account Successfully!\n";
	system("pause");
}

void createAccount();

int accountInfo(){
	printHeading("Current Account Information");
	cout << "\nName: " << fname << " " << lname
		<< "\nUsername: " << username
		<< "\nAge: "<<age
		<<"\nDate of Birth: "<<day<<"-"<<month<<"-"<<year
		<< "\nPassword: " << password 
		<< "\nTime of Account Creation: " << TOC << "\n\n";
	system("pause");
	return 1;
}

int checkUser(char username[]){
	ifstream file("users.dat");
	string s;
	size_t pos;
	string search = "username: " + (string)username;
	while (file.good())
	{
		getline(file, s);
		pos = s.find(search);
		if (pos != string::npos&&s.size() == search.size()) 
		{
			cout << "\nUser with this Username Already Exists! Try another Username.\n";
			return 1;
		}
	}
	return 0;
}

void createAccount(){
	createAcc newAcc;
	printHeading("Create An Account");
	cout << "Enter your First Name: "; cin >> newAcc.fname;
	cout << "Enter your Last Name: "; cin >> newAcc.lname;
	do{
		cout << "Enter a Username: "; cin >> newAcc.username;
		int i = 0;
		while (newAcc.username[i] != '\0'){
			if (newAcc.username[i] >= 97 && newAcc.username[i] <= 122)
			{
				newAcc.username[i] = newAcc.username[i] - 32;
			}
			i++;
		}
	} while (checkUser(newAcc.username));
	cout << "Enter your Age: "; cin >> newAcc.age;
	cout << "Enter your Date of Birth [DD-MM-YYYY] : "; cin >> newAcc.DOB;
	int length = 0, a = 0;
	do{
		if (a > 0)
			cout << "\nYour Password Must Contain Minimum of 8 Characters!\n";
		cout << "Enter your Password ";
		if (a > 0)
			cout << "Again";
		else
			cout << "(Minimum 8 Characters)";
		cout << ": ";
		cin >> newAcc.password;

		while (newAcc.password[length] != '\0')
			length++;
		a++;
	} while (length < 8);


	writeNewAcc(newAcc);
	
}

void mainMenu(){
	int choice;
	do{
		system("cls");
		cout << "  -" << setw(30) << setfill(' ') << "-" << "\n " << setw(34) << setfill('-') << "\n"
			<< "-   Welcome, " << setw(18) << setfill(' ') << left << username << "   -\n "
			<< setw(34) << setfill('-') << right << "\n" << "  -" << setw(30) << setfill(' ') << "-" << "\n";
		cout << "\nWhat do you want to know?\n\n1. Horoscope\n2. Love Calculator\n3. Account Info\n4. Exit\n\nEnter your Choice: "; cin >> choice;
	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
	if (choice == 1){
		activityLog(username + " Selected Horosope from Main Menu.");
		if (horoscope()){
			mainMenu();
			return;
		}
	}
	else if (choice == 2){
		system("cls");
		activityLog(username + " Selected Love Calculator from Main Menu.");
		if (loveCalculator()){
			mainMenu();
			return;
		}
		
	}
	else if (choice == 3){
		system("cls");
		activityLog(username + " Selected Account Information from Main Menu.");
		if (accountInfo()){
			mainMenu();
			return;
		}
	}
	else if (choice == 4){
		activityLog(username + " Exited.");
		exit(0);
	}
	system("pause");
}

int loginAccount(){
	bool check = 0;
	do{
		system("cls");
		printHeading("Login Panel");
		login login;
		cout << "\nEnter a Username: "; cin >> login.username;
		cout << "Enter your Password: "; cin >> login.password;
		int i = 0;
		while (login.username[i] != '\0'){
			if (login.username[i] >= 97 && login.username[i] <= 122)
			{
				login.username[i] = login.username[i] - 32;
			}
			i++;
		}
		ifstream file("users.dat");
		if (!file){
			file.close();
			cout << "\nNo Database Found.\n";
			system("pause");
		}
		else{
			username = login.username;
			password = login.password;
			string s;
			size_t user_pos;
			size_t pass_pos;
			string user = "username: " + (string)login.username;
			string pass = "password: " + (string)login.password;
			bool acc = 0;
			while (file.good())
			{
				getline(file, s);
				user_pos = s.find(user);
				if (user_pos != string::npos&&s.size() == user.size()) 
				{
					bool pas = 0;
					acc = 1;
					getline(file, s);
					pass_pos = s.find(pass);
					if (pass_pos != string::npos&&s.size() == pass.size()) 
					{
						pas = 1;
						getline(file, s, ':');
						file >> fname;
						getline(file, s, ':');
						file >> lname;
						getline(file, s, ':');
						file >> age;
						getline(file, s, ':');
						file >> day;
						getline(file, s, ':');
						file >> month;
						getline(file, s, ':');
						file >> year;
						getline(file, s, ':');
						file >> TOC;
						activityLog(username + " Logged In.");
						check = 1;
						return 1;
					}
					if (!pas){
						cout << "\nIncorrect Password.\n";
						system("pause");
						check = 0;
					}
				}

			}
			if (!acc){
				cout << "\nNo Account found with this Username.\n";
				system("pause");
				check = 0;
			}

			file.close();
		}
	} while (!check);
	return 0;
}

int welcome(){
	int loginChoice = 0;
	do{
		printHeading("Welcome to Fortune Teller Program");
		cout << "\nChoose one of the option below:\n\n1.Login?\n2.Sign Up?\n\nEnter Your Choice: ";
		cin >> loginChoice;
		system("cls");
	} while (loginChoice != 1 && loginChoice != 2);
	if (loginChoice == 1){
		if (loginAccount())
			return 1;
	}
	else if (loginChoice == 2){
		createAccount();
		system("cls");
		if (welcome())
			return 1;
	}
	return 0;
}

int main(){
	if (welcome())
		mainMenu();
	return 0;
}