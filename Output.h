#pragma once
#include "Process.h"

class Output {
    public:
        Output(HasilProses* hasil);

        void OutputData();

    private:
        HasilProses* Hasil;
};
