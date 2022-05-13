#pragma once
#include "Input.h"

struct HasilProses {
    std::string NamaDosen;
    std::string NamaMataKuliah;
    int NilaiAvg;
    int NilaiMax;
    int NilaiMin;

    Nilai List[50];
};

class Process {
    public:
        Process(Matakuliah* input);

        HasilProses* Proses();
    private:
        Matakuliah* Input;
};

