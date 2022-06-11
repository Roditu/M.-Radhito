#ifndef __MATAKULIAH_HPP__
#define __MATAKULIAH_HPP__

#include <iostream>
#include "include/person.hpp"

class matakuliah {
private:
    std::string kode;
    std::string judul;
    int sksmatkul;

public:
    matakuliah(std::string kode, std::string judul, int sksmatkul);

    std::string getkode();
    std::string getjudul();
    int getsksmatkul();
    
};
#endif