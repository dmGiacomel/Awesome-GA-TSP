#ifndef PARAMETERS_HPP
#define PARAMETERS_HPP
#include <cstddef>

class GAParameters {
public:
    size_t population_size;
    double mutation_probability;
    double crossover_probability;
    double elitism;
    size_t max_generations;
    unsigned random_seed;
};

#endif