#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //NELEMENTS helyett N_ELEMENTS
    int *b = new int[N_ELEMENTS];

    //Aposztróf helyett dupla idézőjel kell és hiányzik a "<< std::endl;"
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    //Hiányzik a feltétel és az "i++"
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    //Hibás feltétel
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Hiányzik a "b[i]" érték és a "<< std::endl;"
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //Az 'atlag' változó nincs inicializálva és célszerű lenne lebegőbontos változót használni átlaghoz 
    double atlag = 0;
    //Vessző van pontosvessző helyett
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //Hiányzik a ";"
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //Hiányzik a memória felszabadítás;
    delete[] b;
    
    return 0;
}
