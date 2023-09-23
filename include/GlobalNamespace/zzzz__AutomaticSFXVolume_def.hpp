#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class AutomaticSFXVolumeParamsSO;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomaticSFXVolume;
}
namespace GlobalNamespace {
class GlobalNamespace__AutomaticSFXVolume__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4039))
// CS Name: AutomaticSFXVolume::InitData
class CORDL_TYPE GlobalNamespace__AutomaticSFXVolume__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__AutomaticSFXVolume__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AutomaticSFXVolume__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AutomaticSFXVolume__InitData(GlobalNamespace__AutomaticSFXVolume__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AutomaticSFXVolume__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AutomaticSFXVolume__InitData(GlobalNamespace__AutomaticSFXVolume__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AutomaticSFXVolume__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AutomaticSFXVolume__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AutomaticSFXVolume__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AutomaticSFXVolume__InitData& operator=(GlobalNamespace__AutomaticSFXVolume__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__AutomaticSFXVolume__InitData& operator=(GlobalNamespace__AutomaticSFXVolume__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_volumeOffset, put=__set_volumeOffset))  volumeOffset;

constexpr void __set_volumeOffset(float_t value) ;

constexpr float_t __get_volumeOffset() const;

 float_t __declspec(property(get=__get_maxVolume, put=__set_maxVolume))  maxVolume;

constexpr void __set_maxVolume(float_t value) ;

constexpr float_t __get_maxVolume() const;

 bool __declspec(property(get=__get_adaptiveSfx, put=__set_adaptiveSfx))  adaptiveSfx;

constexpr void __set_adaptiveSfx(bool value) ;

constexpr bool __get_adaptiveSfx() const;


// Methods

// Ctor Parameters [CppParam { name: "volumeOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adaptiveSfx", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maxVolume", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AutomaticSFXVolume__InitData(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume) ;

/// @brief Method .ctor addr 0x20b9f34 size 0x3c virtual false final false
 void _ctor(float_t volumeOffset, bool adaptiveSfx, float_t maxVolume) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AutomaticSFXVolume
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4040))
// CS Name: AutomaticSFXVolume
class CORDL_TYPE AutomaticSFXVolume : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AutomaticSFXVolume() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: " const&", def_value: None }]
constexpr AutomaticSFXVolume(AutomaticSFXVolume const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: "&&", def_value: None }]
constexpr AutomaticSFXVolume(AutomaticSFXVolume&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutomaticSFXVolume(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AutomaticSFXVolume& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutomaticSFXVolume& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutomaticSFXVolume& operator=(AutomaticSFXVolume&& o) noexcept = default;
  constexpr AutomaticSFXVolume& operator=(AutomaticSFXVolume const& o) noexcept = default;
                


// Fields

/// @brief Field kBaseVolume offset 0
static constexpr float_t  kBaseVolume{0.4};

 GlobalNamespace::AutomaticSFXVolumeParamsSO __declspec(property(get=__get__params, put=__set__params))  _params;

constexpr void __set__params(GlobalNamespace::AutomaticSFXVolumeParamsSO value) ;

constexpr GlobalNamespace::AutomaticSFXVolumeParamsSO __get__params() const;

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;

 GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData __get__initData() const;

 float_t __declspec(property(get=__get__sampleRate, put=__set__sampleRate))  _sampleRate;

constexpr void __set__sampleRate(float_t value) ;

constexpr float_t __get__sampleRate() const;

 float_t __declspec(property(get=__get__volume, put=__set__volume))  _volume;

constexpr void __set__volume(float_t value) ;

constexpr float_t __get__volume() const;

 float_t __declspec(property(get=__get__envelope, put=__set__envelope))  _envelope;

constexpr void __set__envelope(float_t value) ;

constexpr float_t __get__envelope() const;

 float_t __declspec(property(get=__get__attackSamples, put=__set__attackSamples))  _attackSamples;

constexpr void __set__attackSamples(float_t value) ;

constexpr float_t __get__attackSamples() const;

 float_t __declspec(property(get=__get__releaseSamples, put=__set__releaseSamples))  _releaseSamples;

constexpr void __set__releaseSamples(float_t value) ;

constexpr float_t __get__releaseSamples() const;

 float_t __declspec(property(get=__get__attackCoef, put=__set__attackCoef))  _attackCoef;

constexpr void __set__attackCoef(float_t value) ;

constexpr float_t __get__attackCoef() const;

 float_t __declspec(property(get=__get__releaseCoef, put=__set__releaseCoef))  _releaseCoef;

constexpr void __set__releaseCoef(float_t value) ;

constexpr float_t __get__releaseCoef() const;

 float_t __declspec(property(get=__get__maxVolume, put=__set__maxVolume))  _maxVolume;

constexpr void __set__maxVolume(float_t value) ;

constexpr float_t __get__maxVolume() const;


// Methods

/// @brief Method Start addr 0x20b9c74 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x20b9cf0 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method OnValidate addr 0x20b9d78 size 0x4 virtual false final false
 void OnValidate() ;

/// @brief Method RecalculateParams addr 0x20b9c78 size 0x78 virtual false final false
 void RecalculateParams() ;

/// @brief Method OnAudioFilterRead addr 0x20b9d7c size 0x154 virtual false final false
 void OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels) ;

/// @brief Method Update addr 0x20b9ed0 size 0x50 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit AutomaticSFXVolume() ;

/// @brief Method .ctor addr 0x20b9f20 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AutomaticSFXVolume);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume, "", "AutomaticSFXVolume");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AutomaticSFXVolume__InitData, "", "AutomaticSFXVolume/InitData");
