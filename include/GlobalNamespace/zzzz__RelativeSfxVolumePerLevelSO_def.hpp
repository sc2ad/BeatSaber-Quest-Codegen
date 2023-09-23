#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class PreviewBeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
// Type: ::RelativeSfxVolumePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4781))
// CS Name: RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair
class CORDL_TYPE GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair& operator=(GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair&& o) noexcept = default;
  constexpr GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair& operator=(GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PreviewBeatmapLevelSO __declspec(property(get=__get__previewLevel, put=__set__previewLevel))  _previewLevel;

constexpr void __set__previewLevel(GlobalNamespace::PreviewBeatmapLevelSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelSO __get__previewLevel() const;

 float_t __declspec(property(get=__get__relativeSfxVolume, put=__set__relativeSfxVolume))  _relativeSfxVolume;

constexpr void __set__relativeSfxVolume(float_t value) ;

constexpr float_t __get__relativeSfxVolume() const;


// Properties

 ::StringW __declspec(property(get=get_levelId))  levelId;

 float_t __declspec(property(get=get_relativeSfxVolume))  relativeSfxVolume;


// Methods

/// @brief Method get_levelId addr 0x2229b9c size 0x1c virtual false final false
 ::StringW get_levelId() ;

/// @brief Method get_relativeSfxVolume addr 0x2229bb8 size 0x8 virtual false final false
 float_t get_relativeSfxVolume() ;

// Ctor Parameters []
explicit GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair() ;

/// @brief Method .ctor addr 0x2229bc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RelativeSfxVolumePerLevelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4782))
// CS Name: RelativeSfxVolumePerLevelSO
class CORDL_TYPE RelativeSfxVolumePerLevelSO : public UnityEngine::ScriptableObject {
public:
// Declarations
using RelativeSfxVolumePair = GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RelativeSfxVolumePerLevelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: " const&", def_value: None }]
constexpr RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelSO", modifiers: "&&", def_value: None }]
constexpr RelativeSfxVolumePerLevelSO(RelativeSfxVolumePerLevelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RelativeSfxVolumePerLevelSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr RelativeSfxVolumePerLevelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RelativeSfxVolumePerLevelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RelativeSfxVolumePerLevelSO& operator=(RelativeSfxVolumePerLevelSO&& o) noexcept = default;
  constexpr RelativeSfxVolumePerLevelSO& operator=(RelativeSfxVolumePerLevelSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> __declspec(property(get=__get__relativeSfxVolumePerLevel, put=__set__relativeSfxVolumePerLevel))  _relativeSfxVolumePerLevel;

constexpr void __set__relativeSfxVolumePerLevel(::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> __get__relativeSfxVolumePerLevel() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> __declspec(property(get=get_relativeSfxVolumePerLevel))  relativeSfxVolumePerLevel;


// Methods

/// @brief Method get_relativeSfxVolumePerLevel addr 0x2229b8c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair> get_relativeSfxVolumePerLevel() ;

// Ctor Parameters []
explicit RelativeSfxVolumePerLevelSO() ;

/// @brief Method .ctor addr 0x2229b94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RelativeSfxVolumePerLevelSO__RelativeSfxVolumePair, "", "RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair");
NEED_NO_BOX(GlobalNamespace::RelativeSfxVolumePerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeSfxVolumePerLevelSO, "", "RelativeSfxVolumePerLevelSO");
