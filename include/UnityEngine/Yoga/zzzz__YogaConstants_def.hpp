#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::Yoga {
class YogaConstants;
}
// Type: UnityEngine.Yoga::YogaConstants
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15381))
// CS Name: UnityEngine.Yoga.YogaConstants
class CORDL_TYPE YogaConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~YogaConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: " const&", def_value: None }]
constexpr YogaConstants(YogaConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "YogaConstants", modifiers: "&&", def_value: None }]
constexpr YogaConstants(YogaConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit YogaConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr YogaConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr YogaConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr YogaConstants& operator=(YogaConstants&& o) noexcept = default;
  constexpr YogaConstants& operator=(YogaConstants const& o) noexcept = default;
                


// Methods

/// @brief Method IsUndefined addr 0x2d2dbb0 size 0x64 virtual false final false
static bool IsUndefined(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::YogaConstants);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaConstants, "UnityEngine.Yoga", "YogaConstants");
