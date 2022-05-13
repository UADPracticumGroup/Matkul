#pragma once
#include <iostream>

struct Nilai {
    bool SudahDiInput; // Fungsinya agar index yang tidak di-input tidak di outputkan
    int Nilai;
};

struct Matakuliah {
    std::string NamaDosen;
    std::string NamaMataKuliah;
    
    Nilai List[50];
};

class Input {
    public:
        Input();
        Matakuliah* InputData();
};
