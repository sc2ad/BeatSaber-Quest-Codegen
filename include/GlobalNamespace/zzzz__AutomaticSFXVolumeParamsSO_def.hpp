#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AutomaticSFXVolumeParamsSO;
}
// Type: ::AutomaticSFXVolumeParamsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4041))
// CS Name: AutomaticSFXVolumeParamsSO
class CORDL_TYPE AutomaticSFXVolumeParamsSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AutomaticSFXVolumeParamsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: " const&", def_value: None }]
constexpr AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: "&&", def_value: None }]
constexpr AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutomaticSFXVolumeParamsSO(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr AutomaticSFXVolumeParamsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutomaticSFXVolumeParamsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutomaticSFXVolumeParamsSO& operator=(AutomaticSFXVolumeParamsSO&& o) noexcept = default;
  constexpr AutomaticSFXVolumeParamsSO& operator=(AutomaticSFXVolumeParamsSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__musicVolumeMultiplier, put=__set__musicVolumeMultiplier))  _musicVolumeMultiplier;

constexpr void __set__musicVolumeMultiplier(float_t value) ;

constexpr float_t __get__musicVolumeMultiplier() const;

 float_t __declspec(property(get=__get__threshold, put=__set__threshold))  _threshold;

constexpr void __set__threshold(float_t value) ;

constexpr float_t __get__threshold() const;

 float_t __declspec(property(get=__get__impact, put=__set__impact))  _impact;

constexpr void __set__impact(float_t value) ;

constexpr float_t __get__impact() const;

 float_t __declspec(property(get=__get__attackTime, put=__set__attackTime))  _attackTime;

constexpr void __set__attackTime(float_t value) ;

constexpr float_t __get__attackTime() const;

 float_t __declspec(property(get=__get__releaseTime, put=__set__releaseTime))  _releaseTime;

constexpr void __set__releaseTime(float_t value) ;

constexpr float_t __get__releaseTime() const;

 float_t __declspec(property(get=__get__minVolume, put=__set__minVolume))  _minVolume;

constexpr void __set__minVolume(float_t value) ;

constexpr float_t __get__minVolume() const;

 float_t __declspec(property(get=__get__maxVolume, put=__set__maxVolume))  _maxVolume;

constexpr void __set__maxVolume(float_t value) ;

constexpr float_t __get__maxVolume() const;

 float_t __declspec(property(get=__get__volumeSmooth, put=__set__volumeSmooth))  _volumeSmooth;

constexpr void __set__volumeSmooth(float_t value) ;

constexpr float_t __get__volumeSmooth() const;


// Properties

 float_t __declspec(property(get=get_musicVolumeMultiplier))  musicVolumeMultiplier;

 float_t __declspec(property(get=get_threshold))  threshold;

 float_t __declspec(property(get=get_impact))  impact;

 float_t __declspec(property(get=get_attackTime))  attackTime;

 float_t __declspec(property(get=get_releaseTime))  releaseTime;

 float_t __declspec(property(get=get_minVolume))  minVolume;

 float_t __declspec(property(get=get_maxVolume))  maxVolume;

 float_t __declspec(property(get=get_volumeSmooth))  volumeSmooth;


// Methods

/// @brief Method get_musicVolumeMultiplier addr 0x20b9f70 size 0x8 virtual false final false
 float_t get_musicVolumeMultiplier() ;

/// @brief Method get_threshold addr 0x20b9f78 size 0x8 virtual false final false
 float_t get_threshold() ;

/// @brief Method get_impact addr 0x20b9f80 size 0x8 virtual false final false
 float_t get_impact() ;

/// @brief Method get_attackTime addr 0x20b9f88 size 0x8 virtual false final false
 float_t get_attackTime() ;

/// @brief Method get_releaseTime addr 0x20b9f90 size 0x8 virtual false final false
 float_t get_releaseTime() ;

/// @brief Method get_minVolume addr 0x20b9f98 size 0x8 virtual false final false
 float_t get_minVolume() ;

/// @brief Method get_maxVolume addr 0x20b9fa0 size 0x8 virtual false final false
 float_t get_maxVolume() ;

/// @brief Method get_volumeSmooth addr 0x20b9fa8 size 0x8 virtual false final false
 float_t get_volumeSmooth() ;

// Ctor Parameters []
explicit AutomaticSFXVolumeParamsSO() ;

/// @brief Method .ctor addr 0x20b9fb0 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolumeParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolumeParamsSO, "", "AutomaticSFXVolumeParamsSO");
