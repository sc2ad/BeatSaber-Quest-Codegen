#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipQueue;
}
// Type: ::AudioClipQueue
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4029))
// CS Name: AudioClipQueue
class CORDL_TYPE AudioClipQueue : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AudioClipQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: " const&", def_value: None }]
constexpr AudioClipQueue(AudioClipQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "&&", def_value: None }]
constexpr AudioClipQueue(AudioClipQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioClipQueue(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioClipQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioClipQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioClipQueue& operator=(AudioClipQueue&& o) noexcept = default;
  constexpr AudioClipQueue& operator=(AudioClipQueue const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource() const;

 ::System::Collections::Generic::List_1<::UnityEngine::AudioClip> __declspec(property(get=__get__queue, put=__set__queue))  _queue;

constexpr void __set__queue(::System::Collections::Generic::List_1<::UnityEngine::AudioClip> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AudioClip> __get__queue() const;

 float_t __declspec(property(get=__get__delay, put=__set__delay))  _delay;

constexpr void __set__delay(float_t value) ;

constexpr float_t __get__delay() const;


// Methods

/// @brief Method Awake addr 0x20b85b4 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x20b85d4 size 0x140 virtual false final false
 void Update() ;

/// @brief Method PlayAudioClipWithDelay addr 0x20b8714 size 0xcc virtual false final false
 void PlayAudioClipWithDelay(::UnityEngine::AudioClip audioClip, float_t delay) ;

// Ctor Parameters []
explicit AudioClipQueue() ;

/// @brief Method .ctor addr 0x20b87e0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AudioClipQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipQueue, "", "AudioClipQueue");
