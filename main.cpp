#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS helyett N_ELEMENTS
    int *b = new int[NELEMENTS];

    //Aposztróf helyett dupla idézőjel kell és hiányzik a "<< std::endl;"
    std::cout << '1-100 ertekek dup lazasa'

    //Hiányzik a feltétel és az "i++"
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    //Hibás feltétel
    for (int i = 0; i; i++)
    {
        //Hiányzik a "b[i]" érték és a "<< std::endl;"
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //Az 'atlag' változó nincs inicializálva és célszerű lenne lebegőbontos változót használni átlaghoz 
    int atlag;
    //Vessző van pontosvessző helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //Hiányzik a ";"
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //Hiányzik a memória felszabadítás;
    return 0;
}
