#include <iostream>
#include "menu.cpp"

int main() {
     int pilihan = 0;
    char tombol;

    cout << "\033[?1049h"; // masuk alternate screen buffer, hilangkan scrollback
    clearScreen();

    while (true)
    {
        tampilMenu(pilihan);

        tombol = getch();

        if (tombol == -32 || tombol == 0)
        {
            tombol = getch();

            if (tombol == 72) // Panah Atas
            {
                pilihan--;
                if (pilihan < 0)
                    pilihan = 3;
            }
            else if (tombol == 80) // Panah Bawah
            {
                pilihan++;
                if (pilihan > 3)
                    pilihan = 0;
            }
        }
        else if (tombol == 13) // Enter
        {
            switch (pilihan)
            {
                case 0:
                    startGame();
                    break;

                case 1:
                    petunjuk();
                    break;

                case 2:
                    tentang();
                    break;

                case 3:
                    clearScreen();
                    cout << YELLOW;
                    cout << "\n\n";
                    cout << "             Terima kasih telah memainkan APEX PROJECTILE!\n\n";
                    cout << RESET;

                    cout << "\033[?1049l"; // keluar alternate screen buffer
                    return 0;
            }
        }
    }

    cout << "\033[?1049l";
}