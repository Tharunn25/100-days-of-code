// day61 out of 100

// elab problem

#include <bits/stdc++.h>
using namespace std;
#define tt                \
    string vehicle, temp; \
    int ramp1;            \
    float rate1, width, speed1, time1, distance;
#define mm cin >> vehicle >> ramp1 >> rate1 >> width;

int main()
{
    tt
        mm
            time1 = sqrt(2.0 * ramp1 / rate1);
    speed1 = time1 * rate1;
    distance = (speed1 * speed1) / 9.805;
    if (distance < width - 5)
    {
        temp = "SPLASH!";
    }
    else if (distance >= width - 5 && distance <= width)
        temp = "BARELY MADE IT!";
    else
        temp = "LIKE A BOSS!";
    cout << vehicle << " will reach a speed of " << setprecision(2) << fixed << speed1 << " m/s on a " << ramp1 << " ramp crossing " << setprecision(1) << fixed << distance << " of " << width << " meters, " << temp;

    return 0;
}