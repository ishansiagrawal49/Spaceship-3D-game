#ifndef CONTROLS_HPP
#define CONTROLS_HPP

void computeMatricesFromInputs();
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();
glm::vec3 getCameraPosition();
glm::vec3 getSSPosition();
void incrementSpeed(int amount);
void decrementSpeed(int amount);
void incrementFuel(int amount);
void decrementFuel();
int getFuelLeft();
void stop();
void EndGame();

#endif
