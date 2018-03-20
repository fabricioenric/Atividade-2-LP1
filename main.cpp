#include <iostream>
#include "classes.hpp"

using namespace std;

int main()
{
    Sapos *s1 = new Sapos(1);
    Sapos *s2 = new Sapos(2);
    Sapos *s3 = new Sapos(3);


    cout << "Com um numero de " <<s1->getQtd() << " pulos, o sapo 1 percorre, " << s1->getDist() << " unidades de distancia" << endl;
    cout << "Com um numero de " <<s2->getQtd() << " pulos, o sapo 2 percorre, " << s2->getDist() << " unidades de distancia" << endl;
    cout << "Com um numero de " <<s3->getQtd() << " pulos, o sapo 3 percorre, " << s3->getDist() << " unidades de distancia" << endl;


    return 0;
}
