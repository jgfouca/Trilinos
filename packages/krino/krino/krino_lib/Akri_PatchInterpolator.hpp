/*
 * Akri_PatchInterpolator.hpp
 *
 *  Created on: Feb 27, 2023
 *      Author: drnoble
 */

#ifndef KRINO_KRINO_KRINO_LIB_AKRI_PATCHINTERPOLATOR_HPP_
#define KRINO_KRINO_KRINO_LIB_AKRI_PATCHINTERPOLATOR_HPP_
#include <Akri_Vec.hpp>
#include <array>

namespace krino{

class CubicSplineInterpolator
{
public:
  CubicSplineInterpolator(const std::array<Vector3d,2> & sideNodeCoords, const std::array<Vector3d,2> & sideNodeNormals);

  Vector3d evaluate(const std::array<Vector3d,2> & sideNodeCoords, const double paramX) const;
private:
  double compute_spline_value(const double paramX) const;
  Vector3d myNormal;
  std::array<double, 2> myY2H2Over6;
};



}



#endif /* KRINO_KRINO_KRINO_LIB_AKRI_PATCHINTERPOLATOR_HPP_ */
