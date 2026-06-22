#include <iostream>
#include <string>

using namespace std;

// WARNA ANSI 
#define RESET    "\033[0m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define YELLOW   "\033[33m"
#define BLUE     "\033[34m"
#define CYAN     "\033[36m"
#define BOLD     "\033[1m"
#define GOLD     "\033[38;5;220m"
#define PURPLE   "\033[38;5;129m"
#define MARGIN  30

void printCentered(string text) {
    cout << string(MARGIN, ' ') << text << endl;
}

// Garis pembatas yang sudah terpusat
void printDivider() {
    cout << string(MARGIN, ' ') << "================================================================" << endl;
}

void howToPlay() {
    system("cls"); 

    // BAGIAN 1: OBJECTIVE
    cout << BOLD << GOLD;
    cout << string(MARGIN, ' ') << "================================================================" << endl;
    cout << string(MARGIN, ' ') << "|                     H O W   T O   P L A Y                    |" << endl;
    cout << string(MARGIN, ' ') << "================================================================" << endl << endl;

    cout << BOLD << BLUE;
    printCentered("OBJECTIVE");
    cout << RESET;
    printDivider();
    printCentered("Hancurkan seluruh target menggunakan bola yang tersedia.");
    printCentered("Selesaikan setiap level dengan jumlah tembakan sesedikit");
    
    printCentered("Tekan Enter untuk melanjutkan........");
    cin.get();
    system("cls");

    // BAGIAN 2: LANGKAH BERMAIN
    cout << BOLD << GREEN;
    printCentered("LANGKAH BERMAIN");
    cout << RESET;
    printDivider();

    cout << BOLD << YELLOW << string(MARGIN, ' ') << "1. Mulai Permainan" << RESET << endl;
    printCentered("Pilih menu START pada Main Menu untuk memulai permainan.\n");

    cout << BOLD << YELLOW << string(MARGIN, ' ') << "2. Atur Sudut Peluncuran" << RESET << endl;
    printCentered("Masukkan sudut (derajat) untuk peluncuran bola.");
    printCentered("Sudut yang berbeda akan menghasilkan lintasan yang berbeda.\n");

    cout << BOLD << YELLOW << string(MARGIN, ' ') << "3. Atur Kekuatan Tembakan" << RESET << endl;
    printCentered("Masukkan nilai kecepatan tembakan (m/s) untuk menentukan");
    printCentered("seberapa jauh bola akan diluncurkan menuju target.\n");

    cout << BOLD << YELLOW << string(MARGIN, ' ') << "4. Luncurkan Bola" << RESET << endl;
    printCentered("Setelah sudut dan kekuatan ditentukan, bola akan");
    printCentered("bergerak mengikuti gravitasi.\n");
    
    printCentered("Tekan Enter untuk melanjutkan........");
    cin.get();
    system("cls");

    // BAGIAN 3: TARGET, BOLA, LEVEL
    cout << BOLD << RED;
    printCentered("HANCURKAN TARGET");
    cout << RESET;
    printDivider();
    printCentered("Bidik seluruh target dengan tepat untuk menambah skor.\n");

    cout << BOLD << CYAN;
    printCentered("BOLA TERBATAS");
    cout << RESET;
    printDivider();
    printCentered("Jumlah kesempatan terbatas. Gunakan seefektif mungkin.\n");

    cout << BOLD << PURPLE;
    printCentered("DYNAMIC LEVEL");
    cout << RESET;
    printDivider();
    printCentered("Setiap level memiliki susunan target yang diacak.");
    printCentered("Sesuaikan strategi, sudut, dan kekuatan setiap saat.\n");
    
    printCentered("Tekan Enter untuk melanjutkan........");
    cin.get();
    system("cls");

    // BAGIAN 4: MENANG/KALAH
    cout << BOLD << GREEN;
    printCentered("MENANG");
    cout << RESET;
    printDivider();
    printCentered("Hancurkan seluruh target untuk menyelesaikan level.\n");

    cout << BOLD << RED;
    printCentered("KALAH");
    cout << RESET;
    printDivider();
    printCentered("Permainan berakhir jika bola habis sebelum target hancur.\n");

    printCentered("Tekan ENTER untuk kembali ke Main Menu......");
    cin.get();
    cin.ignore(1000, '\n');
}

// int main() {
//     howToPlay();
//     return 0;
// }