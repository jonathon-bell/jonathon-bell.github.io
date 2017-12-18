---
layout:       default
title:        Group Theory Proofs
---

<a id='congruence'></a>

**Lemma.**        Congruence modulo $H$ is an [equivalence relation](https://en.wikipedia.org/wiki/Equivalence_relation).

*Proof.*          Observe that for any elements $f,g,k ∈ G$:

- $f^{-1} f = e ∈ H$ since $H$ is a group, thus $\congruent{f}{f}{H}$.{:list-style-type = "none"}

- if $f^{-1} g = h$ for some $h ∈ H$, then $g f^{-1} = h^{-1} ∈ H$, thus $\congruent{g}{f}{H}$.

- if $f^{-1} g = h_1$ and $g^{-1} k = h_2$ for some $h_1, h_2 ∈ H$, then ($f^{-1}g)(g^{-1} k) = f^{-1} (g g^{-1}) k = f^{-1} k = h_1 h_2 ∈ H$, thus $\congruent{f}{k}{H}$.

Thus, viewed as a binary relation on the elements of $G$, congruence is reflexive, symmetric, and transitive; in other words, an *equivalence relation*. ▢
