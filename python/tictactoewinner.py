def check_winner(board):
    for row in board:
        if all(cell = 'X' for cell in row)
            return 'X'
        
    for col in range(3):
        if all(board[row][col] == 'X' for row in range(3)):
            return 'X'
        
    
            