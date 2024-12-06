#include <string>
#include "Dizionario.cpp"
#include "DizionarioEsteso.cpp"
int main() {

    DizionarioEsteso<std::string> dict;

    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");
    
    //inserisco un caso di collisione.
    dict.inserisci("papel", "red");

    
    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n";

    dict.stampa();

    return 0;
}
