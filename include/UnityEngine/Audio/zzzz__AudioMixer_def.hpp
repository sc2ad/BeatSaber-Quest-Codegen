#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixer;
}
// Type: UnityEngine.Audio::AudioMixer
namespace UnityEngine::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15616))
// CS Name: UnityEngine.Audio.AudioMixer
class CORDL_TYPE AudioMixer : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioMixer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: " const&", def_value: None }]
constexpr AudioMixer(AudioMixer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixer", modifiers: "&&", def_value: None }]
constexpr AudioMixer(AudioMixer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioMixer(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AudioMixer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioMixer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioMixer& operator=(AudioMixer&& o) noexcept = default;
  constexpr AudioMixer& operator=(AudioMixer const& o) noexcept = default;
                


// Properties

 UnityEngine::Audio::AudioMixerUpdateMode __declspec(property(put=set_updateMode))  updateMode;


// Methods

/// @brief Method set_updateMode addr 0x2b26a78 size 0x44 virtual false final false
 void set_updateMode(UnityEngine::Audio::AudioMixerUpdateMode value) ;

/// @brief Method SetFloat addr 0x2b26abc size 0x54 virtual false final false
 bool SetFloat(::StringW name, float_t value) ;

/// @brief Method GetFloat addr 0x2b26b10 size 0x54 virtual false final false
 bool GetFloat(::StringW name, ByRef<float_t> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
NEED_NO_BOX(UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixer, "UnityEngine.Audio", "AudioMixer");
