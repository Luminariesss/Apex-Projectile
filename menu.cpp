#include <iostream>
#include <conio.h>
#include <string>
#include "demo2.cpp"
#include "guide.cpp"
#include "backgroundstory.cpp"

using namespace std;

// ANSI Escape Codes — pengganti SetConsoleTextAttribute
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define ORANGE  "\033[38;5;208m"
#define YELLOW  "\033[33m"
#define WHITE   "\033[37m"
#define GRAY    "\033[90m"

void tampilMenu(int pilihan);
void startGame();
void petunjuk();
void tentang();

void hideKursor() { cout << "\033[?25l" << flush; }
void showKursor() { cout << "\033[?25h" << flush; }

// Untuk redraw menu per-frame: pindah ke (1,1) + hapus dari kursor ke bawah
void goHome()      { cout << "\033[H\033[J"; }
// Untuk pindah ke sub-menu yang berbeda: hapus total + pindah ke (1,1)
void clearScreen()  { cout << "\033[2J\033[H"; }

void tampilMenu(int pilihan)
{
    hideKursor();
    goHome();

    string menu[4] = {
        "START",
        "HOW TO PLAY",
        "BACKGROUND STORY",
        "EXIT"
    };

    cout << "\to====================================================================================================o\n" << endl;
    cout << RED;
    cout << "\t           _    ____  _______  __    ____  ____   ___      _ _____ ____ _____ ___ _     _____\n";
    cout << "\t          / \\  |  _ \\| ____\\ \\/ /   |  _ \\|  _ \\ / _ \\    | | ____/ ___|_   _|_ _| |   | ____|\n";
    cout << "\t         / _ \\ | |_) |  _|  \\  /    | |_) | |_) | | | |   | |  _|| |     | |  | || |   |  _|\n";
    cout << "\t        / ___ \\|  __/| |___ /  \\    |  __/|  _ <| |_| |___| | |__| |___  | |  | || |___| |__\n";
    cout << "\t       /_/   \\_\\_|   |_____/_/\\_\\   |_|   |_| \\_\\\\___/|_____|_____\\\\____| |_| |___|_____|____|\n" << endl;
    cout << RESET;
    cout << "\to====================================================================================================o\n";
    cout << "\n\n";

    for (int i = 0; i < 4; i++)
    {
        if (i == pilihan)
            cout << ORANGE;
        else
            cout << WHITE;

        cout << "\t\t\t\t\t\t+----------------------+\n";

        string isi = (i == pilihan) ? "> " + menu[i] : "  " + menu[i];

        cout << "\t\t\t\t\t\t| " << isi;

        int sisa = 20 - (int)isi.length();
        for (int j = 0; j < sisa; j++)
            cout << " ";

        cout << " |\n";
        cout << "\t\t\t\t\t\t+----------------------+\n\n";
    }

    cout << GRAY;
    cout << "\n";
    cout << "\t\t\t\t\tGunakan PANAH ATAS/BAWAH untuk memilih\n";
    cout << "\t\t\t\t\t     Tekan ENTER untuk melanjutkan\n";
    cout << RESET;

    showKursor();
}

void startGame()
{
    clearScreen();

    cout << "================ START GAME ================\n\n";
    cout << "Game dimulai...\n\n";

    // cout << "Tekan tombol apa saja untuk kembali...";

    srand(time(0));

    GameContext ctx;
    ctx.tower = new Obstacle[GameConfig::max_obstacles];

    generateLevel(ctx);
    ctx.targetFallen = (ctx.targetY < ctx.lantaiMeter);

    cout << "\033[2J\033[?25l";

    for (int attempt = 1; attempt <= ctx.config.max_attempts; attempt++) {
        ctx.gameWon = runRoundSimulation(attempt, ctx);
        if (ctx.gameWon)
        break;
    }

    displayGameResult(ctx);

    delete[] ctx.tower;
    cout << "\033[?25h";

    getch();
}

void petunjuk()
{
    clearScreen();

    cout << "================ HOW TO PLAY ================\n\n";

    howToPlay();

    // cout << "1. Gunakan tombol PANAH ATAS dan PANAH BAWAH........\n";
    // cout << "Tekan tombol apa saja untuk kembali...";
    getch();
}

void tentang()
{
    clearScreen();

    cout << "============= BACKGROUND STORY =============\n\n";
    BGStory();
    getch();
}

// int main()
// {
   
//     return 0;
// }