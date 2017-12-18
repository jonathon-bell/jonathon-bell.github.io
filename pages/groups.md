---
layout:       default
title:        Group Theory
---

# Notes on Elementary Group Theory
 
I'd like to quickly recap some basic notions of group theory that are relevant to the design and implementation of the Owl core. 

As always, Wikipidea is an invaluable resource:
- [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation)
- [group](https://en.wikipedia.org/wiki/Group_(mathematics))
- [subgroup](https://en.wikipedia.org/wiki/Subgroup_(mathematics))
- [coset](https://en.wikipedia.org/wiki/Coset)
- [quotient group](https://en.wikipedia.org/wiki/Quotient_group)

**Definition.**   If $H$ is a subgroup of $G$, we say that the elements $f, g ∈ G$ are *congruent modulo H*, written $\congruent{f}{g}{H}$, whenever $g^{-1} f ∈ H$.   

Congruence modulo $H$ is an [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation). 
[*proof*](/pages/proofs/groups#congruence)

**Definition.**   If $H$ is a subgroup of $G$ and $g$ is an element of $G$, then
<div class="nobullet"></div>
- $gH = {gh : h ∈ H}$ is the *left coset* of $H ∈ G$ with respect to g, and
- $Hg = {hg : h ∈ H}$ is the *right coset* of $H ∈ G$ with respect to g.

Only when $H$ is normal will the set of right cosets and the set of left cosets of $H$ coincide, which is one definition of normality of a subgroup. 

Elements are congruent if and only if they lie in the same [coset](https://en.wikipedia.org/wiki/Coset) of $H$.
[*proof*](/pages/proofs/groups#cosets)

The cosets of $H$ must therefore [partition](https://en.wikipedia.org/wiki/Partition_of_a_set) the elements of $G$ into disjoint subsets. 

The number of cosets of $H$ is called the [index](https://en.wikipedia.org/wiki/Index_of_a_subgroup) of $H$ in $G$, and is written $[G : H]$.

Each pair of cosets is in bijection with one another.
[*proof*](/pages/proofs/groups#coset-bijection)

Thus $\abs{G} = [G : H] \abs{H}$, a result known as [Lagrange's Theorem](https://en.wikipedia.org/wiki/Lagrange%27s_theorem_(group_theory)). 
