gcc test.c -o test -lgraph -lm 
./test

## Translation 
when doing translation just make a shape
Take the amt of change user needs to do in x and y axis
Just add the change into the original obj

## Rotation
when doing rotation at origin we first find the theta (angle) in radian
Then we find sin and cos version of our angle: s = sin(angle) c = cos(angle)
Then we find our new x & y points : 
- Anticlockwise:
    new_x1 = x+floor((x1-x)*c+(y1-y)*s);
    new_y1 = y+floor(-(x1-x)*sin+(y1-y)*c);

- Rotation at pivot point:

## Scalling
When doing scaling its quite simple just multiply original points with scale factors
when we multiply original points with scale factor we end up with new scaled points
if scale factor is:
    S greater than 1: We are scaling up 
    S lesser than 1: We are scaling down
    S equal to 1: We are staying as it is
    
[nx,ny]= [x,y]*[Sx,0
                0,Sy]
