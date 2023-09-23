#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTypeExtensions;
}
// Type: ::ColorTypeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14934))
// CS Name: ColorTypeExtensions
class CORDL_TYPE ColorTypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorTypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: " const&", def_value: None }]
constexpr ColorTypeExtensions(ColorTypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTypeExtensions", modifiers: "&&", def_value: None }]
constexpr ColorTypeExtensions(ColorTypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorTypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorTypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorTypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorTypeExtensions& operator=(ColorTypeExtensions&& o) noexcept = default;
  constexpr ColorTypeExtensions& operator=(ColorTypeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Opposite addr 0xd93bdc size 0x18 virtual false final false
static GlobalNamespace::ColorType Opposite(GlobalNamespace::ColorType colorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorTypeExtensions, "", "ColorTypeExtensions");
