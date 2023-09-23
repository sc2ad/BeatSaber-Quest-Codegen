#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlayersModel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
namespace GlobalNamespace {
class MultiplayerMockSettings;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__AppInit__AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class GlobalNamespace__AppInit___StartCoroutine_d__11;
}
namespace GlobalNamespace {
class GlobalNamespace__AppInit____c;
}
// Type: ::AppStartType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4010))
// CS Name: AppInit::AppStartType
struct CORDL_TYPE GlobalNamespace__AppInit__AppStartType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AppInit__AppStartType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__AppInit__AppStartType(GlobalNamespace__AppInit__AppStartType const&) = default;
                    constexpr GlobalNamespace__AppInit__AppStartType(GlobalNamespace__AppInit__AppStartType&&) = default;
                    constexpr GlobalNamespace__AppInit__AppStartType& operator=(GlobalNamespace__AppInit__AppStartType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AppInit__AppStartType& operator=(GlobalNamespace__AppInit__AppStartType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AppInit__AppStartType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__AppInit__AppStartType_Unwrapped : int32_t {
__AppStart = 0,
__AppRestart = 1,
__MultiSceneEditor = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__AppInit__AppStartType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__AppInit__AppStartType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AppStart offset 0
static GlobalNamespace::GlobalNamespace__AppInit__AppStartType const AppStart;

/// @brief Field AppRestart offset 0
static GlobalNamespace::GlobalNamespace__AppInit__AppStartType const AppRestart;

/// @brief Field MultiSceneEditor offset 0
static GlobalNamespace::GlobalNamespace__AppInit__AppStartType const MultiSceneEditor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4011))
// CS Name: AppInit::<>c
class CORDL_TYPE GlobalNamespace__AppInit____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__AppInit____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AppInit____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AppInit____c(GlobalNamespace__AppInit____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AppInit____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AppInit____c(GlobalNamespace__AppInit____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AppInit____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AppInit____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AppInit____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AppInit____c& operator=(GlobalNamespace__AppInit____c&& o) noexcept = default;
  constexpr GlobalNamespace__AppInit____c& operator=(GlobalNamespace__AppInit____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__AppInit____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__AppInit____c value) ;

static GlobalNamespace::GlobalNamespace__AppInit____c __get___9() ;

static System::Func_1<bool> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_1<bool> value) ;

static System::Func_1<bool> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AppInit____c() ;

/// @brief Method .ctor addr 0x20b4468 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <StartCoroutine>b__11_0 addr 0x20b4470 size 0x8 virtual false final false
 bool _StartCoroutine_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<StartCoroutine>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4012))
