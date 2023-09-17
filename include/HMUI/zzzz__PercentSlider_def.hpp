#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace HMUI {
class PercentSlider;
}
// Type: HMUI::PercentSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13610))
// CS Name: HMUI.PercentSlider
class CORDL_TYPE PercentSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x168};

virtual ~PercentSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: " const&", def_value: None }]
constexpr PercentSlider(PercentSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PercentSlider", modifiers: "&&", def_value: None }]
constexpr PercentSlider(PercentSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PercentSlider(void* ptr) noexcept : ::HMUI::RangeValuesTextSlider(ptr) {
}


  constexpr PercentSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PercentSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PercentSlider& operator=(PercentSlider&& o) noexcept = default;
  constexpr PercentSlider& operator=(PercentSlider const& o) noexcept = default;
                


// Methods

/// @brief Method TextForValue addr 0x1faf31c size 0x8c virtual true final false
 ::StringW TextForValue(float_t value) ;

// Ctor Parameters []
explicit PercentSlider() ;

/// @brief Method .ctor addr 0x1faf3a8 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::PercentSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PercentSlider, "HMUI", "PercentSlider");
