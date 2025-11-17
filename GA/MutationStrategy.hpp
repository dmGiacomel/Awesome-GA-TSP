#ifndef MUTATION_STRATEGY_HPP
#define MUTATION_STRATEGY_HPP

template <typename Genotype>
class MutationStrategy {
public:
    virtual void mutate(Individual<Genotype>& ind) = 0;
    virtual ~MutationStrategy() = default;
};
#endif