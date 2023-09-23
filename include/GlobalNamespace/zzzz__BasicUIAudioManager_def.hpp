#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicUIAudioManager;
}
// Type: ::BasicUIAudioManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5492))
// CS Name: BasicUIAudioManager
class CORDL_TYPE BasicUIAudioManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BasicUIAudioManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: " const&", def_value: None }]
constexpr BasicUIAudioManager(BasicUIAudioManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicUIAudioManager", modifiers: "&&", def_value: None }]
constexpr BasicUIAudioManager(BasicUIAudioManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicUIAudioManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BasicUIAudioManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicUIAudioManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicUIAudioManager& operator=(BasicUIAudioManager&& o) noexcept = default;
  constexpr BasicUIAudioManager& operator=(BasicUIAudioManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::Signal> __declspec(property(get=__get__buttonClickEvents, put=__set__buttonClickEvents))  _buttonClickEvents;

constexpr void __set__buttonClickEvents(::ArrayW<GlobalNamespace::Signal> value) ;

constexpr ::ArrayW<GlobalNamespace::Signal> __get__buttonClickEvents() const;

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__clickSounds, put=__set__clickSounds))  _clickSounds;

constexpr void __set__clickSounds(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__clickSounds() const;

 float_t __declspec(property(get=__get__minPitch, put=__set__minPitch))  _minPitch;

constexpr void __set__minPitch(float_t value) ;

constexpr float_t __get__minPitch() const;

 float_t __declspec(property(get=__get__maxPitch, put=__set__maxPitch))  _maxPitch;

constexpr void __set__maxPitch(float_t value) ;

constexpr float_t __get__maxPitch() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__randomSoundPicker, put=__set__randomSoundPicker))  _randomSoundPicker;

constexpr void __set__randomSoundPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__randomSoundPicker() const;


// Methods

/// @brief Method Start addr 0x211c40c size 0x98 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x211c4a4 size 0xd4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x211c578 size 0xd4 virtual false final false
 void OnDisable() ;

/// @brief Method HandleButtonClickEvent addr 0x211c64c size 0xd0 virtual false final false
 void HandleButtonClickEvent() ;

// Ctor Parameters []
explicit BasicUIAudioManager() ;

/// @brief Method .ctor addr 0x211c71c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicUIAudioManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicUIAudioManager, "", "BasicUIAudioManager");
