#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Type: Libraries.HM.HMLib.VR::HapticPresetSO
namespace Libraries::HM::HMLib::VR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13942))
// CS Name: Libraries.HM.HMLib.VR.HapticPresetSO
class CORDL_TYPE HapticPresetSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HapticPresetSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: " const&", def_value: None }]
constexpr HapticPresetSO(HapticPresetSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: "&&", def_value: None }]
constexpr HapticPresetSO(HapticPresetSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HapticPresetSO(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr HapticPresetSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HapticPresetSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HapticPresetSO& operator=(HapticPresetSO&& o) noexcept = default;
  constexpr HapticPresetSO& operator=(HapticPresetSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 float_t __declspec(property(get=__get__strength, put=__set__strength))  _strength;

constexpr void __set__strength(float_t value) ;

constexpr float_t __get__strength() const;

 float_t __declspec(property(get=__get__frequency, put=__set__frequency))  _frequency;

constexpr void __set__frequency(float_t value) ;

constexpr float_t __get__frequency() const;

 bool __declspec(property(get=__get__continuous, put=__set__continuous))  _continuous;

constexpr void __set__continuous(bool value) ;

constexpr bool __get__continuous() const;

 bool __declspec(property(get=__get__useAdvancedHapticsOnSupportedPlatforms, put=__set__useAdvancedHapticsOnSupportedPlatforms))  _useAdvancedHapticsOnSupportedPlatforms;

constexpr void __set__useAdvancedHapticsOnSupportedPlatforms(bool value) ;

constexpr bool __get__useAdvancedHapticsOnSupportedPlatforms() const;

 ::UnityEngine::AudioClip __declspec(property(get=__get__ps5HapticsClip, put=__set__ps5HapticsClip))  _ps5HapticsClip;

constexpr void __set__ps5HapticsClip(::UnityEngine::AudioClip value) ;

constexpr ::UnityEngine::AudioClip __get__ps5HapticsClip() const;


// Methods

/// @brief Method CopyFrom addr 0x1f8f268 size 0x3c virtual false final false
 void CopyFrom(::Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset) ;

// Ctor Parameters []
explicit HapticPresetSO() ;

/// @brief Method .ctor addr 0x1f8f2a4 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Libraries::HM::HMLib::VR
} // end anonymous namespace
NEED_NO_BOX(::Libraries::HM::HMLib::VR::HapticPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::Libraries::HM::HMLib::VR::HapticPresetSO, "Libraries.HM.HMLib.VR", "HapticPresetSO");
