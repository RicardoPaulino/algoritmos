import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        // Inicialização correta de array em Java
        int[] arr = {10, 2, 45, 9, 4, 0};
        
        System.out.println("Antes: " + Arrays.toString(arr));
        ordenar(arr);
        System.out.println("Depois: " + Arrays.toString(arr));
    }

    private static void ordenar(int[] arr) {
        int n = arr.length;
        int temp;
        boolean trocou;

        do {
            trocou = false;
            for (int i = 0; i < n - 1; i++) {
                // Se o elemento da esquerda for maior que o da direita, troca
                if (arr[i] > arr[i + 1]) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    
                    // Se houve troca, precisamos de outra passagem
                    trocou = true;
                }
            }
            // Otimização: a cada passagem, o maior elemento já está na posição correta
            n--; 
        } while (trocou);
    }
}