#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace HMUI {
class CustomFormatRangeValuesSlider;
}
// Type: HMUI::CustomFormatRangeValuesSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13609))
// CS Name: HMUI.CustomFormatRangeValuesSlider
class CORDL_TYPE CustomFormatRangeValuesSlider : public ::HMUI::RangeValuesTextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x170};

virtual ~CustomFormatRangeValuesSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: " const&", def_value: None }]
constexpr CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomFormatRangeValuesSlider", modifiers: "&&", def_value: None }]
constexpr CustomFormatRangeValuesSlider(CustomFormatRangeValuesSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomFormatRangeValuesSlider(void* ptr) noexcept : ::HMUI::RangeValuesTextSlider(ptr) {
}


  constexpr CustomFormatRangeValuesSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomFormatRangeValuesSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomFormatRangeValuesSlider& operator=(CustomFormatRangeValuesSlider&& o) noexcept = default;
  constexpr CustomFormatRangeValuesSlider& operator=(CustomFormatRangeValuesSlider const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__formatString, put=__set__formatString))  _formatString;

constexpr void __set__formatString(::StringW value) ;

constexpr ::StringW __get__formatString() const;


// Methods

/// @brief Method TextForValue addr 0x1faf294 size 0x70 virtual true final false
 ::StringW TextForValue(float_t value) ;

// Ctor Parameters []
explicit CustomFormatRangeValuesSlider() ;

/// @brief Method .ctor addr 0x1faf304 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::CustomFormatRangeValuesSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CustomFormatRangeValuesSlider, "HMUI", "CustomFormatRangeValuesSlider");
