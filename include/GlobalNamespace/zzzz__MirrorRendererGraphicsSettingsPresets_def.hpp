#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NamedPreset_def.hpp"
#include "GlobalNamespace/zzzz__NamedPresetsSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class NamedPreset;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
struct ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset;
}
// Type: ::MirrorType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4456))
// CS Name: MirrorRendererGraphicsSettingsPresets::Preset::MirrorType
struct CORDL_TYPE ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(int32_t value__) noexcept;


                    constexpr ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const&) = default;
                    constexpr ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType&&) = default;
                    constexpr ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& operator=(______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType& operator=(______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ________GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped : int32_t {
__None = 0,
__FakeMirror = 1,
__RenderedMirror = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ________GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped () const noexcept {
return std::bit_cast<________GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const None;

/// @brief Field FakeMirror offset 0
static ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const FakeMirror;

/// @brief Field RenderedMirror offset 0
static ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType const RenderedMirror;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Preset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4459))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4457))
// CS Name: MirrorRendererGraphicsSettingsPresets::Preset
class CORDL_TYPE ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset : public ::GlobalNamespace::NamedPreset {
public:
// Declarations
using MirrorType = ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset(____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset(____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset(void* ptr) noexcept : ::GlobalNamespace::NamedPreset(ptr) {
}


  constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset& operator=(____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset&& o) noexcept = default;
  constexpr ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset& operator=(____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType __declspec(property(get=__get_mirrorType, put=__set_mirrorType))  mirrorType;

constexpr void __set_mirrorType(::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType value) ;

constexpr ::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType __get_mirrorType() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get_reflectLayers, put=__set_reflectLayers))  reflectLayers;

constexpr void __set_reflectLayers(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get_reflectLayers() const;

 int32_t __declspec(property(get=__get_stereoTextureWidth, put=__set_stereoTextureWidth))  stereoTextureWidth;

constexpr void __set_stereoTextureWidth(int32_t value) ;

constexpr int32_t __get_stereoTextureWidth() const;

 int32_t __declspec(property(get=__get_stereoTextureHeight, put=__set_stereoTextureHeight))  stereoTextureHeight;

constexpr void __set_stereoTextureHeight(int32_t value) ;

constexpr int32_t __get_stereoTextureHeight() const;

 int32_t __declspec(property(get=__get_monoTextureWidth, put=__set_monoTextureWidth))  monoTextureWidth;

constexpr void __set_monoTextureWidth(int32_t value) ;

constexpr int32_t __get_monoTextureWidth() const;

 int32_t __declspec(property(get=__get_monoTextureHeight, put=__set_monoTextureHeight))  monoTextureHeight;

constexpr void __set_monoTextureHeight(int32_t value) ;

constexpr int32_t __get_monoTextureHeight() const;

 int32_t __declspec(property(get=__get_maxAntiAliasing, put=__set_maxAntiAliasing))  maxAntiAliasing;

constexpr void __set_maxAntiAliasing(int32_t value) ;

constexpr int32_t __get_maxAntiAliasing() const;

 bool __declspec(property(get=__get_enableBloomPrePassFog, put=__set_enableBloomPrePassFog))  enableBloomPrePassFog;

constexpr void __set_enableBloomPrePassFog(bool value) ;

constexpr bool __get_enableBloomPrePassFog() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset() ;

/// @brief Method .ctor addr 0x21f084c size 0x44 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MirrorRendererGraphicsSettingsPresets
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4458))
// CS Name: MirrorRendererGraphicsSettingsPresets
class CORDL_TYPE MirrorRendererGraphicsSettingsPresets : public ::GlobalNamespace::NamedPresetsSO {
public:
// Declarations
using Preset = ::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MirrorRendererGraphicsSettingsPresets() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: " const&", def_value: None }]
constexpr MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirrorRendererGraphicsSettingsPresets", modifiers: "&&", def_value: None }]
constexpr MirrorRendererGraphicsSettingsPresets(MirrorRendererGraphicsSettingsPresets&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirrorRendererGraphicsSettingsPresets(void* ptr) noexcept : ::GlobalNamespace::NamedPresetsSO(ptr) {
}


  constexpr MirrorRendererGraphicsSettingsPresets& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirrorRendererGraphicsSettingsPresets& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirrorRendererGraphicsSettingsPresets& operator=(MirrorRendererGraphicsSettingsPresets&& o) noexcept = default;
  constexpr MirrorRendererGraphicsSettingsPresets& operator=(MirrorRendererGraphicsSettingsPresets const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> __declspec(property(get=__get__presets, put=__set__presets))  _presets;

constexpr void __set__presets(::ArrayW<::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> __get__presets() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> __declspec(property(get=get_presets))  presets;

 ::ArrayW<::GlobalNamespace::NamedPreset> __declspec(property(get=get_namedPresets))  namedPresets;


// Methods

/// @brief Method get_presets addr 0x21f082c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset> get_presets() ;

/// @brief Method get_namedPresets addr 0x21f0834 size 0x8 virtual true final false
 ::ArrayW<::GlobalNamespace::NamedPreset> get_namedPresets() ;

// Ctor Parameters []
explicit MirrorRendererGraphicsSettingsPresets() ;

/// @brief Method .ctor addr 0x21f083c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset__MirrorType, "", "MirrorRendererGraphicsSettingsPresets/Preset/MirrorType");
NEED_NO_BOX(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets, "", "MirrorRendererGraphicsSettingsPresets");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MirrorRendererGraphicsSettingsPresets__Preset, "", "MirrorRendererGraphicsSettingsPresets/Preset");
