#include <iostream>
#include <Windows.h>
using namespace std;

class piano
{
   // frequencies of the piano keys
public:
    const int A = 440;
    const int B = 493;
    const int C = 261;
    const int D = 294;
    const int E = 329;
    const int F = 349;
    const int G = 392;
    const int H = 455;
    const int I = 555;
    const int J = 666;
    const int K = 656;
    const int L = 766;
    const int M = 866;
    const int N = 586;
    const int O = 696;
    const int P = 996;
    const int Q = 1005;
    const int R = 654;
    const int S = 1200;
    const int T = 854;
    const int U = 987;
    const int V = 254;
    const int W = 999;
    const int X = 1200;
    const int Y = 1500;
    const int Z = 512;
    void sound();
};

void playSound(int frequency, int duration)
{
    Beep(frequency, duration);
}

void piano::sound()
{       cout << "*Note: You need any sound output device to listen the sound*";
        cout << "\n\nEnter a note (A-Z *in capitals only*) or 'q' to quit: ";
    while (true)
    {
        
        char note;
        cin >> note;

        if (note == 'q')
        {
            break;
        }

        switch (note)
        {
        case 'A':
            playSound(A, 500);
            break;
        case 'B':
            playSound(B, 500);
            break;
        case 'C':
            playSound(C, 500);
            break;
        case 'D':
            playSound(D, 500);
            break;
        case 'E':
            playSound(E, 500);
            break;
        case 'F':
            playSound(F, 500);
            break;
        case 'G':
            playSound(G, 500);
            break;

        case 'H':
            playSound(H, 500);
            break;
        case 'I':
            playSound(I, 500);
            break;
        case 'J':
            playSound(J, 500);
            break;
        case 'K':
            playSound(K, 500);
            break;
        case 'L':
            playSound(L, 500);
            break;
        case 'M':
            playSound(M, 500);
            break;
        case 'N':
            playSound(N, 500);
            break;
        case 'O':
            playSound(O, 500);
            break;
        case 'P':
            playSound(P, 500);
            break;
        case 'Q':
            playSound(Q, 500);
            break;
        case 'R':
            playSound(R, 500);
            break;
        case 'S':
            playSound(S, 500);
            break;
        case 'T':
            playSound(T, 500);
            break;
        case 'U':
            playSound(U, 500);
            break;
        case 'V':
            playSound(V, 500);
            break;
        case 'W':
            playSound(W, 500);
            break;
        case 'X':
            playSound(X, 500);
            break;
        case 'Y':
            playSound(Y, 500);
            break;
        case 'Z':
            playSound(Z, 500);
            break;

        default:
            cout << "Invalid note! Try again." << endl;
            break;
        }
    }
}
int main()
{
    int X;
    piano p1;
    cout << "\n\n\t\t*****************************************************\n";
    cout << "\t\t\t\t\tWelcome";
    cout << "\n\t\t*****************************************************\n\n\n";
    p1.sound();
    system("CLS");
    cout << "\n\n\n\n\n\t\t\t\t*********Thank You For Playing*********\n\n\n\n\n";

    return 0;
}