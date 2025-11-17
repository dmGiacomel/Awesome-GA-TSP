#ifndef INDIVIDUAL_HPP
#define INDIVIDUAL_HPP

template <typename Genotype>
class Individual {
public: 
    Genotype genotype;
    double fitness = 0.0;

    Individual() = default;
    Individual(const Genotype& g) : genotype(g) {}
};
#endif