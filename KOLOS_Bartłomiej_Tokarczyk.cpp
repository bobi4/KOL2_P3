// P3 Bartłomiej Tokarczyk

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

class Drzewo {
    public:
        Drzewo( const char* n, double h ) {
            name = n;
            height = h; 
        } // to deklaracja
        const char *nazwa(const char * = nullptr) {
            if(nazwa==nullptr){
                const char *nazwa_drzewa = name.c_str();
                return nazwa_drzewa;
            }else
            {
                return name.c_str();
            }
        }
        double wysokosc(double wysokosc = 0) {
          
		if (wysokosc == 0)
		{
			return height;
		}
		else
		{
			height = wysokosc;
		
	}
        }
        void galaz(Galaz *) {
            vector<Galaz *> (new Galaz);
        }
        Galaz *galaz(size_t){
            this->galaz();
            return this;
        }
        size_t galaz() const {
            return galaz();
        }
       ~Drzewo() {
            cout << "Usuwanie obiektu"<< "\n";
            galaz.errase();
        }
    private:
        string name;
        double height;
        vector<Galaz*> galaz; // pamietac o skasowaniu obiektow
};

class Galaz : public Drzewo {
    public:
        Galaz() { }
         double dlugosc(double = 0) {
            if(dlugosc==0){
                cout << dlugosc; //odczyt
            }else
            {
                //ustaw
            }
            
        }
        size_t lisc(size_t = 0) { 
            if(lisc==0){
              cout << lisc;   //odczyt
            }else
            {
                //ustaw
            }
            }
    private:
        double dlug = 0;
        size_t lisc = 0;

}; 




int main() {
    Drzewo d1("brzoza", 20); // nazwa wysokosc
    Drzewo d2("sekwoja", 100); 
    d1.galaz( new Galaz ); // dodaje pierwsza galaz
    d1.galaz( new Galaz ); // dodaje kolejna galaz
    Galaz* g1 = d1.galaz( 0 ); // pobieram pierwsza galaz
    g1->dlugosc( 5 ); // ustawiam dlugosc galezi
    g1->lisc( 100 ); // ustawiam liczbe lisci
    Galaz* g2 = d2.galaz( 1 ); // pobieram druga galaz
    g2->dlugosc( 3 ); // ustawiam dlugosc galezi
    g2->lisc( 70 ); // ustawiam liczbe lisci

    cout << d1.nazwa() << " ma galezi: " << d1.galaz() << endl;
    cout << d2.nazwa() << " ma galezi: " << d2.galaz() << endl;

}