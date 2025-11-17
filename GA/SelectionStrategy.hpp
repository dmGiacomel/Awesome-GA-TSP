#ifndef SELECTION_STRATEGY_HPP
#define SELECTION_STRATEGY_HPP

template <typename Genotype>
class SelectionStrategy{
    virtual size_t select(const Population<Genotype>& pop) = 0;
};

#endif