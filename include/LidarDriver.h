/*
    FILE HEADER LIDARDRIVER.H
    Versione:   1.0
    Data:       21/11/2024
    Autore:     Giovanni Bordignon

    Osservazioni (1.0 - G. Bordignon):
        1. BUFFER_DIM dichiarata costante e statica. OK?
        2. Indice "coa", da trovare nome per eventuale secondo indice.
        3. Ãˆ stata inserita solo la dichiarazione.
        4. Per ora dichiarato solo il costruttore di default e copia.
        5. Valutare se tornare il vettore sovrascritto dalla funzione new_scan();
        6. (Funzioni const)

    23/11/2024
    Ho tolto lo using dato che il prof ci ha caldamente consigliato di non inserirlo
    ~andrea
*/

#ifndef LIDARDRIVER_H
#define LIDARDRIVER_H

#include <iostream>
#include <vector>

class LidarDriver {
    public:
        LidarDriver();
        LidarDriver(const LidarDriver&);
        void new_scan(std::vector<double>);  // Meglio ritornare l'eventuale vector sovrascritto?
        std::vector<double> get_scan();
        void clear_buffer();
        double get_distance(double);

    private:
        static constexpr int BUFFER_DIM {10};
        std::vector<double>* secia[BUFFER_DIM];
        int coa;
        int size;


};

//ostream& operator<<(ostream&, LidarDriver&);

#endif // LIDARDRIVER_H
