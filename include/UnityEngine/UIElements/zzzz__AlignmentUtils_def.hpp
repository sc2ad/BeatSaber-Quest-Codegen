#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine::UIElements {
class AlignmentUtils;
}
// Type: UnityEngine.UIElements::AlignmentUtils
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6856))
// CS Name: UnityEngine.UIElements.AlignmentUtils
class CORDL_TYPE AlignmentUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlignmentUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlignmentUtils", modifiers: " const&", def_value: None }]
constexpr AlignmentUtils(AlignmentUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlignmentUtils", modifiers: "&&", def_value: None }]
constexpr AlignmentUtils(AlignmentUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlignmentUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlignmentUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlignmentUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlignmentUtils& operator=(AlignmentUtils&& o) noexcept = default;
  constexpr AlignmentUtils& operator=(AlignmentUtils const& o) noexcept = default;
                


// Methods

/// @brief Method RoundToPixelGrid addr 0x2c3ebf8 size 0x1c virtual false final false
static float_t RoundToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset) ;

/// @brief Method CeilToPixelGrid addr 0x2c3ec14 size 0x14 virtual false final false
static float_t CeilToPixelGrid(float_t v, float_t pixelsPerPoint, float_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::AlignmentUtils);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::AlignmentUtils, "UnityEngine.UIElements", "AlignmentUtils");
