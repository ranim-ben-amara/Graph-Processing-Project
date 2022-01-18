//
// Created by user on 7‏/1‏/2022.
//
#include <chrono>
#include <iostream>
#include <fstream>
using namespace std;
using namespace std::chrono;


void calculate_total_time ( std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long,
                             std::ratio<1, 1000000000>>> start)
{
    auto stop = std::chrono::system_clock::now();
    using Fpseconds =std::chrono::duration<float, std::chrono::seconds::period>;
    std::chrono::duration<double> seconds = stop-start;
    cout << "total creation time is "<<seconds.count()<<endl;
    cout << "i'm here";


}

void calculate_peak_RAM ()
{
    FILE *fp;
    unsigned long peaksize = 0;
    char buf[1024];
    fp = fopen("/proc/self/status", "r");

    while (fgets(buf, sizeof(buf)-1, fp) != NULL) {
        if (sscanf(buf, "VmPeak:%lu", &peaksize) > 0) {
            break;
        }
    }
    fclose(fp);
    cout<< "peak ram usage:" <<peaksize/1024 <<endl;


}

