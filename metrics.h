//
// Created by user on 7‏/1‏/2022.
//
#ifndef GRAPH_PROJECT_METRICS_H
#define GRAPH_PROJECT_METRICS_H

#endif //GRAPH_PROJECT_METRICS_H

#include <chrono>
using namespace std::chrono;

void add_result_to_file (double result, string f);

void calculate_total_time ( std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long,
        std::ratio<1, 1000000000>>> start);//
// Created by user on 7‏/1‏/2022.
//
#ifndef GRAPH_PROJECT_METRICS_H
#define GRAPH_PROJECT_METRICS_H

#endif //GRAPH_PROJECT_METRICS_H

#include <chrono>
using namespace std::chrono;

void add_result_to_file (double result, string f);

void calculate_total_time ( std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long,
        std::ratio<1, 1000000000>>> start);


void calculate_peak_RAM ();




void calculate_peak_RAM ();

