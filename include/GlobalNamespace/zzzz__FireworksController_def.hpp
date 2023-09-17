#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__FireworkItemController__Pool;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Vector3;
}
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
// Forward declare root types
namespace GlobalNamespace {
class FireworksController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8;
}
// Type: ::<SpawningCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4962))
// CS Name: FireworksController::<SpawningCoroutine>d__8
class CORDL_TYPE ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__FireworksController___SpawningCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__FireworksController___SpawningCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8(____GlobalNamespace__FireworksController___SpawningCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__FireworksController___SpawningCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8(____GlobalNamespace__FireworksController___SpawningCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8& operator=(____GlobalNamespace__FireworksController___SpawningCoroutine_d__8&& o) noexcept = default;
  constexpr ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8& operator=(____GlobalNamespace__FireworksController___SpawningCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::FireworksController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::FireworksController value) ;

constexpr ::GlobalNamespace::FireworksController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__FireworksController___SpawningCoroutine_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x224fcc8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224fe1c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224fe20 size 0x2f4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2250114 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x225011c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x225015c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FireworksController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4963))
// CS Name: FireworksController
class CORDL_TYPE FireworksController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SpawningCoroutine_d__8 = ::GlobalNamespace::____GlobalNamespace__FireworksController___SpawningCoroutine_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FireworksController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: " const&", def_value: None }]
constexpr FireworksController(FireworksController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworksController", modifiers: "&&", def_value: None }]
constexpr FireworksController(FireworksController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FireworksController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FireworksController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FireworksController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FireworksController& operator=(FireworksController&& o) noexcept = default;
  constexpr FireworksController& operator=(FireworksController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__spawnSize, put=__set__spawnSize))  _spawnSize;

constexpr void __set__spawnSize(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__spawnSize() const;

 float_t __declspec(property(get=__get__minSpawnInterval, put=__set__minSpawnInterval))  _minSpawnInterval;

constexpr void __set__minSpawnInterval(float_t value) ;

constexpr float_t __get__minSpawnInterval() const;

 float_t __declspec(property(get=__get__maxSpawnInterval, put=__set__maxSpawnInterval))  _maxSpawnInterval;

constexpr void __set__maxSpawnInterval(float_t value) ;

constexpr float_t __get__maxSpawnInterval() const;

 ::ArrayW<::GlobalNamespace::DirectionalLight> __declspec(property(get=__get__directionalLights, put=__set__directionalLights))  _directionalLights;

constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight> __get__directionalLights() const;

 float_t __declspec(property(get=__get__lightsIntensity, put=__set__lightsIntensity))  _lightsIntensity;

constexpr void __set__lightsIntensity(float_t value) ;

constexpr float_t __get__lightsIntensity() const;

 int32_t __declspec(property(get=__get__currentLightId, put=__set__currentLightId))  _currentLightId;

constexpr void __set__currentLightId(int32_t value) ;

constexpr int32_t __get__currentLightId() const;

 ::GlobalNamespace::____GlobalNamespace__FireworkItemController__Pool __declspec(property(get=__get__fireworkItemPool, put=__set__fireworkItemPool))  _fireworkItemPool;

constexpr void __set__fireworkItemPool(::GlobalNamespace::____GlobalNamespace__FireworkItemController__Pool value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__FireworkItemController__Pool __get__fireworkItemPool() const;


// Methods

/// @brief Method OnEnable addr 0x224fc40 size 0x20 virtual false final false
 void OnEnable() ;

/// @brief Method SpawningCoroutine addr 0x224fc60 size 0x68 virtual false final false
 ::System::Collections::IEnumerator SpawningCoroutine() ;

/// @brief Method HandleFireworkItemControllerDidFinish addr 0x224fcf0 size 0xbc virtual false final false
 void HandleFireworkItemControllerDidFinish(::GlobalNamespace::FireworkItemController fireworkItemController) ;

/// @brief Method OnDrawGizmosSelected addr 0x224fdac size 0x54 virtual false final false
 void OnDrawGizmosSelected() ;

// Ctor Parameters []
explicit FireworksController() ;

/// @brief Method .ctor addr 0x224fe00 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FireworksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksController, "", "FireworksController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__FireworksController___SpawningCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__FireworksController___SpawningCoroutine_d__8, "", "FireworksController/<SpawningCoroutine>d__8");
