#include "intersection.h"
#include "ray.h"

glm::vec3 Intersection::compute_color(Ray& ray, std::vector<Shape2D*>& shapes){

    vec3 color          = shape2D->compute_color();
    vec3 directlight    = ray.GetDirectLight(*(this), shapes);
    vec3 indirectlight  = ray.GetIndirectLight();
    color *= ((directlight + indirectlight) *  (vec3) shape2D->gloss);
    return color; 
}     