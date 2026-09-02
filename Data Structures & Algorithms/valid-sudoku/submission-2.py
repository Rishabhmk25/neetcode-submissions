class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            mp = {}
            for j in range(9):
                if board[i][j] == '.':
                    continue
                else:
                    x = int(board[i][j])
                    if x not in mp:
                        mp[x] = 1
                    else:
                        return False
        for i in range(9):
            mp = {}
            for j in range(9):
                if board[j][i] == '.':
                    continue
                else:
                    x = int(board[j][i])
                    if x not in mp:
                        mp[x] = 1
                    else:
                        return False
        for i in range(9):
            mp = {}
            for a in range(3):
                for b in range(3):
                    x = int(i/3)*3 + a
                    y = int(i%3)*3 + b
                    if board[x][y] == '.':
                        continue
                    else:
                        d = int(board[x][y])
                        if d not in mp:
                            mp[d] = 1
                        else:
                            return False
        return True