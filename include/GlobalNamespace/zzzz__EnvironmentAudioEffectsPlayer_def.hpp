#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
// Type: ::EnvironmentAudioEffectsPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4047))
// CS Name: EnvironmentAudioEffectsPlayer
class CORDL_TYPE EnvironmentAudioEffectsPlayer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EnvironmentAudioEffectsPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: " const&", def_value: None }]
constexpr EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "&&", def_value: None }]
constexpr EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentAudioEffectsPlayer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentAudioEffectsPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentAudioEffectsPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentAudioEffectsPlayer& operator=(EnvironmentAudioEffectsPlayer&& o) noexcept = default;
  constexpr EnvironmentAudioEffectsPlayer& operator=(EnvironmentAudioEffectsPlayer const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;


// Properties

 UnityEngine::AudioSource __declspec(property(get=get_audioSource))  audioSource;


// Methods

/// @brief Method get_audioSource addr 0x20bad44 size 0x8 virtual false final false
 UnityEngine::AudioSource get_audioSource() ;

/// @brief Method PlayEffect addr 0x20bad4c size 0x64 virtual false final false
 void PlayEffect(UnityEngine::AudioClip clip, float_t volume) ;

// Ctor Parameters []
explicit EnvironmentAudioEffectsPlayer() ;

/// @brief Method .ctor addr 0x20badb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentAudioEffectsPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentAudioEffectsPlayer, "", "EnvironmentAudioEffectsPlayer");
