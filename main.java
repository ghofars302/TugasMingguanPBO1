import java.util.Scanner;

class main {
    // Main program atau ENTRY_POINT
    public static void main(String[] args) {
        // Ini comment

        // Tipe data & variable
        int how_many = 0;

        // output
        System.out.print("Masukan banyak perulangan: ");

        // input
        Scanner scan = new Scanner(System.in);
        how_many = scan.nextInt();
        scan.close();

        // perulangan for
        for (int i = 1; i <= how_many; i++) {

            // if...else
            if (i % 2 == 0) {
                System.out.println("[1] Bilangan: " + i + " adalah genap");
            } else {
                System.out.println("[1] Bilangan: " + i + " adalah ganjil");
            }
        }

        // while loop
        int t1 = 1;
        while (t1 <= how_many) {
            if (t1 % 2 == 0) {
                System.out.println("[2] Bilangan: " + t1 + " adalah genap");
            } else {
                System.out.println("[2] Bilangan: " + t1 + " adalah ganjil");
            }

            t1++;
        }

        // do while loop
        int t2 = 1;
        do {
            if (t2 % 2 == 0) {
                System.out.println("[3] Bilangan: " + t2 + " adalah genap");
            } else {
                System.out.println("[3] Bilangan: " + t2 + " adalah ganjil");
            }

            t2++;
        } while (t2 <= how_many);

        // array 1 dimensi
        int[] array = { 1, 2, 3, 4, 5, 6 };

        // array 2 dimensi
        int[][] array_2d = {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8}
        };

        // hasil print-out array & array_2d
        for (int i : array) {
            System.out.print(i + " ");
        }

        System.out.println();

        for (int[] deep : array_2d) {
            for (int i : deep) {
                System.out.print(i + " ");
            }

            System.out.println();
        }
    } 
}
