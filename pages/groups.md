---
layout:   default
title:    Group Theory
---







 






# Notes on Elementary Group Theory

I'd like to quickly recap some basic notions of group theory that are relevant to the design and implementation of the Owl core. 

As always, Wikipedia is an invaluable resource:
-   [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation )
-   [group               ](https://en.wikipedia.org/wiki/Group_(mathematics) )
-   [subgroup            ](https://en.wikipedia.org/wiki/Subgroup_(mathematics) )
-   [coset               ](https://en.wikipedia.org/wiki/Coset )
-   [quotient group      ](https://en.wikipedia.org/wiki/Quotient_group )

  <definition markdown="block"><span class="lede"><span>
If $H$ is a subgroup of $G$, we say that the elements $f, g ∈ G$ are *congruent modulo* $H$, written $  f ≡ g \text{ mod } H$, whenever $g^{-1} f ∈ H$.
  </definition>

  <lemma markdown="block"><span class="lede"><span>
Congruence modulo $H$ is an   [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation ).
  [<span class="proof-link">proof</span>](/pages/proofs/001-congruence "Proof '001-congruence'")
  </lemma>

  <definition markdown="block"><span class="lede"><span>
If $H$ is a subgroup of $G$ and $g$ is an element of $G$, then
 
- $gH =   \\{ gh : h ∈ H \\}$ is the *left coset* of $H ∈ G$ with respect to $g$, and
- $Hg =   \\{ hg : h ∈ H \\}$ is the *right coset* of $H ∈ G$ with respect to $g$.
  </definition>

Only when $H$ is normal will the set of right cosets and the set of left cosets of $H$ coincide, which is one definition of normality of a subgroup. 

  <lemma markdown="block"><span class="lede"><span>
Elements are congruent if and only if they lie in the same   [coset](https://en.wikipedia.org/wiki/Coset ) of $H$. 
  [<span class="proof-link">proof</span>](/pages/proofs/cosets "Proof 'cosets'")
  </lemma> 

The cosets of $H$ must therefore   [partition](https://en.wikipedia.org/wiki/Partition_of_a_set ) the elements of $G$ into disjoint subsets. 

  <definition markdown="block"><span class="lede"><span>
The number of cosets of $H$ is called the   [index](https://en.wikipedia.org/wiki/Index_of_a_subgroup ) of $H$ in $G$, and is written $[G : H]$.
  </definition>

  <lemma markdown="block"><span class="lede"><span>
Each pair of cosets is in bijection with one another. 
  [<span class="proof-link">proof</span>](/pages/proofs/coset-bijection "Proof 'coset-bijection'")
  </lemma>

  <theorem markdown="block"><span class="lede"><span>
Thus $\abs{G} = [G : H] \abs{H}$, a result known as   [Lagrange's Theorem](https://en.wikipedia.org/wiki/Lagrange%27s_theorem_(group_theory) ). 
  </theorem>
