---
layout:   default
title:    Group Theory
---

# include  "macros.h"

# Notes on Elementary Group Theory

I'd like to quickly recap some basic notions of group theory that are relevant to the design and implementation of the Owl core. 

As always, Wikipedia is an invaluable resource:
- WIKI(equivalence relation,Equivalence_relation)
- WIKI(group               ,Group_(mathematics))
- WIKI(subgroup            ,Subgroup_(mathematics))
- WIKI(coset               ,Coset)
- WIKI(quotient group      ,Quotient_group)

BEG(definition)
If $H$ is a subgroup of $G$, we say that the elements $f, g ∈ G$ are *congruent modulo* $H$, written $MOD(f,g,H)$, whenever $g^{-1} f ∈ H$.
END(definition)

BEG(lemma)
Congruence modulo $H$ is an WIKI(equivalence relation,Equivalence_relation).
PROOF(001-congruence,"proof of lemma")
END(lemma)

BEG(definition)
If $H$ is a subgroup of $G$ and $g$ is an element of $G$, then
 
- $gH = SET(gh : h ∈ H)$ is the *left coset* of $H ∈ G$ with respect to $g$, and
- $Hg = SET(hg : h ∈ H)$ is the *right coset* of $H ∈ G$ with respect to $g$.
END(definition)

Only when $H$ is normal will the set of right cosets and the set of left cosets of $H$ coincide, which is one definition of normality of a subgroup. 

BEG(lemma)
Elements are congruent if and only if they lie in the same WIKI(coset,Coset) of $H$. 
PROOF(cosets)
END(lemma) 

The cosets of $H$ must therefore WIKI(partition,Partition_of_a_set) the elements of $G$ into disjoint subsets. 

BEG(definition)
The number of cosets of $H$ is called the WIKI(index,Index_of_a_subgroup) of $H$ in $G$, and is written $[G : H]$.
END(definition)

BEG(lemma)
Each pair of cosets is in bijection with one another. 
PROOF(coset-bijection)
END(lemma)

BEG(theorem)
Thus $\abs{G} = [G : H] \abs{H}$, a result known as WIKI(Lagrange's Theorem,Lagrange%27s_theorem_(group_theory)). 
END(theorem)
