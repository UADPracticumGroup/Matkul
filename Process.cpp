#include "Process.h"
#include <vector>
#include <algorithm>

Process::Process(Matakuliah* input) {
    this->Input = input;
}

HasilProses* Process::Proses() {
    HasilProses* result = new HasilProses();
    result->NamaDosen = this->Input->NamaDosen;
    result->NamaMataKuliah = this->Input->NamaMataKuliah;

    std::vector<int> nilai_yg_diinput {};
    for (int i = 0; i < 50; i++) {
        if (this->Input->List[i].SudahDiInput) {
            nilai_yg_diinput.push_back(this->Input->List[i].Nilai);
        }
    }

    int nilaiSum = 0;
    int banyak_nilai_yg_di_input = 0;
    for (int i = 0; i < nilai_yg_diinput.size(); i++) {
        nilaiSum += nilai_yg_diinput[i];
        banyak_nilai_yg_di_input += 1;
    }

    result->NilaiAvg = nilaiSum / banyak_nilai_yg_di_input;
    result->NilaiMax = std::max_element(nilai_yg_diinput.begin(), nilai_yg_diinput.end())[0];
    result->NilaiMin = std::min_element(nilai_yg_diinput.begin(), nilai_yg_diinput.end())[0];

    for (int i = 0; i < 50; i++) {
        result->List[i].Nilai = this->Input->List[i].Nilai;
        result->List[i].SudahDiInput = this->Input->List[i].SudahDiInput;
    }

    return result;
}

