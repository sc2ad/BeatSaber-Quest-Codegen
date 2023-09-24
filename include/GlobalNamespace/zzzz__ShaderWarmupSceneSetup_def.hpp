#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneSetup;
}
// Type: ::ShaderWarmupSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6139))
// CS Name: ShaderWarmupSceneSetup
class CORDL_TYPE ShaderWarmupSceneSetup : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ShaderWarmupSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: " const&", def_value: None }]
constexpr ShaderWarmupSceneSetup(ShaderWarmupSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: "&&", def_value: None }]
constexpr ShaderWarmupSceneSetup(ShaderWarmupSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderWarmupSceneSetup(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr ShaderWarmupSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderWarmupSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderWarmupSceneSetup& operator=(ShaderWarmupSceneSetup&& o) noexcept = default;
  constexpr ShaderWarmupSceneSetup& operator=(ShaderWarmupSceneSetup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__sharedWarmupColorScheme, put=__set__sharedWarmupColorScheme))  _sharedWarmupColorScheme;

constexpr void __set__sharedWarmupColorScheme(GlobalNamespace::ColorSchemeSO value) ;

constexpr GlobalNamespace::ColorSchemeSO __get__sharedWarmupColorScheme() const;


// Methods

/// @brief Method InstallBindings addr 0x21d3bd4 size 0xb8 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::ShaderWarmupSceneSetup New_ctor() ;

/// @brief Method .ctor addr 0x21d3c8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ShaderWarmupSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetup, "", "ShaderWarmupSceneSetup");
