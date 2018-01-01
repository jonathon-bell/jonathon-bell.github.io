---
layout:       default
title:        congruence
---

#include  "macros.h"

BEG(lemma)
Congruence modulo $H$ is an WIKI(equivalence relation, Equivalence_relation).
END(lemma)

BEG(proof)
Observe that for any elements $f, g, k ∈ G$:

1. $INV(f) f = e ∈ H$, since the group $H$ must contain the identity element, and thus $MOD(f,f,H)$.

2. if $INV(g) f = h$ for some $h ∈ H$, then $f INV(g) = INV(h) ∈ H$, since the group $H$ contains the inverse of each of its elements, and thus $MOD(g,f,H)$.

3. if $INV(g) f = h_1$ and $INV(k) g = h_2$ for some $h_1, h_2 ∈ H$, then $(INV(k)g)(INV(g) f) = INV(k) f = h_2 h_1 ∈ H$, since the group $H$ contains the product of every pair of its elements, and thus $MOD(f,k,H)$.

Thus, viewed as a binary relation on the elements of $G$, congruence is (a) reflexive, (b) symmetric, and (c) transitive; which is to say it is an *equivalence*. QED
END(proof)
