#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class VFXController;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController__Factory;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController__Factory;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
// Type: ::MultiplayerLobbyAvatarController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4100))
// CS Name: MultiplayerLobbyAvatarController
class CORDL_TYPE MultiplayerLobbyAvatarController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DespawnAnimationCoroutine_d__12 = GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12;

using _ShowDespawnAnimationAndDestroy_d__10 = GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10;

using _SpawnAnimationCoroutine_d__8 = GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8;

using Factory = GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController__Factory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerLobbyAvatarController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAvatarController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyAvatarController(MultiplayerLobbyAvatarController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyAvatarController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyAvatarController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyAvatarController& operator=(MultiplayerLobbyAvatarController&& o) noexcept = default;
  constexpr MultiplayerLobbyAvatarController& operator=(MultiplayerLobbyAvatarController const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__spawnEffect, put=__set__spawnEffect))  _spawnEffect;

constexpr void __set__spawnEffect(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__spawnEffect() const;

 GlobalNamespace::VFXController __declspec(property(get=__get__despawnVFXController, put=__set__despawnVFXController))  _despawnVFXController;

constexpr void __set__despawnVFXController(GlobalNamespace::VFXController value) ;

constexpr GlobalNamespace::VFXController __get__despawnVFXController() const;

 float_t __declspec(property(get=__get__spawnAvatarDelay, put=__set__spawnAvatarDelay))  _spawnAvatarDelay;

constexpr void __set__spawnAvatarDelay(float_t value) ;

constexpr float_t __get__spawnAvatarDelay() const;

 float_t __declspec(property(get=__get__despawnAvatarDelay, put=__set__despawnAvatarDelay))  _despawnAvatarDelay;

constexpr void __set__despawnAvatarDelay(float_t value) ;

constexpr float_t __get__despawnAvatarDelay() const;

 float_t __declspec(property(get=__get__destroyAvatarDelay, put=__set__destroyAvatarDelay))  _destroyAvatarDelay;

constexpr void __set__destroyAvatarDelay(float_t value) ;

constexpr float_t __get__destroyAvatarDelay() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__visualObjects, put=__set__visualObjects))  _visualObjects;

constexpr void __set__visualObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__visualObjects() const;


// Methods

/// @brief Method ShowSpawnAnimation addr 0x20c3ab4 size 0xb0 virtual false final false
 void ShowSpawnAnimation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method SpawnAnimationCoroutine addr 0x20c3bcc size 0x68 virtual false final false
 System::Collections::IEnumerator SpawnAnimationCoroutine() ;

/// @brief Method ActivateVisualObjects addr 0x20c3b64 size 0x68 virtual false final false
 void ActivateVisualObjects(bool on) ;

/// @brief Method ShowDespawnAnimationAndDestroy addr 0x20c3c5c size 0x68 virtual false final false
 System::Collections::IEnumerator ShowDespawnAnimationAndDestroy() ;

/// @brief Method DestroySelf addr 0x20c3cec size 0x6c virtual false final false
 void DestroySelf() ;

/// @brief Method DespawnAnimationCoroutine addr 0x20c3d58 size 0x68 virtual false final false
 System::Collections::IEnumerator DespawnAnimationCoroutine() ;

static GlobalNamespace::MultiplayerLobbyAvatarController New_ctor() ;

/// @brief Method .ctor addr 0x20c3de8 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10947), inst: 3368 }), TypeDefinitionIndex(TypeDefinitionIndex(12720)), TypeDefinitionIndex(TypeDefinitionIndex(4100)), TypeDefinitionIndex(TypeDefinitionIndex(10947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4096))
// CS Name: MultiplayerLobbyAvatarController::Factory
class CORDL_TYPE GlobalNamespace__MultiplayerLobbyAvatarController__Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerLobbyAvatarController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerLobbyAvatarController__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController__Factory", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory(GlobalNamespace__MultiplayerLobbyAvatarController__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController__Factory", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory(GlobalNamespace__MultiplayerLobbyAvatarController__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLobbyAvatarController__Factory(void* ptr) noexcept : Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerLobbyAvatarController>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory& operator=(GlobalNamespace__MultiplayerLobbyAvatarController__Factory&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLobbyAvatarController__Factory& operator=(GlobalNamespace__MultiplayerLobbyAvatarController__Factory const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController__Factory New_ctor() ;

/// @brief Method .ctor addr 0x20c3e08 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SpawnAnimationCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4097))
// CS Name: MultiplayerLobbyAvatarController::<SpawnAnimationCoroutine>d__8
class CORDL_TYPE GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8(GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8(GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerLobbyAvatarController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerLobbyAvatarController value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c3c34 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c3e50 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c3e54 size 0xb4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c3f08 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c3f10 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c3f50 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ShowDespawnAnimationAndDestroy>d__10
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4098))
// CS Name: MultiplayerLobbyAvatarController::<ShowDespawnAnimationAndDestroy>d__10
class CORDL_TYPE GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10(GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10(GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerLobbyAvatarController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerLobbyAvatarController value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c3cc4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c3f58 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c3f5c size 0x70 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c3fcc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c3fd4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c4014 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DespawnAnimationCoroutine>d__12
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4099))
// CS Name: MultiplayerLobbyAvatarController::<DespawnAnimationCoroutine>d__12
class CORDL_TYPE GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12(GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12(GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12& operator=(GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerLobbyAvatarController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerLobbyAvatarController value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c3dc0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c401c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c4020 size 0x108 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c4128 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c4130 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c4170 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController__Factory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController__Factory, "", "MultiplayerLobbyAvatarController/Factory");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___DespawnAnimationCoroutine_d__12, "", "MultiplayerLobbyAvatarController/<DespawnAnimationCoroutine>d__12");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___ShowDespawnAnimationAndDestroy_d__10, "", "MultiplayerLobbyAvatarController/<ShowDespawnAnimationAndDestroy>d__10");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLobbyAvatarController___SpawnAnimationCoroutine_d__8, "", "MultiplayerLobbyAvatarController/<SpawnAnimationCoroutine>d__8");
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyAvatarController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAvatarController, "", "MultiplayerLobbyAvatarController");
