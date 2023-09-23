#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeConverter;
}
// Type: ::ColorSchemeConverter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5916))
// CS Name: ColorSchemeConverter
class CORDL_TYPE ColorSchemeConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorSchemeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: " const&", def_value: None }]
constexpr ColorSchemeConverter(ColorSchemeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeConverter", modifiers: "&&", def_value: None }]
constexpr ColorSchemeConverter(ColorSchemeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorSchemeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeConverter& operator=(ColorSchemeConverter&& o) noexcept = default;
  constexpr ColorSchemeConverter& operator=(ColorSchemeConverter const& o) noexcept = default;
                


// Methods

/// @brief Method FromNetSerializable addr 0x2191fa4 size 0x20c virtual false final false
static GlobalNamespace::ColorScheme FromNetSerializable(GlobalNamespace::ColorSchemeNetSerializable serialized) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemeConverter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeConverter, "", "ColorSchemeConverter");
