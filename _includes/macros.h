//**************************** Copyright © Jonathon Bell. All rights reserved.
//*
//*
//*  Version : $Header:$
//*
//*
//*  Purpose : 
//*
//*
//*  Comments: This file uses a tab size of 2 spaces.
//*                                                                     0-0
//*                                                                   (| v |)
//**********************************************************************w*w***

#define HTTP (link,url,title) \
[link](http:!//url title)

#define HTTPS(link,url,title) \
[link](https:!//url title)

#define WIKI(link,page,title) \
[link](https:!//en.wikipedia.org/wiki/page title)

#define BEG(type,other) \
<type markdown="block"><span class="lede"><span>

#define END(type) \
</type>

#define PROOF(page) \
[<span class="proof-link">proof</span>](/pages/proofs/page "Proof 'page'")
 
#define QED(type) \
<span class="qed"></span>

//****************************************************************************

#define SET(body) \
\\{ body \\}

#define INV(a) \
a^{-1}

#define MOD(a,b,modulus) \
a ≡ b \text{ mod } modulus

//****************************************************************************