// CS Name: AppInit::<StartCoroutine>d__11
class CORDL_TYPE GlobalNamespace__AppInit___StartCoroutine_d__11 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__AppInit___StartCoroutine_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AppInit___StartCoroutine_d__11", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AppInit___StartCoroutine_d__11(GlobalNamespace__AppInit___StartCoroutine_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AppInit___StartCoroutine_d__11", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AppInit___StartCoroutine_d__11(GlobalNamespace__AppInit___StartCoroutine_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AppInit___StartCoroutine_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AppInit___StartCoroutine_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AppInit___StartCoroutine_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AppInit___StartCoroutine_d__11& operator=(GlobalNamespace__AppInit___StartCoroutine_d__11&& o) noexcept = default;
  constexpr GlobalNamespace__AppInit___StartCoroutine_d__11& operator=(GlobalNamespace__AppInit___StartCoroutine_d__11 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::AppInit __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AppInit value) ;

constexpr GlobalNamespace::AppInit __get___4__this() const;

 GlobalNamespace::GlobalNamespace__AppInit__AppStartType __declspec(property(get=__get__startType_5__2, put=__set__startType_5__2))  _startType_5__2;

constexpr void __set__startType_5__2(GlobalNamespace::GlobalNamespace__AppInit__AppStartType value) ;

constexpr GlobalNamespace::GlobalNamespace__AppInit__AppStartType __get__startType_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AppInit___StartCoroutine_d__11(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20b41c4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20b4478 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20b447c size 0x200 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20b467c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20b4684 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20b46c4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4013))
// CS Name: AppInit
class CORDL_TYPE AppInit : public Zenject::MonoInstaller {
public:
// Declarations
using _StartCoroutine_d__11 = GlobalNamespace::GlobalNamespace__AppInit___StartCoroutine_d__11;

using __c = GlobalNamespace::GlobalNamespace__AppInit____c;

using AppStartType = GlobalNamespace::GlobalNamespace__AppInit__AppStartType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AppInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: " const&", def_value: None }]
constexpr AppInit(AppInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
constexpr AppInit(AppInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppInit(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr AppInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppInit& operator=(AppInit&& o) noexcept = default;
  constexpr AppInit& operator=(AppInit const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__cameraGO, put=__set__cameraGO))  _cameraGO;

constexpr void __set__cameraGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__cameraGO() const;

 GlobalNamespace::MultiplayerMockSettings __declspec(property(get=__get__multiplayerMockSettings, put=__set__multiplayerMockSettings))  _multiplayerMockSettings;

constexpr void __set__multiplayerMockSettings(GlobalNamespace::MultiplayerMockSettings value) ;

constexpr GlobalNamespace::MultiplayerMockSettings __get__multiplayerMockSettings() const;

 GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData value) ;

constexpr GlobalNamespace::GlobalNamespace__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData __get__sceneSetupData() const;

 GlobalNamespace::AppInitSetupData __declspec(property(get=__get__setupData, put=__set__setupData))  _setupData;

constexpr void __set__setupData(GlobalNamespace::AppInitSetupData value) ;

constexpr GlobalNamespace::AppInitSetupData __get__setupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Properties

 GlobalNamespace::GameScenesManager __declspec(property(get=get_gameScenesManager))  gameScenesManager;

 bool __declspec(property(get=get_isTestContext))  isTestContext;


// Methods

/// @brief Method get_gameScenesManager addr 0x20b3fcc size 0x8 virtual false final false
 GlobalNamespace::GameScenesManager get_gameScenesManager() ;

/// @brief Method get_isTestContext addr 0x20b3fd4 size 0x20 virtual false final false
 bool get_isTestContext() ;

/// @brief Method Start addr 0x20b3ff4 size 0xd4 virtual true final false
 void Start() ;

/// @brief Method StartCoroutine addr 0x20b415c size 0x68 virtual false final false
 System::Collections::IEnumerator StartCoroutine() ;

/// @brief Method OnDestroy addr 0x20b41ec size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeforeDismissingScenes addr 0x20b42c0 size 0xa0 virtual false final false
 void HandleBeforeDismissingScenes() ;

/// @brief Method GetMockPlayersModel addr 0x20b4360 size 0x34 virtual false final false
 GlobalNamespace::MockPlayersModel GetMockPlayersModel() ;

/// @brief Method GetAppStartType addr 0x20b40c8 size 0x94 virtual false final false
 GlobalNamespace::GlobalNamespace__AppInit__AppStartType GetAppStartType() ;

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x0 size 0xffffffffffffffff virtual true final false
 void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetup addr 0x0 size 0xffffffffffffffff virtual true final false
 void RepeatableSetup() ;

/// @brief Method TransitionToNextScene addr 0x0 size 0xffffffffffffffff virtual true final false
 void TransitionToNextScene() ;

// Ctor Parameters []
explicit AppInit() ;

/// @brief Method .ctor addr 0x20b4394 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AppInit__AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInit, "", "AppInit");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AppInit___StartCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AppInit___StartCoroutine_d__11, "", "AppInit/<StartCoroutine>d__11");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AppInit____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AppInit____c, "", "AppInit/<>c");
