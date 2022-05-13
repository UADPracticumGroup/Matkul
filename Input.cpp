#include "Input.h"

Input::Input() {
    std::cout << "Program untuk input data buat dosen" << std::endl;
}

Matakuliah* Input::InputData() {
    Matakuliah *data = new Matakuliah();

    std::cout << "Masukkan nama dosen: ";
    std::getline(std::cin, data->NamaDosen);
    std::cout << "Masukkan nama matakuliah: ";
    std::getline(std::cin, data->NamaMataKuliah);

    std::cout << "Input nilai mahasiswa ketik 'q' dan enter jika sudah selesai sebelum nomor ke 50" << std::endl;

    int i = 0;
    do {
        std::cout << "Masukan nilai ke-" << i + 1 << ": ";
        std::string rawStr; std::getline(std::cin, rawStr);

        if (rawStr == "q") {
            break;
        }

        try {
            int nilai = std::stoi(rawStr);

            data->List[i].Nilai = nilai > 100 ? 100 : (nilai < 0 ? 0 : nilai);
            data->List[i].SudahDiInput = true;

            i += 1;
        } catch (std::exception &e) {
            std::cout << "ERROR: Input tidak valid, coba lagi." << std::endl;
        }
    } while (i <= 50);

    if (i == 0) {
        std::cout << "ERROR: Input kosong, program keluar" << std::endl;
        return nullptr;
    }

    return data;
} 
