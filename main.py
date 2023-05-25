import numpy as np
import pygame as pg

SQ_SIZE = 68
WIDTH = SQ_SIZE * 8
HEIGHT = SQ_SIZE * 8
FPS = 30


class Chess:
    def __init__(self) -> None:
        self.board = self._get_default_position()
        self.turn = 0
        
        self.white_short_castle = True
        self.black_short_castle = True
        self.white_long_castle = True
        self.black_long_castle = True
        
        self.screen = pg.display.set_mode((WIDTH, HEIGHT))
        self.screen.fill('white')
        pg.display.set_caption('Chess')
        self.clock = pg.time.Clock()
        
        self.piece_images = dict()
        self.load_piece_images()
        self.piece_by_number = {
            0: '--',
            1: "wK", -1: "bK",
            2: "wQ", -2: "bQ",
            3: "wR", -3: "bR",
            4: "wB", -4: "bB",
            5: "wN", -5: "bN",
            6: "wp", -6: "bp"
        }
    

    def _get_default_position(self) -> list:
        """
        Field is reflected vertically!!!

        0 - empty square
        1 - wK, -1 - bK
        2 - wQ, -2 - bQ
        3 - wR, -3 - bR
        4 - wB, -4 - bB
        5 - wN, -5 - bN
        6 - wp, -6 - bp
        """

        return [[-3, -5, -4, -2, -1, -4, -5, -3],
                [-6, -6, -6, -6, -6, -6, -6, -6],
                [0, 0, 0, 0, 0, 0, 0, 0],
                [0, 0, 0, 0, 0, 0, 0, 0],
                [0, 0, 0, 0, 0, 0, 0, 0],
                [0, 0, 0, 0, 0, 0, 0, 0],
                [6, 6, 6, 6, 6, 6, 6, 6],
                [3, 5, 4, 2, 1, 4, 5, 3],]
    
    def load_piece_images(self, name: str = 'default'):
        pieces = ['wK', 'bK', 'wQ', 'bQ', 'wR', 'bR', 
                  'wB', 'bB', 'wN', 'bN', 'wp', 'bp']
        for piece in pieces:
            self.piece_images[piece] = pg.image.load(f"images/{name}/{piece}.png")
    
    def play(self):
        running = True
        while running:
            for event in pg.event.get():
                if event.type == pg.QUIT:
                    running = False
            
            self.drawBoard()
            self.drawPieces()
            self.clock.tick(FPS)
            pg.display.flip()
    
    def drawBoard(self):
        colors = [pg.Color('white'), pg.Color('gray')]
        for row in range(8):
            for col in range(8):
                color = colors[(row + col) % 2]
                pg.draw.rect(self.screen, color, 
                             pg.Rect(col * SQ_SIZE, row * SQ_SIZE,
                                    SQ_SIZE, SQ_SIZE))
    
    def drawPieces(self):
        for row in range(8):
            for col in range(8):
                if self.board[row][col] != 0:
                    piece_number = self.board[row][col]
                    piece = self.piece_by_number[piece_number]
                    self.screen.blit(self.piece_images[piece],
                                     pg.Rect(col * SQ_SIZE, row * SQ_SIZE,
                                     SQ_SIZE, SQ_SIZE))

if __name__ == '__main__':
    pg.init()

    chess = Chess()
    chess.play()

    pg.quit()