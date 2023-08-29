#include <stdio.h>

int main() {
    //1
    printf("Nama: Rengga Ferdiansa\n"
           "Kelas: D3 PJJ Teknik Informatika\n"
           "NRP: 3123510409\n"
    );

    //2
    int angka1 = 1024;
    int angka2 = 4096;
    int result = angka1 + angka2;
    printf("hasilnya adalah %d\n", result);

    //3
    int angka3 = 10;
    int angka4 = 10;
    int hasil = angka3 + angka4;
    printf("hasilnya adalah %d\n", hasil );

    //4
    float pecahan = 10.5;
    int pecahan2 = 50;
    int hasil2 = (int) (pecahan * pecahan2); //operator bisa diganti int/float
    printf("hasilnya adalah %d\n", hasil2);

    //5
    float bilfloat = 50.5;
    printf("bilangan fload %g\n", bilfloat);

    //6
    int angka;
    char karakter [100]; //panjang char
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Masukkan karakter: ");
    scanf(" %s", &karakter);
    printf("memasukkan angka: %d\n", angka);
    printf("memasukkan karakter: %s\n", karakter);


    //3
        //a
    int jawab, result2;
    jawab = 100;
    hasil = jawab - 10;
    printf("Jawabannya adalah %d\n", result2 + 6);

        //b
    int value1, value2, sum;
    value1 = 35;
    value2 = 18;
    sum = value1 + value2;
    printf("The sum of %d and %d is %d\n", value1,value2,sum);

        //c
    int jumlah;
    jumlah = 25 + 37 - 19;
    printf("Berapa hasil perhitungan 25 + 37 - 19 ?\n");
    printf("Jawabannya adalah %d\n", jumlah);

        //d
    double number1, number2;
    double total, rata_rata, kuadrat1, kuadrat2;

    printf("angka pertama: ");
    scanf("%lf", &number1);

    printf("angka kedua: ");
    scanf("%lf", &number2);

    total = number1 + number2;
    rata_rata = total / 2;
    kuadrat1 = (number1 * number2);
    kuadrat2 = (number2 * number2);

    printf("jumlah: %.2lf\n", total);
    printf("rata-rata: %.2lf\n", rata_rata);
    printf("kuadrat angka pertama: %.2lf\n", kuadrat1);
    printf("kuadrat angka kedua: %.2lf\n", kuadrat2);

        //e
    float a, b, c;
    a = 3;
    b = 4.0;
    c = a * a + b * b;
    printf("c * c = %f", c);

    return 0;
}
