#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace GlobalNamespace {
class ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Type: ::ColorSchemeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16037))
// CS Name: ColorSchemeSO
class CORDL_TYPE ColorSchemeSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ColorSchemeSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: " const&", def_value: None }]
constexpr ColorSchemeSO(ColorSchemeSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeSO", modifiers: "&&", def_value: None }]
constexpr ColorSchemeSO(ColorSchemeSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemeSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ColorSchemeSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemeSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemeSO& operator=(ColorSchemeSO&& o) noexcept = default;
  constexpr ColorSchemeSO& operator=(ColorSchemeSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorScheme __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get__colorScheme() const;


// Properties

 GlobalNamespace::ColorScheme __declspec(property(get=get_colorScheme))  colorScheme;


// Methods

/// @brief Method get_colorScheme addr 0x11a3300 size 0x8 virtual false final false
 GlobalNamespace::ColorScheme get_colorScheme() ;

/// @brief Method LogColorScheme addr 0x11a3308 size 0x2a4 virtual false final false
 void LogColorScheme() ;

// Ctor Parameters []
explicit ColorSchemeSO() ;

/// @brief Method .ctor addr 0x11a35ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemeSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeSO, "", "ColorSchemeSO");
