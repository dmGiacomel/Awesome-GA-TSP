#ifndef POPULATION_HPP 
#define POPULATION_HPP
#include "Individual.hpp"
#include <cstddef>
#include <vector>

template <typename Genotype>
class Population {
public: 
    std::vector<Individual<Genotype>> individuals;
    Population (size_t size);
};

#endif