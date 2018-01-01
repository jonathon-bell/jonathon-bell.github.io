---
layout:       default
title:        congruence
---







 







<lemma markdown="block"><span class="lede"><span>
Congruence modulo $H$ is an [equivalence relation](https://en.wikipedia.org/wiki/ Equivalence_relation ).
</lemma>

<proof markdown="block"><span class="lede"><span>
Observe that for any elements $f, g, k ∈ G$:

1. $f^{-1} f = e ∈ H$, since the group $H$ must contain the identity element, and thus $f ≡ f \text{ mod } H$.

2. if $g^{-1} f = h$ for some $h ∈ H$, then $f g^{-1} = h^{-1} ∈ H$, since the group $H$ contains the inverse of each of its elements, and thus $g ≡ f \text{ mod } H$.

3. if $g^{-1} f = h_1$ and $k^{-1} g = h_2$ for some $h_1, h_2 ∈ H$, then $(k^{-1}g)(g^{-1} f) = k^{-1} f = h_1 h_2 ∈ H$, since the group $H$ contains the product of every pair of its elements, and thus $f ≡ k \text{ mod } H$.

Thus, viewed as a binary relation on the elements of $G$, congruence is (a) reflexive, (b) symmetric, and (c) transitive; which is to say it is an *equivalence*. <span class="qed"></span>
</proof>
