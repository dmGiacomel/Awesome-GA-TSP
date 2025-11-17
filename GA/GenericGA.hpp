#ifndef GENERIC_GA_HPP
#define GENERIC_GA_HPP
#include <cstddef>
#include "Parameters.hpp"

template<typename Genotype>
class GenericGA {
public:
    GAParameters params;

    FitnessFunction<Genotype>* fitness;
    SelectionStrategy<Genotype>* selection;
    CrossoverStrategy<Genotype>* crossover;
    MutationStrategy<Genotype>* mutation;

    Population<Genotype> population;
    std::mt19937 rng;

    GenericGA(GAParameters p,
              FitnessFunction<Genotype>* fit,
              SelectionStrategy<Genotype>* sel,
              CrossoverStrategy<Genotype>* cx,
              MutationStrategy<Genotype>* mut);

    void initialize();
    void evaluate_population();
    void evolve();
};

#endif