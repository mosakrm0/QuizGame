#include <iostream>

using namespace std;

int main () {

    cout << "\t Quiz Game ! \n";

    int i = 0;
    char x;


    cout << "\tFirst Question !\n\n";
    cout << "What Is The Capital Of Jordan ? \n\n";
    cout << "A)Amman \n" << "B)Baghdad \n" << "C)Moscow \n" << "D)Tokyo \n" <<endl;

while (true) {
    cout << "Choose Your Option : ";
    cin >> x;
    cout <<endl;

    if (x == 'A' || x == 'a' || x == 'B' || x == 'b'|| x == 'C'||x == 'c'||x == 'D'||x == 'd' )
    {
        break;
    }
    else {
        cout << "\nInvalid Value , Please Try Again : ";

    }
cout << endl;
}

if (x=='a' || x=='A') {
    cout << "\n\n\tCorrect Answer :) \n\n";
    i++;
}
else {
        cout << "\n\n\t Wrong Answer :( \n\n";

}


// Just Copy & Paste Then Change The Question And The Correct Answer :)

 cout << "\t Seconed Question !\n\n";
    cout << "What Is The Capital Of Japan ? \n\n";
    cout << "A)Amman \n" << "B)Baghdad \n" << "C)Moscow \n" << "D)Tokyo \n" <<endl;

while (true) {
    cout << "Choose Your Option : ";
    cin >> x;
    cout <<endl;

    if (x == 'A' || x == 'a' || x == 'B' || x == 'b'|| x == 'C'||x == 'c'||x == 'D'||x == 'd' )
    {
        break;
    }
    else {
        cout << "\nInvalid Value , Please Try Again : ";

    }
cout << endl;
}

if (x=='d' || x=='D') {
    cout << "\n\n\tCorrect Answer :) \n\n";
    i++;
}
else {
        cout << "\n\n\t Wrong Answer :( \n\n";

}

// Just Copy & Paste Then Change The Question And The Correct Answer :)

 cout << "\t Third Question !\n\n";
    cout << "What Is The Capital Of Austria ? \n\n";
    cout << "A)Cairo \n" << "B)Baghdad \n" << "C)Vieena \n" << "D)Moscow \n" <<endl;

while (true) {
    cout << "Choose Your Option : ";
    cin >> x;
    cout <<endl;

    if (x == 'A' || x == 'a' || x == 'B' || x == 'b'|| x == 'C'||x == 'c'||x == 'D'||x == 'd' )
    {
        break;
    }
    else {
        cout << "\nInvalid Value , Please Try Again : ";

    }
cout << endl;
}

if (x=='c' || x=='C') {
    cout << "\n\n\tCorrect Answer :) \n\n";
    i++;
}
else {
        cout << "\n\n\t Wrong Answer :( \n\n";

}


cout <<"\t Game Is Over \n\n" << "\tYou Got " << i << " Out Of 3 Answers Correct !\n\n" << "\t\tThe End \n\n";
}
