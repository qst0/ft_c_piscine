
t_grid is a struct with a char*, width, and height
`grid.cont[x + y * grid.w]` is the flags at (x, y)

grid.cont is padded to a multiple of 8 bytes
Each row also padded to a multiple of 8

## Flags

flag of 0 means valid square start
flag of 1 means obstacle
flag of 2 means eliminated square start

read_long(grid, x, y)
0123 4567
^^^^ ^^^^
read_long will give back a ulong containing the flags for 8 squares
The output mask is 0x0303030303030303ULL

When checking for a square, can jump to g_big_sz


....o
.....
o....
.....
.o...


