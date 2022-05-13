#include "Input.h"
#include "Output.h"
#include "Process.h"
#include <iostream>

int main() {
  Input *input = new Input();
  Matakuliah *result = input->InputData();

  if (result != nullptr) {
    Process *process = new Process(result);
    HasilProses *hasil = process->Proses();

    Output *output = new Output(hasil);
    output->OutputData();
  }
}
