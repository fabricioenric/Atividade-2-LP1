#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED

class Sapos{

private:

      std::string sapo;
      int dist;
      int qtd;

public:

      static int getTotal();
      int getDist();
      void setDist(int d);
      int getQtd();
      void setQtd(int q);
      Sapos(int identificador);
      int tipo;

};


int Sapos::getQtd(){
    return qtd;
}


void Sapos::setQtd(int q){
    qtd = q;
}


Sapos::Sapos(int identificador){

       tipo = identificador;

       if(tipo == 1){
         sapo = "Sapo um";
         setQtd(20);
       }

       else if(tipo == 2){
         sapo = "Sapo dois";
         setQtd(30);
       }

       else if(tipo == 3){
         sapo = "Sapo tres";
         setQtd(40);
       }
}


int Sapos::getDist(){
    return dist = qtd;
}


#endif // CLASSES_HPP_INCLUDED
