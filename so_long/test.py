#First, get to p position
def	ft_position(map, row, column):
	x = 0

	while(x < row):
		y = 0
		while(y < column):
			if(map[x][y] == ord('P')):
				ft_path(map, x, y)
			y+=1
		x+=1

#Look around P if there is a valid path or a collectible
def	ft_path(map, x, y):
	if (map[x][y] == ord('1')):
		return
	if map[x][y] == ord('E'):
		print(" PPP !!")
	map[x][y] = ord('1')
	ft_path(map, x-1, y)
	ft_path(map, x+1, y)
	ft_path(map, x, y+1)
	ft_path(map, x, y-1)



i = 0
rows = 5
column = 5

map = [bytearray(b'11111'),
	   bytearray(b'1E101'),
	   bytearray(b'11C01'),
	   bytearray(b'100P1'),
	   bytearray(b'11111')]

ft_position(map, rows, column)

print(map)