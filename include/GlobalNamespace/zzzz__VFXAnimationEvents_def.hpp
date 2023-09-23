#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Animation;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent;
}
namespace GlobalNamespace {
class VFXAnimationEvents;
}
// Type: ::VFXAnimationEvent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13847))
// CS Name: VFXAnimationEvents::VFXAnimationEvent
class CORDL_TYPE GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent(GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent(GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent& operator=(GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent&& o) noexcept = default;
  constexpr GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent& operator=(GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__particleSystems() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=get_particleSystems))  particleSystems;


// Methods

/// @brief Method get_name addr 0x1f7d44c size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_particleSystems addr 0x1f7d454 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::ParticleSystem> get_particleSystems() ;

// Ctor Parameters []
explicit GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent() ;

/// @brief Method .ctor addr 0x1f7d45c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VFXAnimationEvents
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13848))
// CS Name: VFXAnimationEvents
class CORDL_TYPE VFXAnimationEvents : public UnityEngine::MonoBehaviour {
public:
// Declarations
using VFXAnimationEvent = GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VFXAnimationEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "VFXAnimationEvents", modifiers: " const&", def_value: None }]
constexpr VFXAnimationEvents(VFXAnimationEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VFXAnimationEvents", modifiers: "&&", def_value: None }]
constexpr VFXAnimationEvents(VFXAnimationEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VFXAnimationEvents(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VFXAnimationEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VFXAnimationEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VFXAnimationEvents& operator=(VFXAnimationEvents&& o) noexcept = default;
  constexpr VFXAnimationEvents& operator=(VFXAnimationEvents const& o) noexcept = default;
                


// Fields

 UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(UnityEngine::Animation value) ;

constexpr UnityEngine::Animation __get__animation() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent> __declspec(property(get=__get__animationEvents, put=__set__animationEvents))  _animationEvents;

constexpr void __set__animationEvents(::ArrayW<GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent> __get__animationEvents() const;

 System::Action __declspec(property(get=__get_animationDidPauseEvent, put=__set_animationDidPauseEvent))  animationDidPauseEvent;

constexpr void __set_animationDidPauseEvent(System::Action value) ;

constexpr System::Action __get_animationDidPauseEvent() const;

 System::Action __declspec(property(get=__get_spawnCharacterEvent, put=__set_spawnCharacterEvent))  spawnCharacterEvent;

constexpr void __set_spawnCharacterEvent(System::Action value) ;

constexpr System::Action __get_spawnCharacterEvent() const;

 System::Action __declspec(property(get=__get_despawnCharacterEvent, put=__set_despawnCharacterEvent))  despawnCharacterEvent;

constexpr void __set_despawnCharacterEvent(System::Action value) ;

constexpr System::Action __get_despawnCharacterEvent() const;


// Methods

/// @brief Method add_animationDidPauseEvent addr 0x1f7ca18 size 0x9c virtual false final false
 void add_animationDidPauseEvent(System::Action value) ;

/// @brief Method remove_animationDidPauseEvent addr 0x1f7cab4 size 0x9c virtual false final false
 void remove_animationDidPauseEvent(System::Action value) ;

/// @brief Method add_spawnCharacterEvent addr 0x1f7cb50 size 0x9c virtual false final false
 void add_spawnCharacterEvent(System::Action value) ;

/// @brief Method remove_spawnCharacterEvent addr 0x1f7cbec size 0x9c virtual false final false
 void remove_spawnCharacterEvent(System::Action value) ;

/// @brief Method add_despawnCharacterEvent addr 0x1f7cc88 size 0x9c virtual false final false
 void add_despawnCharacterEvent(System::Action value) ;

/// @brief Method remove_despawnCharacterEvent addr 0x1f7cd24 size 0x9c virtual false final false
 void remove_despawnCharacterEvent(System::Action value) ;

/// @brief Method PlayEvent addr 0x1f7cdc0 size 0xc4 virtual false final false
 void PlayEvent(::StringW eventName) ;

/// @brief Method PauseAnimation addr 0x1f7ce84 size 0x2cc virtual false final false
 void PauseAnimation() ;

/// @brief Method SpawnCharacterEvent addr 0x1f7d150 size 0x1c virtual false final false
 void SpawnCharacterEvent() ;

/// @brief Method DeSpawnCharacterEvent addr 0x1f7d16c size 0x1c virtual false final false
 void DeSpawnCharacterEvent() ;

/// @brief Method ResumeAnimation addr 0x1f7d188 size 0x2bc virtual false final false
 void ResumeAnimation() ;

// Ctor Parameters []
explicit VFXAnimationEvents() ;

/// @brief Method .ctor addr 0x1f7d444 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VFXAnimationEvents__VFXAnimationEvent, "", "VFXAnimationEvents/VFXAnimationEvent");
NEED_NO_BOX(GlobalNamespace::VFXAnimationEvents);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXAnimationEvents, "", "VFXAnimationEvents");
