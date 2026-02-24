function bubbleSort(arr: number[]): number[] {
  const n = arr.length;
  let temp: number;
  let trocou: boolean; // Usamos um booleano para clareza

  do {
    trocou = false;
    // Percorremos até n - 1 para não comparar o último item com o "além do array"
    for (let i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        // Realiza a troca (Swap)
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        
        trocou = true; // Se houve troca, precisamos checar o array de novo
      }
    }
  } while (trocou); // Para quando percorrer o array inteiro sem nenhuma troca

  return arr;
}

// Para printar no console:
const meuArray = [10, 6, 8, 45, 0];
console.log("Array Ordenado:", bubbleSort(meuArray));