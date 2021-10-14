#ifndef _ugao_h_
#define _ugao_h_

const double FAKTOR = 3.14 / 180;

class Ugao {
    double ugao; // u radijanima
public:
    Ugao(double u = 0) {
        ugao = u;
    }
    Ugao(int stp, int min, int sek) {
        ugao = ((sek / 60. + min) / 60 + stp) * FAKTOR;
    }
};


#endif