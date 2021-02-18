#Sudoku_mycode - The Backtracking project
board = [
    [7, 8, 0, 4, 0, 0, 1, 2, 0],
    [6, 0, 0, 0, 7, 5, 0, 0, 9],
    [0, 0, 0, 6, 0, 1, 0, 7, 8],
    [0, 0, 7, 0, 4, 0, 2, 6, 0],
    [0, 0, 1, 0, 5, 0, 9, 3, 0],
    [9, 0, 4, 0, 6, 0, 0, 0, 5],
    [0, 7, 0, 3, 0, 0, 0, 1, 2],
    [1, 2, 0, 0, 0, 7, 4, 0, 0],
    [0, 4, 9, 2, 0, 6, 0, 0, 7]
]

# Solves the grid - recursive algorithm
def solve(bo):
    find = find_empty(bo)
    if not find:
        return True
    else:
        row, col = find

    for a in range(1, 10):
        if valid(bo, a, (row, col)):
            bo[row][col] = a

            if solve(bo):
                return True
            
            bo[row][col] = 0
    return False

# Loop through the squares
def valid(bo, num, pos):
    # Check row
    for a in range(len(bo[0])):
        if bo[pos[0]][a] == num and pos[1] != a:
            return False
    
    # Check column
    for a in range(len(bo)):
        if bo[a][pos[1]] == num and pos[0] != a:
            return False
    
    # Check Square (get x position and y position)
    square_x = pos[1] // 3
    square_y = pos[0] // 3

    # Loop through all 9 elements within the square
    for a in range(square_y * 3, square_y * 3 + 3):
        for b in range(square_x * 3, square_x * 3 + 3):
            if bo[a][b] == num and (a,b) != pos:
                return False
    return True

#Prints the default game board 
def print_board(bo):
    for a in range(len(bo)):
        if a % 3 == 0 and a != 0:
            print("------------------------")

        for b in range(len(bo[0])):
            if b % 3 == 0 and b != 0: 
                print(" | ", end="")

            if b == 8:
                print(bo[a][b])
            else:
                print(str(bo[a][b]) + " ", end="")
# Validate the board looks like what we want
#print_board(board)

# Finds the next empty 'square'
def find_empty(bo):
    for a in range(len(bo)):
        for b in range(len(bo[0])):
            if bo[a][b] == 0:
                return (a, b) # row, col
    
    return None

# Print board before and print board after to view solver 
#print_board(board)
#print("________________________")
print(solve(board))
print_board(board)
