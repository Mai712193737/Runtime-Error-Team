

/*After securing a fair re-election and extending their tenure by six years, the Berland government decided to implement drastic measures to alleviate the country's debt. One such measure involves a significant change in the calculation of train ticket prices. The new ticket system operates as follows:

Each train station is assigned a number, starting with the first station designated as number 1
. The second station is assigned number 2
, the third station number 3
, and so forth. To enter station x
, passengers must pay x
 coins. The train makes stops every z
 stations, and for each station it stops at, passengers must pay an amount of coins equal to the station's number.

Your objective is to reach station y
 or the first station the train stops at before reaching station y
 if it's not possible to reach y
.

The payment calculation is as follows:

you pay (x,x+z,x+2⋅z,x+3⋅z,…
) until you reach station y
 or the first station after (y−z
).

Calculate the total amount of coins you will need to pay for your journey under this new ticket system.

Input
A single line containing 3 integers x
, y
, and z
 (1≤x,y,z≤2⋅109
)

Output
A single integer containing the total price of a ticket*/