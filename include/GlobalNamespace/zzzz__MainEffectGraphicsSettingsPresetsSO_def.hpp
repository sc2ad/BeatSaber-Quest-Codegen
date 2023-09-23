#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class NamedPreset;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
// Type: ::Preset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4449))
// CS Name: MainEffectGraphicsSettingsPresetsSO::Preset
class CORDL_TYPE GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset : public GlobalNamespace::NamedPreset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset(GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset(GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset(void* ptr) noexcept : GlobalNamespace::NamedPreset(ptr) {
}


  constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset& operator=(GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset&& o) noexcept = default;
  constexpr GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset& operator=(GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainEffectSO __declspec(property(get=__get_mainEffect, put=__set_mainEffect))  mainEffect;

constexpr void __set_mainEffect(GlobalNamespace::MainEffectSO value) ;

constexpr GlobalNamespace::MainEffectSO __get_mainEffect() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset() ;

/// @brief Method .ctor addr 0x21ef680 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainEffectGraphicsSettingsPresetsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4450))
// CS Name: MainEffectGraphicsSettingsPresetsSO
class CORDL_TYPE MainEffectGraphicsSettingsPresetsSO : public GlobalNamespace::NamedPresetsSO {
public:
// Declarations
using Preset = GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MainEffectGraphicsSettingsPresetsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: " const&", def_value: None }]
constexpr MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectGraphicsSettingsPresetsSO", modifiers: "&&", def_value: None }]
constexpr MainEffectGraphicsSettingsPresetsSO(MainEffectGraphicsSettingsPresetsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainEffectGraphicsSettingsPresetsSO(void* ptr) noexcept : GlobalNamespace::NamedPresetsSO(ptr) {
}


  constexpr MainEffectGraphicsSettingsPresetsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainEffectGraphicsSettingsPresetsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainEffectGraphicsSettingsPresetsSO& operator=(MainEffectGraphicsSettingsPresetsSO&& o) noexcept = default;
  constexpr MainEffectGraphicsSettingsPresetsSO& operator=(MainEffectGraphicsSettingsPresetsSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset> __declspec(property(get=__get__presets, put=__set__presets))  _presets;

constexpr void __set__presets(::ArrayW<GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset> __get__presets() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset> __declspec(property(get=get_presets))  presets;

 ::ArrayW<GlobalNamespace::NamedPreset> __declspec(property(get=get_namedPresets))  namedPresets;


// Methods

/// @brief Method get_presets addr 0x21ef668 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset> get_presets() ;

/// @brief Method get_namedPresets addr 0x21ef670 size 0x8 virtual true final false
 ::ArrayW<GlobalNamespace::NamedPreset> get_namedPresets() ;

// Ctor Parameters []
explicit MainEffectGraphicsSettingsPresetsSO() ;

/// @brief Method .ctor addr 0x21ef678 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainEffectGraphicsSettingsPresetsSO__Preset, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
NEED_NO_BOX(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO, "", "MainEffectGraphicsSettingsPresetsSO");
