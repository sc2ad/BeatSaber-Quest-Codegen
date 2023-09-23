#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRHapticsClip;
}
// Type: ::OVRHapticsClip
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8492))
// CS Name: OVRHapticsClip
class CORDL_TYPE OVRHapticsClip : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRHapticsClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: " const&", def_value: None }]
constexpr OVRHapticsClip(OVRHapticsClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHapticsClip", modifiers: "&&", def_value: None }]
constexpr OVRHapticsClip(OVRHapticsClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRHapticsClip(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRHapticsClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRHapticsClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRHapticsClip& operator=(OVRHapticsClip&& o) noexcept = default;
  constexpr OVRHapticsClip& operator=(OVRHapticsClip const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;

 int32_t __declspec(property(get=__get__Capacity_k__BackingField, put=__set__Capacity_k__BackingField))  _Capacity_k__BackingField;

constexpr void __set__Capacity_k__BackingField(int32_t value) ;

constexpr int32_t __get__Capacity_k__BackingField() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__Samples_k__BackingField, put=__set__Samples_k__BackingField))  _Samples_k__BackingField;

constexpr void __set__Samples_k__BackingField(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__Samples_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;

 int32_t __declspec(property(get=get_Capacity, put=set_Capacity))  Capacity;

 ::ArrayW<uint8_t> __declspec(property(get=get_Samples, put=set_Samples))  Samples;


// Methods

/// @brief Method get_Count addr 0x25bbab0 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x25bbab8 size 0x8 virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method get_Capacity addr 0x25bbac0 size 0x8 virtual false final false
 int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x25bbac8 size 0x8 virtual false final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_Samples addr 0x25bbad0 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Samples() ;

/// @brief Method set_Samples addr 0x25bbad8 size 0x8 virtual false final false
 void set_Samples(::ArrayW<uint8_t> value) ;

// Ctor Parameters []
explicit OVRHapticsClip() ;

/// @brief Method .ctor addr 0x25bb760 size 0x100 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit OVRHapticsClip(int32_t capacity) ;

/// @brief Method .ctor addr 0x25bb888 size 0xd8 virtual false final false
 void _ctor(int32_t capacity) ;

// Ctor Parameters [CppParam { name: "samples", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "samplesCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit OVRHapticsClip(::ArrayW<uint8_t> samples, int32_t samplesCount) ;

/// @brief Method .ctor addr 0x25bbae0 size 0xc4 virtual false final false
 void _ctor(::ArrayW<uint8_t> samples, int32_t samplesCount) ;

// Ctor Parameters [CppParam { name: "a", ty: "GlobalNamespace::OVRHapticsClip", modifiers: "", def_value: None }, CppParam { name: "b", ty: "GlobalNamespace::OVRHapticsClip", modifiers: "", def_value: None }]
explicit OVRHapticsClip(GlobalNamespace::OVRHapticsClip a, GlobalNamespace::OVRHapticsClip b) ;

/// @brief Method .ctor addr 0x25bbba4 size 0x20c virtual false final false
 void _ctor(GlobalNamespace::OVRHapticsClip a, GlobalNamespace::OVRHapticsClip b) ;

// Ctor Parameters [CppParam { name: "audioClip", ty: "UnityEngine::AudioClip", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: None }]
explicit OVRHapticsClip(UnityEngine::AudioClip audioClip, int32_t channel) ;

/// @brief Method .ctor addr 0x25bbdb0 size 0xd8 virtual false final false
 void _ctor(UnityEngine::AudioClip audioClip, int32_t channel) ;

/// @brief Method WriteSample addr 0x25bb960 size 0x130 virtual false final false
 void WriteSample(uint8_t sample) ;

/// @brief Method Reset addr 0x25bc1b4 size 0x8 virtual false final false
 void Reset() ;

/// @brief Method InitializeFromAudioFloatTrack addr 0x25bbe88 size 0x32c virtual false final false
 void InitializeFromAudioFloatTrack(::ArrayW<float_t> sourceData, double_t sourceFrequency, int32_t sourceChannelCount, int32_t sourceChannel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRHapticsClip);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHapticsClip, "", "OVRHapticsClip");
