#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ProjectionUtils;
}
// Type: UnityEngine.UIElements::ProjectionUtils
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6814))
// CS Name: UnityEngine.UIElements.ProjectionUtils
class CORDL_TYPE ProjectionUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProjectionUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectionUtils", modifiers: " const&", def_value: None }]
constexpr ProjectionUtils(ProjectionUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProjectionUtils", modifiers: "&&", def_value: None }]
constexpr ProjectionUtils(ProjectionUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProjectionUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProjectionUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProjectionUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProjectionUtils& operator=(ProjectionUtils&& o) noexcept = default;
  constexpr ProjectionUtils& operator=(ProjectionUtils const& o) noexcept = default;
                


// Methods

/// @brief Method Ortho addr 0x2c28410 size 0x70 virtual false final false
static UnityEngine::Matrix4x4 Ortho(float_t left, float_t right, float_t bottom, float_t top, float_t near, float_t far) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ProjectionUtils);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ProjectionUtils, "UnityEngine.UIElements", "ProjectionUtils");
