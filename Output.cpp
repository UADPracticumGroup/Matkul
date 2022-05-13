#include "Output.h"
#include <fstream>

Output::Output(HasilProses* hasil) {
    this->Hasil = hasil;
}

void Output::OutputData() {
    std::string OutputString = "===================================================";
    OutputString.append("\nNama Dosen \t : " + Hasil->NamaDosen);
    OutputString.append("\nNama Mata Kuliah : " + Hasil->NamaMataKuliah);
    OutputString.append("\n===================================================");

    // looping untuk menampilkan nilai
    for (int i = 0; i < 50; i++) {
        if (Hasil->List[i].SudahDiInput) {
            OutputString.append("\nNilai ke " + std::to_string(i + 1) + " \t : " + std::to_string(Hasil->List[i].Nilai));
        }
    }

    OutputString.append("\n===================================================");
    OutputString.append("\nNilai Rata-rata  : " + std::to_string(Hasil->NilaiAvg));
    OutputString.append("\nNilai Terbesar \t : " + std::to_string(Hasil->NilaiMax));
    OutputString.append("\nNilai Terkecil \t : " + std::to_string(Hasil->NilaiMin));
    OutputString.append("\n===================================================");

    std::fstream file = std::fstream("Output.txt", std::ios::out);
    file << OutputString;
    file.close();

    std::cout << OutputString << std::endl;
}
