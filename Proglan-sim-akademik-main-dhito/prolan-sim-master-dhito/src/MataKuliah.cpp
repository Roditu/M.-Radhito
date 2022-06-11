#include "include/MataKuliah.hpp"
#include <iostream>

MataKuliah::matakuliah(std::string kode, std::string judul, int sksmatkul)
    : kode(kode), judul(judul), sksmatkul(sksmatkul){}

std::string matakuliah::getkode(){
    return this->kode;

}
std::string matakuliah::getjudul(){
    return this->judul;

}

int matakuliah::getsksmatkul(){
    return this->sksmatkul;

}