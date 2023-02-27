/*
Splender is a depressed robot who heals his depression by partying and drinking alcohol. To save him from a life of
debauchery, his creators have reprogrammed the control system with a more rudimentary intelligence.
Unfortunately, he has lost his sense of humor and his former friends have now rejected him.
Splender is now all alone and is wandering through the streets of Futurama with the intention of ending it all in a
suicide booth.
To intercept him and save him from almost certain death, the authorities have given you a mission: write a program
that will make it possible to foresee the path that Splender follows. To do so, you are given the logic for the new
intelligence with which Splender has been programmed as well as a map of the city.
Rules
The 9 rules of the new Splender system:
1) Splender starts from the place indicated by the @ symbol on the map and heads SOUTH.
2) Splender finishes his journey and dies when he reaches the suicide booth marked $.
3) Obstacles that Splender may encounter are represented by # or X.
4) When Splender encounters an obstacle, he changes direction using the following priorities: SOUTH, EAST,
NORTH, and WEST. So he first tries to go SOUTH, if he cannot, then he will go EAST, if he still cannot, then he will go
NORTH, and finally, if he still cannot, then he will go WEST.
5) Along the way, Splender may come across path modifiers that will instantaneously make him change direction.
The S modifier will make him turn SOUTH from then on, E, to the EAST, N to the NORTH, and W to the WEST.
6) The circuit inverters (I on map) produce a magnetic field which will reverse the direction priorities that Splender
should choose when encountering an obstacle. Priorities will become WEST, NORTH, EAST, SOUTH. If Splender
returns to an inverter I, then priorities are reset to their original state (SOUTH, EAST, NORTH, WEST).
7) Splender can also find a few beers along his path (B on the map) that will give him strength and put him in
“Breaker” mode. Breaker mode allows Splender to destroy and automatically pass through the obstacles
represented by the character X (only the obstacles X). When an obstacle is destroyed, it remains so permanently and
Splender maintains his course of direction. If Splender is in Breaker mode and passes over a beer again, then he
immediately goes out of Breaker mode. The beers remain in place after Splender has passed.
8) 2 teleporters T may be present in the city. If Splender passes over a teleporter, then he is automatically
teleported to the position of the other teleporter and he retains his direction and Breaker mode properties.
9) Finally, the space characters are blank areas on the map (no special behavior other than those specified above).
Your program must display the sequence of moves taken by Splender according to the map provided as input.
The map is divided into lines (L) and columns (C). The contours of the map are always unbreakable # obstacles. The
map always has a starting point @ and a suicide booth $.
Let the map below:

######
#@E $#
# N  #
#X   #
######


In this example, Splender will follow this sequence of moves:
SOUTH (initial direction)
EAST (because of the obstacle X)
NORTH (change of direction caused by N)
EAST (change of direction caused by E)
EAST (current direction, until end point $)

10 10
##########
#        #
# S    W #
#        #
# $      #
#        #
#@       #
#        #
#E     N #
##########

SOUTH
SOUTH
EAST
EAST
EAST
EAST
EAST
EAST
NORTH
NORTH
NORTH
NORTH
NORTH
NORTH
WEST
WEST
WEST
WEST
SOUTH
SOUTH

5 5
#####
#@  #
#   #
#  $#
#####

SOUTH
SOUTH
EAST
EAST

8 8
########
# @    #
#     X#
# XXX  #
#   XX #
#   XX #
#     $#
########


SOUTH
EAST
EAST
EAST
SOUTH
EAST
SOUTH
SOUTH
SOUTH
*/