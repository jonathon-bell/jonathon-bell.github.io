---
layout:       default
title:        congruence
---

<lemma markdown="block">
<span class="lede"></span>
Congruence modulo $H$ is an [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation).
</lemma>


<proof markdown="block">
<span class="lede"></span>
Observe that for any elements $f, g, k ∈ G$:
1. $f^{-1} f = e ∈ H$, since the group $H$ must contain the identity element, and so $\congruent{f}{f}{H}$.
2. if $f^{-1} g = h$ for some $h ∈ H$, then $g f^{-1} = h^{-1} ∈ H$, since the group $H$ contains the inverse of each of its elements, and so $\congruent{g}{f}{H}$.
3. if $f^{-1} g = h_1$ and $g^{-1} k = h_2$ for some $h_1, h_2 ∈ H$, then $(f^{-1}g)(g^{-1} k) = f^{-1} k = h_1 h_2 ∈ H$, since the group $H$ contains the product of every pair of its elements, and so $\congruent{f}{k}{H}$.

Thus, viewed as a binary relation on the elements of $G$, congruence is (a) reflexive, (b) symmetric, and (c) transitive; which is to say it is an *equivalence*.
<span class="qed"></span>
</proof>