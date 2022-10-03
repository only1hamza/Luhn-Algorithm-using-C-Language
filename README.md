# Luhn Algorithm using C Language

<h1><b>Whats is Luhn algorithm ?</b></h1>

The Luhn algorithm or Luhn formula, also known as the "modulus 10" or "mod 10" algorithm, named after its creator, IBM scientist Hans Peter Luhn, is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers, IMEI numbers, National Provider Identifier numbers in the United States, Canadian Social Insurance Numbers, Israeli ID Numbers, South African ID Numbers, Swedish National identification numbers, Swedish Corporate Identity Numbers (OrgNr), Greek Social Security Numbers (ΑΜΚΑ), SIM card numbers and survey codes appearing on McDonald's, Taco Bell, and Tractor Supply Co. receipts. It is described in U.S. Patent No. 2,950,048, granted on August 23, 1960.[1]

The algorithm is in the public domain and is in wide use today. It is specified in ISO/IEC 7812-1.[2] It is not intended to be a cryptographically secure hash function; it was designed to protect against accidental errors, not malicious attacks. Most credit cards and many government identification numbers use the algorithm as a simple method of distinguishing valid numbers from mistyped or otherwise incorrect numbers.
Wikipedia

<h1><b>Luhn algorithm for Credit Card?</b></h1>

A credit (or debit) card, of course, is a plastic card with which you can pay for goods and services. Printed on that card is a number that’s also stored in a database somewhere, so that when your card is used to buy something, the creditor knows whom to bill. There are a lot of people with credit cards in this world, so those numbers are pretty long: American Express uses 15-digit numbers, MasterCard uses 16-digit numbers, and Visa uses 13- and 16-digit numbers. And those are decimal numbers (0 through 9), not binary, which means, for instance, that American Express could print as many as 10^15 = 1,000,000,000,000,000 unique cards! (That’s, um, a quadrillion.)

Actually, that’s a bit of an exaggeration, because credit card numbers actually have some structure to them. All American Express numbers start with 34 or 37; most MasterCard numbers start with 51, 52, 53, 54, or 55 (they also have some other potential starting numbers which we won’t concern ourselves with for this problem); and all Visa numbers start with 4. But credit card numbers also have a “checksum” built into them, a mathematical relationship between at least one number and others. That checksum enables computers (or humans who like math) to detect typos (e.g., transpositions), if not fraudulent numbers, without having to query a database, which can be slow. Of course, a dishonest mathematician could certainly craft a fake number that nonetheless respects the mathematical constraint, so a database lookup is still necessary for more rigorous checks.
Harverd Cs50

<h1><b>How can use the code ?</b></h1>

Just run it in your compailer and put the number of the card & will return you the company card's name (VISA,MasterCard,AMEX).
