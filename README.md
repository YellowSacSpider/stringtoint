# stringtoint
## Opis działania algorytmu:

Od każdego znaku w stringu odjąć znak '0' nastepnie wartość scastować na inta i nastepnie obliczyć jednosci, dziesiatki, setki, tysieczne, milionowe   (...)  [jeśli takie istnieją] notacją wykładniczą ->
int(liczby[0] - '0') * 10^(wielkosc_stringa-1) i kazdą liczbe rozna od 0 w prawo od poczatku stringa zmniejszyć wykładnik o 1 i wykonac iteracje na indexie stringa -> int(liczby[1] - '0') * 10^(wielkosc_stringa - 2), liczby[2] * 10^(wielkosc_stringa - 3) i zsumować to wszystko liczby[0] * 10^(wielkosc_stringa - 1) +  liczby[1] * 10^(wielkosc_stringa- 2) + liczby[2] * 10^(wielkosc_stringa - 3) 
itd

Dla przykładu liczba - 1 700 000

zaczynamy od int(liczby[0] - '0') * 10^(wielkosc_stringa-1) czyli 1 * 10^6 ->
suma += 1 * 10^6
suma = 1 000 000

potem
int(liczby[1] - '0') * 10^(wielkosc_stringa-2) czyli 7 * 10^5 ->

suma += 7 * 10^5
suma = 1 700 000

potem mamy juz same 0 w stringu wiec wszyskto pomijamy i konczymy
