---
layout:       default
title:        Group Theory
---

I'd like to quickly recap some basic notions of group theory that are relevant to the design and implementation of the Owl core. 

As always, Wikipidea is invaluable resource:
* [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation)
* [group](https://en.wikipedia.org/wiki/Group_(mathematics))
* [subgroup](https://en.wikipedia.org/wiki/Subgroup_(mathematics))
* [coset](https://en.wikipedia.org/wiki/Coset)
* [quotient group](https://en.wikipedia.org/wiki/Quotient_group)

{:.defn} DEFINITION
: If $H$ is a subgroup of $G$, we say that elements $f,g ∈ G$ are *congruent modulo H*, written $\congruent{f}{g}{H}$, whenever $\inv{g}f ∈ H$.

1. Congruence modulo $H$ is an [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation) [(*proof*)](#congruence).
1. Elements are congruent if and only if they lie in the same [coset](https://en.wikipedia.org/wiki/Coset) of $H$.
1. The cosets of $H$ must therefore [partition](https://en.wikipedia.org/wiki/Partition_of_a_set) the elements of $G$ into disjoint subsets. 
1. The number of cosets of $H$ is called the [index](https://en.wikipedia.org/wiki/Index_of_a_subgroup) of $H$ in $G$, and is written 
$[G : H]$.
1. Each pair of cosets is in bijection with one another.
1. Thus $\abs{G} = [G : H] \abs{H}$, a result known as [Lagrange's Theorem](https://en.wikipedia.org/wiki/Lagrange%27s_theorem_(group_theory)). 

----

{:.proof} proof: Congruence is an equivalence relation <a id="congruence"></a> 

: We wish to show that, viewed as a binary relation on the elements of $G$, congruence is reflexive, symmetric, and transitive. But for any $f,g,k ∈ G$ observe that:

1. $e = \inv{f}f ∈ H$ since $H$ is a group, so $\congruent{f}{f}{H}$

1. if $\inv{f} g = h$ for some $h ∈ H$, then:

$$
\begin{align}
    & g = f h               \\
  ⇒ & g h^{-1} = f          \\
  ⇒ & g^{-1} f = h^{-1}    \\
  ⇒ & g^{-1} f ∈ H          \\
  ⇒ & \congruent{g}{f}{H}
\end{align}
$$
