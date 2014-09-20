#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "book.h"

using namespace std;

int main()
{
    int numer = 0;
    Book book;

    cout << "Witaj w programie!" << endl;

    book.open_file();
    book.initialize();

    while(1)
    {
        cout<<"-------------------------------------------------------------------"<<endl;
        cout<<"Wybierz opcje: " << endl;
        cout<<"1. Slowo wystepaujace najczesciej" << endl;
        cout<<"2. Liczba uzytych slow" << endl;
        cout<<"3. Lista unikatowych slow" << endl;
        cout<<"4. Wyswietlenie co piatego slowa z kazdej linii " << endl;
        cout<<"5. Wyswietlenie od tylu " << endl;
        cout<<"6. Eksportuj do pliku html" << endl;
        cout<<"7. Eksportuj do pliku html z podswietleniem slow kluczowych C++"<<endl;
        cout<<"x. Zamiana slow" << endl;
        cout<<"x. Wyjscie z programu" << endl;
        cin>>numer;
        cin.clear();
        cout<<"--------------------------------------------------------------------"<<endl;
        switch(numer)
        {
        case 1:
            book.most_word();
            break;
        case 2:
            book.ile_wszystkich_slow();
            break;
        case 3:
            book.unikat();
            break;
        case 4:
            book.co_piate();
            break;
        case 5:
            book.od_tylu();
            break;
        case 6:
            book.to_html();
            break;
        case 7:
            book.to_htmlplus(book);
            break;
        case 8:
            //zamiana(vvv,vvv2,vvv3);
            break;
        case 9:
            return 0;
            break;
        }
    };

    book.close_file();
    return 0;
}
