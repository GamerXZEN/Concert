#include "Class.h"
//Use class name 'instrument' (not the class 'guide' for pointer.)
//Or just look at Class.h to find class name (the name is 'instrument')
//Find the child classes names in Class.h
class guide
{
public:
    virtual void sound() = 0;
};

int main()
{
    instrument* i1 = new trumpet;
    instrument* i2 = new piano;
    instrument* i3 = new cello;
    instrument* i4 = new viola;
    instrument* i5 = new violin;
    instrument* i6 = new flute;
    instrument* i7 = new drums;
    instrument* i8 = new tuba;
    instrument* i9 = new double_bass;
    instrument* concert[] = { i1, i1, i1, i1, i1, i1, i1, i1, i1, i1, i1, i1, i1, i1, i2, i3, i3, i3, i3, i3, i3, i3, i3, i3, i3, i3, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i4, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i5, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i6, i7, i8, i8, i8, i8, i8, i8, i8, i8, i9, i9, i9, i9, i9 };
    char input;
    int size = sizeof(concert) / sizeof(concert[0]);
    cout << "Enter Y (yes) or N (no): ";
    cin >> input;
    if (input == 'Y' || input == 'y')
        for (int i = 0; i < size; i++)
            concert[i]->sound();
    else if (input == 'N' || input == 'n')
        cout << "Ok, no problem." << endl;
    else
        cout << "Invalid input." << endl;
    return 0;
}