#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class AudioMixerProperties;
}
// Type: UnityEngine.Timeline::AudioMixerProperties
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14077))
// CS Name: UnityEngine.Timeline.AudioMixerProperties
class CORDL_TYPE AudioMixerProperties : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioMixerProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: " const&", def_value: None }]
constexpr AudioMixerProperties(AudioMixerProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerProperties", modifiers: "&&", def_value: None }]
constexpr AudioMixerProperties(AudioMixerProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioMixerProperties(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr AudioMixerProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioMixerProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioMixerProperties& operator=(AudioMixerProperties&& o) noexcept = default;
  constexpr AudioMixerProperties& operator=(AudioMixerProperties const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_volume, put=__set_volume))  volume;

constexpr void __set_volume(float_t value) ;

constexpr float_t __get_volume() const;

 float_t __declspec(property(get=__get_stereoPan, put=__set_stereoPan))  stereoPan;

constexpr void __set_stereoPan(float_t value) ;

constexpr float_t __get_stereoPan() const;

 float_t __declspec(property(get=__get_spatialBlend, put=__set_spatialBlend))  spatialBlend;

constexpr void __set_spatialBlend(float_t value) ;

constexpr float_t __get_spatialBlend() const;


// Methods

/// @brief Method PrepareFrame addr 0x2ac9154 size 0x234 virtual true final false
 void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

// Ctor Parameters []
explicit AudioMixerProperties() ;

/// @brief Method .ctor addr 0x2ac9388 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::AudioMixerProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioMixerProperties, "UnityEngine.Timeline", "AudioMixerProperties");
