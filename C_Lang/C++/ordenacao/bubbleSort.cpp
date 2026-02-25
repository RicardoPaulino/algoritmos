#include <iostream>
#include <vector>
#include <algorithm> // Necessário para o std::swap

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool trocou;

    for (int i = 0; i < n - 1; i++) {
        trocou = false;

        // O loop interno vai até n - i - 1 pois os últimos elementos já estão ordenados
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Função nativa do C++ para trocar valores
                std::swap(arr[j], arr[j + 1]);
                trocou = true;
            }
        }

        // Se não houve troca nesta passagem, o array já está ordenado
        if (!trocou) break;
    }
}

void imprimirArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> dados = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Array original: ";
    imprimirArray(dados);

    bubbleSort(dados);

    std::cout << "Array ordenado: ";
    imprimirArray(dados);

    return 0;
}