#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPlayerBase;
}
// Type: ::AudioPlayerBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4035))
// CS Name: AudioPlayerBase
class CORDL_TYPE AudioPlayerBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioPlayerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: " const&", def_value: None }]
constexpr AudioPlayerBase(AudioPlayerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayerBase", modifiers: "&&", def_value: None }]
constexpr AudioPlayerBase(AudioPlayerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioPlayerBase(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioPlayerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioPlayerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioPlayerBase& operator=(AudioPlayerBase&& o) noexcept = default;
  constexpr AudioPlayerBase& operator=(AudioPlayerBase const& o) noexcept = default;
                


// Properties

 ::UnityEngine::AudioClip __declspec(property(get=get_activeAudioClip))  activeAudioClip;


// Methods

/// @brief Method get_activeAudioClip addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::AudioClip get_activeAudioClip() ;

/// @brief Method FadeOut addr 0x0 size 0xffffffffffffffff virtual true final false
 void FadeOut(float_t duration) ;

/// @brief Method PauseCurrentChannel addr 0x0 size 0xffffffffffffffff virtual true final false
 void PauseCurrentChannel() ;

/// @brief Method UnPauseCurrentChannel addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnPauseCurrentChannel() ;

// Ctor Parameters []
explicit AudioPlayerBase() ;

/// @brief Method .ctor addr 0x20b9078 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AudioPlayerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPlayerBase, "", "AudioPlayerBase");
