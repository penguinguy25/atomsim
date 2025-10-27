# atomsim - gravity simulator
## how it works
The `apply_gravity` function takes two args, the Y level of the obj and the surface gravity. the function defines the velocity var, v, as 0, and the second counter respectively. A while loop is then started which runs until y is not over 100 anymore. on each iteration, the velocity increases by g, simulating real surface gravities. then, the y pos is substracted by v. Finally, the second counter is incremented and a final print statement ends the iteration showing all the information of what happened in that time period (second counter, y pos and velocity value)

## customization
you can modify the y values in the while loop as to give more space for objects to fall through. you can modify the y pos of the obj and the surface gravity while calling the function.

### have fun!
if you have any improvements/suggestions (which is expected because im a trash coder), feel free to send a PR!
