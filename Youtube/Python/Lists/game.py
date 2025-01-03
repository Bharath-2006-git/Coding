import pygame
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
WIDTH = 800
HEIGHT = 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Simple Mario Game")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GREEN = (0, 255, 0)

# Mario properties
mario_width = 32
mario_height = 32
mario_x = 50
mario_y = HEIGHT - mario_height - 50  # Start slightly above the bottom
mario_speed = 5
jump_height = 15
is_jumping = False
jump_count = jump_height

# Ground
ground_height = 50
ground_rect = pygame.Rect(0, HEIGHT - ground_height, WIDTH, ground_height)

# Obstacle properties
obstacle_width = 30
obstacle_height = 30
obstacles = []

# Game clock
clock = pygame.time.Clock()

# Load Mario image (replace with your image)
try:
    mario_img = pygame.image.load("mario.png").convert_alpha()  # Assuming a transparent PNG
    mario_img = pygame.transform.scale(mario_img, (mario_width, mario_height))
except pygame.error:
    print("Error loading Mario image. Using a placeholder.")
    mario_img = pygame.Surface((mario_width, mario_height))
    mario_img.fill((255, 0, 0)) #Red placeholder if image fails to load.

# Game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Mario movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        mario_x += mario_speed
        if mario_x + mario_width > WIDTH:
            mario_x = WIDTH - mario_width
    if keys[pygame.K_LEFT]:
        mario_x -= mario_speed
        if mario_x < 0:
            mario_x = 0

    # Mario jumping
    if not is_jumping:
        if keys[pygame.K_SPACE]:
            is_jumping = True
    else:
        if jump_count >= -jump_height:
            neg = 1
            if jump_count < 0:
                neg = -1
            mario_y -= (jump_count ** 2) * 0.5 * neg
            jump_count -= 1
        else:
            is_jumping = False
            jump_count = jump_height
            mario_y = HEIGHT - mario_height - ground_height #Resets mario to ground level.

    # Obstacle generation
    if random.randint(0, 100) < 2:  # Adjust probability as needed
        obstacles.append(pygame.Rect(WIDTH, HEIGHT - ground_height - obstacle_height, obstacle_width, obstacle_height))

    # Obstacle movement and collision
    for obstacle in obstacles[:]:
        obstacle.x -= 5
        if obstacle.colliderect(pygame.Rect(mario_x, mario_y, mario_width, mario_height)):
            print("Game Over!")
            running = False
        if obstacle.right < 0:
            obstacles.remove(obstacle)

    # Drawing
    screen.fill(WHITE)
    pygame.draw.rect(screen, GREEN, ground_rect)  # Draw the ground
    screen.blit(mario_img, (mario_x, mario_y)) #Draw mario image
    for obstacle in obstacles:
        pygame.draw.rect(screen, BLACK, obstacle)

    pygame.display.flip()
    clock.tick(60)

pygame.quit()