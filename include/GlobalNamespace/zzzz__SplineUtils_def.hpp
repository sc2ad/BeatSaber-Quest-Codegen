#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SplineUtils;
}
// Type: ::SplineUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4991))
// CS Name: SplineUtils
class CORDL_TYPE SplineUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SplineUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "SplineUtils", modifiers: " const&", def_value: None }]
constexpr SplineUtils(SplineUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SplineUtils", modifiers: "&&", def_value: None }]
constexpr SplineUtils(SplineUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SplineUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SplineUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SplineUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SplineUtils& operator=(SplineUtils&& o) noexcept = default;
  constexpr SplineUtils& operator=(SplineUtils const& o) noexcept = default;
                


// Methods

/// @brief Method Interpolate addr 0x2257574 size 0x110 virtual false final false
static UnityEngine::Vector3 Interpolate(UnityEngine::Vector3 t0, UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 t1, float_t f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SplineUtils);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SplineUtils, "", "SplineUtils");
