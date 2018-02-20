#ifndef MATERIAL_H
#define MATERIAL_H
#include <glm/glm.hpp>
#include <vector>
class Shape2D;
class Intersection;
class Ray;
using glm::vec4;
using glm::vec3;

class Material {
public:

    Material(){};
    virtual glm::vec3 material_color(const Intersection& intersection, const Ray& ray, const std::vector<Shape2D*>& shapes) = 0;
};


#endif 