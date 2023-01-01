#include <iostream>
#include <vector>
#include <fstream>

#include "Uzytkownik.h"

using namespace std;

class PlikZUzytkownikami
{
    string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

};
