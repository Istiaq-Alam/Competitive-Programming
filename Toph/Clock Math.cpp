#include<bits/stdc++.h>

using namespace std;

int main()
{
    double H, M, cell, angle_1, angle_2;

    cin >> H >> M ;

    angle_1 = (H*5.0) + (M/12.0);
    angle_1 = angle_1 * 6.00;

    angle_2 = (M*6.00);

    cell = fabs(angle_1 - angle_2);

    cell = min(cell, (360-cell));

    printf("%0.4lf\n", cell);

    return 0;
}
