import pygame


pygame.init()

running = 1


class Element:
    def __init__(self, name:str, image_path:str, position:tuple=(0,0) ):
        self.image = self.resize(pygame.image.load(image_path))
        self.name = name
        self.x = position[0]
        self.y = position[1]
    

    def resize(self, position):
        pygame.transform.scale.re


class Screen:
    def __init__(self, dimension:tuple=(500, 500)):
        self.screen = pygame.display.set_mode(dimension)
        self.bg_color = "#0000FF"	
    

    def fill(self) -> None:

        self.screen.fill(self.bg_color)


    def refresh(self) -> None:
        pygame.display.flip()
    
    def blit(self, obj:Element):
        self.screen.blit(obj.image, (obj.x, obj.y))
    


    







class Ball(Element):
    def __init___(self, name, ball_img):
        self.name = "balle"
        self.ball_img = ball_img
    
        
        # instanciation du parennts Element
        super().__init__(self.name, self.ball_img)


    

    def move(self, dx, dy):
        self.x += dx
        self.y += dy   


balle = Ball("ball","basketball.jpg")

root = Screen()




while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = 0

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP:
                balle.move(0, -40)
            
            if event.key == pygame.K_RIGHT:
                balle.move(40, 0)
            
            if event.key == pygame.K_LEFT:
                balle.move(-40, 0)
            
            if event.key == pygame.K_DOWN:
                balle.move(0,40)
        

        root.fill()
        root.blit(balle)

        root.refresh()
