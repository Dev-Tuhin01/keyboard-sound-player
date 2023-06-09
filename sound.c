#include <STDIO.H>
#include<CONIO.H>
#include <WINDOWS.H>



int main(int argc, char const *argv[])
{
    int delay = 1000 ;
    float octave = 4;
    float keynote[] = {32.7,    //sa0
                                34.6,   //re_1
                                36.7,   //re2
                                38.8,   //ga_3
                                41.2,   //ga4
                                43.6,   //ma5
                                46.2,   //ma#6
                                48.9,   //pa7
                                51.9,   //dha_8
                                55.0,   //dha9
                                58.2,   //ni_10
                                61.7};  //ni11
    system("cls");
    printf(" _______________________________________________________________\n|| | | ||| | ||| | | ||| | ||| | | ||| | ||| | | ||| | ||| | | ||\n||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_|||_|_|||_|_|_||\n| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |\n|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|\n");

    printf("How to play this piano?\n");
    printf("press 1 - 7 for sa re ga ma pa dha ni respectevly. \n");
    printf("press shift + 2 for komol re. \npress shift + 3 for komol ga. \npress shift + 4 for kori ma. \npress shift + 6 for komol dha. \npress shift + 7 for komol ni. \n");
    printf("press any other key to exit. \n");

    printf("Piano: \n");

    while (1) {
        char op;
        op = getch();

        switch (op)
        {
        case '1':
            Beep(keynote[0] * octave, delay);
            break;
        case '2':
            Beep(keynote[2] * octave, delay);
            break;
        case '3':
            Beep(keynote[4] * octave, delay);
            break;
        case '4':
            Beep(keynote[5] * octave, delay);
            break;
        case '5':
            Beep(keynote[7] * octave, delay);
            break;
        case '6':
            Beep(keynote[9] * octave, delay);
            break;
        case '7':
            Beep(keynote[11] * octave, delay);
            break;
        case '8':
            Beep(keynote[0] * octave * 2, delay);
            break;
        case '@':
            Beep(keynote[1] * octave, delay);
            break;
        case '#':
            Beep(keynote[3] * octave, delay);
            break;
        case '$':
            Beep(keynote[6] * octave, delay);
            break;
        case '^':
            Beep(keynote[8] * octave, delay);
            break;
        case '&':
            Beep(keynote[10] * octave, delay);
            break;
        default:
            goto ed;
            break;
        }
    }
    
    ed:
    printf("session end");
    return 0;
}
