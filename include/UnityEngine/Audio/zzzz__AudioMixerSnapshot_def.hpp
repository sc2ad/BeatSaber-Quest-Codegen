#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Type: UnityEngine.Audio::AudioMixerSnapshot
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15618))
// CS Name: UnityEngine.Audio.AudioMixerSnapshot
class CORDL_TYPE AudioMixerSnapshot : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioMixerSnapshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: " const&", def_value: None }]
constexpr AudioMixerSnapshot(AudioMixerSnapshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "&&", def_value: None }]
constexpr AudioMixerSnapshot(AudioMixerSnapshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioMixerSnapshot(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AudioMixerSnapshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioMixerSnapshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioMixerSnapshot& operator=(AudioMixerSnapshot&& o) noexcept = default;
  constexpr AudioMixerSnapshot& operator=(AudioMixerSnapshot const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
NEED_NO_BOX(UnityEngine::Audio::AudioMixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerSnapshot, "UnityEngine.Audio", "AudioMixerSnapshot");
