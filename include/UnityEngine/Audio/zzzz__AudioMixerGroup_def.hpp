#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
// Type: UnityEngine.Audio::AudioMixerGroup
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15613))
// CS Name: UnityEngine.Audio.AudioMixerGroup
class CORDL_TYPE AudioMixerGroup : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioMixerGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: " const&", def_value: None }]
constexpr AudioMixerGroup(AudioMixerGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: "&&", def_value: None }]
constexpr AudioMixerGroup(AudioMixerGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioMixerGroup(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AudioMixerGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioMixerGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioMixerGroup& operator=(AudioMixerGroup&& o) noexcept = default;
  constexpr AudioMixerGroup& operator=(AudioMixerGroup const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
NEED_NO_BOX(UnityEngine::Audio::AudioMixerGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerGroup, "UnityEngine.Audio", "AudioMixerGroup");
