#include <bits/stdc++.h>
using namespace std;

class FCFS
{
public:
    float a[3] = {0, 6, 4};
    float b[3] = {7, 5, 3};
    // string process[3] = {"p1", "p2", "p3"};
    float waiting_time[3], turnAround_time[3], avg_wt = 0, avg_tt = 0, wt = 0, tt = 0;
    void wtt()
    {

        for (int i = 0; i < 3; i++)
        {
            waiting_time[i] = b[i] - a[i]; // burst time - arrival time == waiting time
            wt += waiting_time[i];
        }
        cout << "The total waiting time is " << wt << endl;
    }
    void ttt()
    {

        for (int j = 0; j < 3; j++)
        {
            turnAround_time[j] = b[j] + waiting_time[j]; // burst time + waiting time == turnaround time
            tt += turnAround_time[j];
        }
        cout << "The total turnaround time is " << tt << endl;
    }
    void avgwtt()
    {
        cout << "The  average waiting time is " << wt / 3 << endl;
    }
    void avgttt()
    {
        cout << "The  average turn around time is " << tt / 3 << endl;
    }
};

int main()
{
    FCFS f;
    f.wtt();
    f.ttt();
    f.avgttt();
    f.avgwtt();

    return 0;
}