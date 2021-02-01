#include "Histogram.h"


int main() {

    Histogram h1,h2;
    Histogram h3{Histogram{h1}};

    h1.analyze("az");
    h2.analyze("bonjour");
    h3.analyze("au revoir");

    h1.print();
    h2.print();
    h3.print();

    return 0;
}