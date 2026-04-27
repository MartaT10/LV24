#include <iostream>
#include <queue>
#include <string>
using namespace std;

void a1_hotpotato();
void a2_hotpotato();
void b_hotpotato();

int main()
{
    //Marta Topolnjak, 1. RM

    //a1_hotpotato();
    //a2_hotpotato();
    //b_hotpotato();

    return 0;
}

void a1_hotpotato() {
    int n, k;
    cin >> n; //*n* - broj imena u hotpotato-u
    queue<string> q; // *q* - red u koji upisujemo imena

    for (int i = 0; i < n; i++) { 
        //Unosimo *n* imena i stavljamo u red *q*
        string ime; cin >> ime;
        q.push(ime);
    }

    cin >> k; //*k* - broj nakon kojeg se neko ime izbacuje

    while (q.size() > 1) { //dok imamo više od jednog imena u redu (dok nemamo pobjednika)
        for (int i = 0; i < k; i++) {
            q.push(q.front()); //stavljamo ime koje je sada prvo u redu na kraj reda (sljedeæe ime je na redu)
            q.pop();
        }
        cout << "Ispada: " << q.front() << endl;
        q.pop(); //onaj koji je sada prvi na redu je ispao
    }
    cout << "Pobjednik: " << q.front() << endl; //pobjednik je ime koje je ostalo u redu
}

void a2_hotpotato() {
    int n, k;
    cin >> n; //*n* - broj imena u hotpotato-u
    queue<string> q; // *q* - red u koji upisujemo imena

    for (int i = 0; i < n; i++) {
        string ime;
        cin >> ime;
        q.push(ime);
    }

    cin >> k; //*k* - broj nakon kojeg se neko ime izbacuje

    while (q.size() > 1) { //dok imamo više od jednog imena u redu (dok nemamo pobjednika)
        cout << "Red: ";
        int vel = q.size(); //spremamo velièinu reda *q* u varijablu *vel*

        for (int i = 0; i < vel; i++) { //petlja ide od 0 do *vel*
            cout << q.front() << " "; //ispisuje ime koje je trenutno na reu
            q.push(q.front()); //stavljamo ime koje je sada prvo u redu na kraj reda (sljedeæe ime je na redu)
            q.pop();
        }

        cout << endl;

        for (int i = 0; i < k; i++) {
            q.push(q.front()); //stavljamo ime koje je sada prvo u redu na kraj reda (sljedeæe ime je na redu)
            q.pop();
        }
        cout << "Ispada: " << q.front() << endl;
        q.pop(); //onaj koji je sada prvi na redu je ispao
    }
    cout << "Pobjednik: " << q.front() << endl; //pobjednik je ime koje je ostalo u redu
}

void b_hotpotato() {
    int n, k;
    cin >> n;
    queue<string> q;

    for (int i = 0; i < n; i++) {
        string ime;
        cin >> ime;
        // TODO: dodaj ime u red
        q.push(ime);
    }

    cin >> k;

    while (q.size() > 1) {
        for (int i = 0; i < k; i++) {
            // TODO:
            // uzmi prvog iz reda
            // stavi ga na kraj reda
            q.push(q.front());
            // ukloni ga s poèetka
            q.pop();
        }
        cout << "Ispada: " << q.front() << endl;
        // TODO: ukloni igraèa koji ispada
        q.pop();
    }
    cout << "Pobjednik: " << q.front() << endl;
}