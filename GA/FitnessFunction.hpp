#ifndef FITNESS_FUNCTION_HPP
#define FITNESS_FUNCTION_HPP
#include "Individual.hpp"

template <typename Genotype>
class FitnessFunction{
public: 
    virtual double evaluate(const Individual<Genotype>& ind) = 0;
    virtual ~FitnessFunction() = default;
};

#endif