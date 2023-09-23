#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class BombCutSoundEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__BombCutSoundEffect__Pool;
}
// Type: ::BombCutSoundEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4043))
// CS Name: BombCutSoundEffect
class CORDL_TYPE BombCutSoundEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BombCutSoundEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffect", modifiers: " const&", def_value: None }]
constexpr BombCutSoundEffect(BombCutSoundEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffect", modifiers: "&&", def_value: None }]
constexpr BombCutSoundEffect(BombCutSoundEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BombCutSoundEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BombCutSoundEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BombCutSoundEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BombCutSoundEffect& operator=(BombCutSoundEffect&& o) noexcept = default;
  constexpr BombCutSoundEffect& operator=(BombCutSoundEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 System::Action_1<GlobalNamespace::BombCutSoundEffect> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect> value) ;

constexpr System::Action_1<GlobalNamespace::BombCutSoundEffect> __get_didFinishEvent() const;

 GlobalNamespace::Saber __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__saber() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x20b9fd0 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect> value) ;

/// @brief Method remove_didFinishEvent addr 0x20ba080 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::BombCutSoundEffect> value) ;

/// @brief Method Init addr 0x20ba130 size 0x74 virtual false final false
 void Init(UnityEngine::AudioClip audioClip, GlobalNamespace::Saber saber, float_t volume) ;

/// @brief Method LateUpdate addr 0x20ba1a4 size 0x90 virtual false final false
 void LateUpdate() ;

/// @brief Method StopPlayingAndFinish addr 0x20ba234 size 0x50 virtual false final false
 void StopPlayingAndFinish() ;

// Ctor Parameters []
explicit BombCutSoundEffect() ;

/// @brief Method .ctor addr 0x20ba284 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 274 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4043))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4042))
// CS Name: BombCutSoundEffect::Pool
class CORDL_TYPE GlobalNamespace__BombCutSoundEffect__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::BombCutSoundEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__BombCutSoundEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BombCutSoundEffect__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BombCutSoundEffect__Pool(GlobalNamespace__BombCutSoundEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BombCutSoundEffect__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BombCutSoundEffect__Pool(GlobalNamespace__BombCutSoundEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BombCutSoundEffect__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::BombCutSoundEffect>(ptr) {
}


  constexpr GlobalNamespace__BombCutSoundEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BombCutSoundEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BombCutSoundEffect__Pool& operator=(GlobalNamespace__BombCutSoundEffect__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__BombCutSoundEffect__Pool& operator=(GlobalNamespace__BombCutSoundEffect__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BombCutSoundEffect__Pool() ;

/// @brief Method .ctor addr 0x20ba28c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BombCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombCutSoundEffect, "", "BombCutSoundEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool, "", "BombCutSoundEffect/Pool");
