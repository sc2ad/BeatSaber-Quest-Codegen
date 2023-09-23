#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManagerInstaller;
}
// Type: ::ColorManagerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5476))
// CS Name: ColorManagerInstaller
class CORDL_TYPE ColorManagerInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ColorManagerInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: " const&", def_value: None }]
constexpr ColorManagerInstaller(ColorManagerInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorManagerInstaller", modifiers: "&&", def_value: None }]
constexpr ColorManagerInstaller(ColorManagerInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorManagerInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr ColorManagerInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorManagerInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorManagerInstaller& operator=(ColorManagerInstaller&& o) noexcept = default;
  constexpr ColorManagerInstaller& operator=(ColorManagerInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__menuColorScheme, put=__set__menuColorScheme))  _menuColorScheme;

constexpr void __set__menuColorScheme(GlobalNamespace::ColorSchemeSO value) ;

constexpr GlobalNamespace::ColorSchemeSO __get__menuColorScheme() const;


// Methods

/// @brief Method InstallBindings addr 0x2117720 size 0xb8 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ColorManagerInstaller() ;

/// @brief Method .ctor addr 0x21177d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorManagerInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorManagerInstaller, "", "ColorManagerInstaller");
