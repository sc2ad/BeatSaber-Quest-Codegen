#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMidAnchorModeExtensions;
}
// Type: ::SliderMidAnchorModeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14948))
// CS Name: SliderMidAnchorModeExtensions
class CORDL_TYPE SliderMidAnchorModeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SliderMidAnchorModeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMidAnchorModeExtensions", modifiers: " const&", def_value: None }]
constexpr SliderMidAnchorModeExtensions(SliderMidAnchorModeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMidAnchorModeExtensions", modifiers: "&&", def_value: None }]
constexpr SliderMidAnchorModeExtensions(SliderMidAnchorModeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderMidAnchorModeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SliderMidAnchorModeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderMidAnchorModeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderMidAnchorModeExtensions& operator=(SliderMidAnchorModeExtensions&& o) noexcept = default;
  constexpr SliderMidAnchorModeExtensions& operator=(SliderMidAnchorModeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method OppositeDirection addr 0xd95154 size 0x1c virtual false final false
static ::GlobalNamespace::SliderMidAnchorMode OppositeDirection(::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SliderMidAnchorModeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMidAnchorModeExtensions, "", "SliderMidAnchorModeExtensions");
