#include <SI/detail/unit.h>

auto operator_move_assignment_test() {
  SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v1{1};
  SI::detail::unit_t<'X', 1, int64_t, std::ratio<1>> v2{1};

  v1 = std::move(v2);
  return v1;
}