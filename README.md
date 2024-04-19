# SHOOT NINJA Project CIR2 - Project QT - C++

# Installation with Docker
Unfortunately, this project has not been programmed with docker, so you need to set up your Linux machine.

However, it's possible that a version with docker will be released one day.

# Setup the linux machine

### Update
- `sudo apt-get update`
- `sudo apt-get upgrade`

### Install C++ / QT Package | Version : Update
- `sudo apt-get install cmake`
- `sudo apt-get install qt6-base-dev qtchooser qmake6 qt6-base-dev-tools`

### Verify the installation
You can install Xming to verify the installation of QT
- `sudo apt-get install xming`
- `sudo apt-get install x11-apps`
- `xeyes`

Check if the eyes are moving with your mouse

# Clone the repository Github in your linux machine
### Install git
- `sudo apt-get install git git-core`
### Clone the repository
- Go to the directory where you want to clone the repository
- `sudo git clone https://github.com/Lasssssa/SHOOTER_QT_CPP_SHOOT_NINJA`

### Update
- Go to the directory where you clone the repository
- `sudo git pull https://github.com/Lasssssa/SHOOTER_QT_CPP_SHOOT_NINJA`

### Other way to get the repository
- Go to the directory where you want to clone the repository
- Get the repository and move it to the directory where you want to clone the repository

# Launch the application

### Run the application
- Move to the directory where you clone the repository
- `cd PROJET_CIR2_QT_CPP`
- `cmake .`
- `make`
- `./prog`

### Change the CMakeLists.txt
If you want to change the CMakeLists.txt, you need to delete the CMakeCache.txt
- `rm CMakeCache.txt`
- Go to the CMakeLists.txt and change it as you want
- `cmake .`
- `make`
- `./name_of_the_executable`

# The Game
Now you can play to the game
- Launch the application by following the steps above (Run the application)

### Aim of the game
- Kill the maximum of Mexican skeletons
- Kill the maximum of Magician skeletons
- Try to survive as long as possible
- Try to have the maximum of points

### How to play
- Use Z to move up
- Use Q to move left
- Use S to move down
- Use D to move right
- Use Space to shoot
- Use E to use the special attack (big explosion that kill all the skeletons on the screen)
- Use R to be invincible during 5 seconds

### Other rules
- If you kill a Mexican skeleton, you win 25 points
- If you kill a Magician skeleton, you win 25 points
- You win points every seconds pass
- You can get your last score at the end of the game
- But you can't get your best score at the end of the game (except if you are in the 10 best scores)
- You can restart the game at the end of the game
- All the scores are saved in the file score.txt (that is not very secure but you can see all the scores)


## Repertory Github :
https://github.com/Lasssssa/SHOOTER_QT_CPP_SHOOT_NINJA
