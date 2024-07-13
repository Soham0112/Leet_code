#include <iostream>
#include <vector>

using namespace std;

int tower_hanoi(int x)
{
    switch (x)
    {
    case 1:
        return 1;

    default:
        return 2 * tower_hanoi(x - 1) + 1;
    }
}
int main()
{
    int x;

    cout << "enter the number of disks" << endl;
    cin >> x;

    int y = tower_hanoi(x);
    cout << "the number of steps is" << y << endl;
    return 0;
}
