#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioLowPassFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class MainAudioEffects;
}
// Type: ::MainAudioEffects
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4051))
// CS Name: MainAudioEffects
class CORDL_TYPE MainAudioEffects : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MainAudioEffects() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: " const&", def_value: None }]
constexpr MainAudioEffects(MainAudioEffects const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainAudioEffects", modifiers: "&&", def_value: None }]
constexpr MainAudioEffects(MainAudioEffects&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainAudioEffects(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MainAudioEffects& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainAudioEffects& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainAudioEffects& operator=(MainAudioEffects&& o) noexcept = default;
  constexpr MainAudioEffects& operator=(MainAudioEffects const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioLowPassFilter __declspec(property(get=__get__audioLowPassFilter, put=__set__audioLowPassFilter))  _audioLowPassFilter;

constexpr void __set__audioLowPassFilter(UnityEngine::AudioLowPassFilter value) ;

constexpr UnityEngine::AudioLowPassFilter __get__audioLowPassFilter() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

/// @brief Field kDefaultCutoffFrequency offset 0
static constexpr int32_t  kDefaultCutoffFrequency{22000};

/// @brief Field kLowPassCutoffFrequency offset 0
static constexpr int32_t  kLowPassCutoffFrequency{150};

 float_t __declspec(property(get=__get__targetFrequency, put=__set__targetFrequency))  _targetFrequency;

constexpr void __set__targetFrequency(float_t value) ;

constexpr float_t __get__targetFrequency() const;


// Methods

/// @brief Method Start addr 0x20bba14 size 0x34 virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x20bba48 size 0xbc virtual false final false
 void LateUpdate() ;

/// @brief Method ResumeNormalSound addr 0x20bbb04 size 0x28 virtual false final false
 void ResumeNormalSound() ;

/// @brief Method TriggerLowPass addr 0x20bbb2c size 0x3c virtual false final false
 void TriggerLowPass() ;

static GlobalNamespace::MainAudioEffects New_ctor() ;

/// @brief Method .ctor addr 0x20bbb68 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainAudioEffects);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainAudioEffects, "", "MainAudioEffects");
