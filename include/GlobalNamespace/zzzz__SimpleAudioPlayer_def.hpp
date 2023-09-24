#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include <cmath>
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleAudioPlayer;
}
// Type: ::SimpleAudioPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4062))
// CS Name: SimpleAudioPlayer
class CORDL_TYPE SimpleAudioPlayer : public GlobalNamespace::AudioPlayerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SimpleAudioPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: " const&", def_value: None }]
constexpr SimpleAudioPlayer(SimpleAudioPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAudioPlayer", modifiers: "&&", def_value: None }]
constexpr SimpleAudioPlayer(SimpleAudioPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleAudioPlayer(void* ptr) noexcept : GlobalNamespace::AudioPlayerBase(ptr) {
}


  constexpr SimpleAudioPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleAudioPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleAudioPlayer& operator=(SimpleAudioPlayer&& o) noexcept = default;
  constexpr SimpleAudioPlayer& operator=(SimpleAudioPlayer const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__audioClip() const;

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__targetVolume, put=__set__targetVolume))  _targetVolume;

constexpr void __set__targetVolume(float_t value) ;

constexpr float_t __get__targetVolume() const;

 bool __declspec(property(get=__get__loop, put=__set__loop))  _loop;

constexpr void __set__loop(bool value) ;

constexpr bool __get__loop() const;

 float_t __declspec(property(get=__get__fadeSpeed, put=__set__fadeSpeed))  _fadeSpeed;

constexpr void __set__fadeSpeed(float_t value) ;

constexpr float_t __get__fadeSpeed() const;

 bool __declspec(property(get=__get__fadingIn, put=__set__fadingIn))  _fadingIn;

constexpr void __set__fadingIn(bool value) ;

constexpr bool __get__fadingIn() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_activeAudioClip))  activeAudioClip;


// Methods

/// @brief Method get_activeAudioClip addr 0x20bdb30 size 0x8 virtual true final false
 UnityEngine::AudioClip get_activeAudioClip() ;

/// @brief Method Start addr 0x20bdb38 size 0x80 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20bdbf4 size 0x100 virtual false final false
 void Update() ;

/// @brief Method FadeIn addr 0x20bdbb8 size 0x3c virtual false final false
 void FadeIn(float_t duration) ;

/// @brief Method FadeOut addr 0x20bdcf4 size 0x38 virtual true final false
 void FadeOut(float_t duration) ;

/// @brief Method PauseCurrentChannel addr 0x20bdd2c size 0x1c virtual true final false
 void PauseCurrentChannel() ;

/// @brief Method UnPauseCurrentChannel addr 0x20bdd48 size 0x1c virtual true final false
 void UnPauseCurrentChannel() ;

static GlobalNamespace::SimpleAudioPlayer New_ctor() ;

/// @brief Method .ctor addr 0x20bdd64 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SimpleAudioPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleAudioPlayer, "", "SimpleAudioPlayer");
