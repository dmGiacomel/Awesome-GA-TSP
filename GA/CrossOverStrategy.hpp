#ifndef CROSSOVER_STRATEGY_HPP 
#define CROSSOVER_STRATEGY_HPP

#include <vector>

template<typename Genotype>
class CrossoverStrategy {
public:
    virtual std::vector<const Individual&> crossover(std::vector<const Individual&>) = 0;
};

#endif