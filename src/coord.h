#pragma once

namespace Diagrammer {
class Coord {
private:
  float x;
  float y;

public:
  float get_x();
  float get_y();
  void set_x(float x);
  void set_y(float y);
};

} // namespace Diagrammer
