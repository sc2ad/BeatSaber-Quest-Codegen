#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFading;
}
// Type: ::AudioFading
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4030))
// CS Name: AudioFading
class CORDL_TYPE AudioFading : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AudioFading() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioFading", modifiers: " const&", def_value: None }]
constexpr AudioFading(AudioFading const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioFading", modifiers: "&&", def_value: None }]
constexpr AudioFading(AudioFading&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioFading(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioFading& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioFading& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioFading& operator=(AudioFading&& o) noexcept = default;
  constexpr AudioFading& operator=(AudioFading const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 bool __declspec(property(get=__get__fadeInOnStart, put=__set__fadeInOnStart))  _fadeInOnStart;

constexpr void __set__fadeInOnStart(bool value) ;

constexpr bool __get__fadeInOnStart() const;

 float_t __declspec(property(get=__get__targetVolume, put=__set__targetVolume))  _targetVolume;

constexpr void __set__targetVolume(float_t value) ;

constexpr float_t __get__targetVolume() const;


// Methods

/// @brief Method Start addr 0x20b885c size 0x5c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20b88dc size 0xd0 virtual false final false
 void Update() ;

/// @brief Method FadeOut addr 0x20b89ac size 0x20 virtual false final false
 void FadeOut() ;

/// @brief Method FadeIn addr 0x20b88b8 size 0x24 virtual false final false
 void FadeIn() ;

static GlobalNamespace::AudioFading New_ctor() ;

/// @brief Method .ctor addr 0x20b89cc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioFading);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioFading, "", "AudioFading");
