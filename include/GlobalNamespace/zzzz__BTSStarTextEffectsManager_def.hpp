#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BTSStarTextEventEffect;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class GlobalNamespace__BTSStarTextEffectController__Pool;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectsManager;
}
namespace GlobalNamespace {
class GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5;
}
// Type: ::<DespawnEffectDelayed>d__5
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3965))
// CS Name: BTSStarTextEffectsManager::<DespawnEffectDelayed>d__5
class CORDL_TYPE GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5& operator=(GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5&& o) noexcept = default;
  constexpr GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5& operator=(GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::BTSStarTextEffectController __declspec(property(get=__get_effectController, put=__set_effectController))  effectController;

constexpr void __set_effectController(GlobalNamespace::BTSStarTextEffectController value) ;

constexpr GlobalNamespace::BTSStarTextEffectController __get_effectController() const;

 GlobalNamespace::BTSStarTextEffectsManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BTSStarTextEffectsManager value) ;

constexpr GlobalNamespace::BTSStarTextEffectsManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20aadd0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20aae00 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20aae04 size 0xd8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20aaedc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20aaee4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20aaf24 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BTSStarTextEffectsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3966))
// CS Name: BTSStarTextEffectsManager
class CORDL_TYPE BTSStarTextEffectsManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DespawnEffectDelayed_d__5 = GlobalNamespace::GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BTSStarTextEffectsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectsManager", modifiers: " const&", def_value: None }]
constexpr BTSStarTextEffectsManager(BTSStarTextEffectsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectsManager", modifiers: "&&", def_value: None }]
constexpr BTSStarTextEffectsManager(BTSStarTextEffectsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSStarTextEffectsManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSStarTextEffectsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSStarTextEffectsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSStarTextEffectsManager& operator=(BTSStarTextEffectsManager&& o) noexcept = default;
  constexpr BTSStarTextEffectsManager& operator=(BTSStarTextEffectsManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BTSStarTextEventEffect __declspec(property(get=__get__btsStarTextEventEffect, put=__set__btsStarTextEventEffect))  _btsStarTextEventEffect;

constexpr void __set__btsStarTextEventEffect(GlobalNamespace::BTSStarTextEventEffect value) ;

constexpr GlobalNamespace::BTSStarTextEventEffect __get__btsStarTextEventEffect() const;

 GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool __declspec(property(get=__get__btsStarTextEffectControllerPool, put=__set__btsStarTextEffectControllerPool))  _btsStarTextEffectControllerPool;

constexpr void __set__btsStarTextEffectControllerPool(GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool __get__btsStarTextEffectControllerPool() const;


// Methods

/// @brief Method Start addr 0x20aaa58 size 0x88 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20aab90 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBTSStarTextEventEffect addr 0x20aacc8 size 0x94 virtual false final false
 void HandleBTSStarTextEventEffect(UnityEngine::Sprite sprite, UnityEngine::Transform parentTransform, float_t desiredAnimationLength) ;

/// @brief Method DespawnEffectDelayed addr 0x20aad5c size 0x74 virtual false final false
 System::Collections::IEnumerator DespawnEffectDelayed(GlobalNamespace::BTSStarTextEffectController effectController) ;

// Ctor Parameters []
explicit BTSStarTextEffectsManager() ;

/// @brief Method .ctor addr 0x20aadf8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSStarTextEffectsManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectsManager, "", "BTSStarTextEffectsManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BTSStarTextEffectsManager___DespawnEffectDelayed_d__5, "", "BTSStarTextEffectsManager/<DespawnEffectDelayed>d__5");
