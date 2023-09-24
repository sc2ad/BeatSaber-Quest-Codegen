#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager__ScenesStackData;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass32_0;
}
namespace Zenject {
class ZenjectSceneLoader;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass38_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameScenesManager__ScenePresentType;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass34_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass35_0;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameScenesManager__SceneDismissType;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass31_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__GameScenesManager__SceneDismissType;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameScenesManager__ScenePresentType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager__ScenesStackData;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass31_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GameScenesManager____c__DisplayClass38_0;
}
// Type: ::ScenesStackData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13855))
// CS Name: GameScenesManager::ScenesStackData
class CORDL_TYPE GlobalNamespace__GameScenesManager__ScenesStackData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameScenesManager__ScenesStackData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager__ScenesStackData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager__ScenesStackData(GlobalNamespace__GameScenesManager__ScenesStackData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager__ScenesStackData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager__ScenesStackData(GlobalNamespace__GameScenesManager__ScenesStackData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager__ScenesStackData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager__ScenesStackData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager__ScenesStackData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager__ScenesStackData& operator=(GlobalNamespace__GameScenesManager__ScenesStackData&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager__ScenesStackData& operator=(GlobalNamespace__GameScenesManager__ScenesStackData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__sceneNames_k__BackingField, put=__set__sceneNames_k__BackingField))  _sceneNames_k__BackingField;

constexpr void __set__sceneNames_k__BackingField(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__sceneNames_k__BackingField() const;

 Zenject::DiContainer __declspec(property(get=__get__container_k__BackingField, put=__set__container_k__BackingField))  _container_k__BackingField;

constexpr void __set__container_k__BackingField(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container_k__BackingField() const;


// Properties

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_sceneNames, put=set_sceneNames))  sceneNames;

 Zenject::DiContainer __declspec(property(get=get_container, put=set_container))  container;


// Methods

/// @brief Method get_sceneNames addr 0x1f80f8c size 0x8 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_sceneNames() ;

/// @brief Method set_sceneNames addr 0x1f80f94 size 0x8 virtual false final false
 void set_sceneNames(System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method get_container addr 0x1f80f9c size 0x8 virtual false final false
 Zenject::DiContainer get_container() ;

/// @brief Method set_container addr 0x1f80fa4 size 0x8 virtual false final false
 void set_container(Zenject::DiContainer value) ;

static GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData New_ctor(System::Collections::Generic::List_1<::StringW> sceneNames) ;

/// @brief Method .ctor addr 0x1f7ebb8 size 0x28 virtual false final false
 void _ctor(System::Collections::Generic::List_1<::StringW> sceneNames) ;

/// @brief Method SetDiContainer addr 0x1f80fac size 0x8 virtual false final false
 void SetDiContainer(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScenePresentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13856))
// CS Name: GameScenesManager::ScenePresentType
struct CORDL_TYPE GlobalNamespace__GameScenesManager__ScenePresentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameScenesManager__ScenePresentType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameScenesManager__ScenePresentType(GlobalNamespace__GameScenesManager__ScenePresentType const&) = default;
                    constexpr GlobalNamespace__GameScenesManager__ScenePresentType(GlobalNamespace__GameScenesManager__ScenePresentType&&) = default;
                    constexpr GlobalNamespace__GameScenesManager__ScenePresentType& operator=(GlobalNamespace__GameScenesManager__ScenePresentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameScenesManager__ScenePresentType& operator=(GlobalNamespace__GameScenesManager__ScenePresentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager__ScenePresentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameScenesManager__ScenePresentType_Unwrapped : int32_t {
__DoNotLoad = 0,
__Load = 1,
__Activate = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameScenesManager__ScenePresentType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameScenesManager__ScenePresentType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DoNotLoad offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType const DoNotLoad;

/// @brief Field Load offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType const Load;

/// @brief Field Activate offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType const Activate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SceneDismissType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13857))
// CS Name: GameScenesManager::SceneDismissType
struct CORDL_TYPE GlobalNamespace__GameScenesManager__SceneDismissType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameScenesManager__SceneDismissType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameScenesManager__SceneDismissType(GlobalNamespace__GameScenesManager__SceneDismissType const&) = default;
                    constexpr GlobalNamespace__GameScenesManager__SceneDismissType(GlobalNamespace__GameScenesManager__SceneDismissType&&) = default;
                    constexpr GlobalNamespace__GameScenesManager__SceneDismissType& operator=(GlobalNamespace__GameScenesManager__SceneDismissType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameScenesManager__SceneDismissType& operator=(GlobalNamespace__GameScenesManager__SceneDismissType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager__SceneDismissType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameScenesManager__SceneDismissType_Unwrapped : int32_t {
__DoNotUnload = 0,
__Unload = 1,
__Deactivate = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameScenesManager__SceneDismissType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameScenesManager__SceneDismissType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DoNotUnload offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType const DoNotUnload;

/// @brief Field Unload offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType const Unload;

/// @brief Field Deactivate offset 0
static GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType const Deactivate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass30_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13858))
// CS Name: GameScenesManager::<>c__DisplayClass30_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass30_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass30_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass30_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0(GlobalNamespace__GameScenesManager____c__DisplayClass30_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0(GlobalNamespace__GameScenesManager____c__DisplayClass30_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass30_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass30_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass30_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass30_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __declspec(property(get=__get_scenesStackData, put=__set_scenesStackData))  scenesStackData;

constexpr void __set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __get_scenesStackData() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_scenesTransitionSetupData, put=__set_scenesTransitionSetupData))  scenesTransitionSetupData;

constexpr void __set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_scenesTransitionSetupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7ea88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PushScenes>b__0 addr 0x1f80fb4 size 0x6c virtual false final false
 void _PushScenes_b__0(Zenject::DiContainer container) ;

/// @brief Method <PushScenes>b__1 addr 0x1f8114c size 0x78 virtual false final false
 void _PushScenes_b__1(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass31_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13859))
// CS Name: GameScenesManager::<>c__DisplayClass31_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass31_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass31_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass31_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0(GlobalNamespace__GameScenesManager____c__DisplayClass31_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0(GlobalNamespace__GameScenesManager____c__DisplayClass31_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass31_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass31_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass31_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass31_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7ee98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PopScenes>b__0 addr 0x1f811c4 size 0xa8 virtual false final false
 void _PopScenes_b__0(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass32_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13860))
// CS Name: GameScenesManager::<>c__DisplayClass32_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass32_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass32_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass32_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0(GlobalNamespace__GameScenesManager____c__DisplayClass32_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0(GlobalNamespace__GameScenesManager____c__DisplayClass32_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass32_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass32_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass32_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass32_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_scenesTransitionSetupData, put=__set_scenesTransitionSetupData))  scenesTransitionSetupData;

constexpr void __set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_scenesTransitionSetupData() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_newSceneNames, put=__set_newSceneNames))  newSceneNames;

constexpr void __set_newSceneNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_newSceneNames() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_emptyTransitionSceneNameList, put=__set_emptyTransitionSceneNameList))  emptyTransitionSceneNameList;

constexpr void __set_emptyTransitionSceneNameList(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_emptyTransitionSceneNameList() const;

 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __declspec(property(get=__get_scenesStackData, put=__set_scenesStackData))  scenesStackData;

constexpr void __set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __get_scenesStackData() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get___9__1() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get___9__2, put=__set___9__2))  __9__2;

constexpr void __set___9__2(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get___9__2() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7f1f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReplaceScenes>b__0 addr 0x1f8126c size 0x128 virtual false final false
 void _ReplaceScenes_b__0(Zenject::DiContainer emptySceneContainer) ;

/// @brief Method <ReplaceScenes>b__1 addr 0x1f81394 size 0x6c virtual false final false
 void _ReplaceScenes_b__1(Zenject::DiContainer container) ;

/// @brief Method <ReplaceScenes>b__2 addr 0x1f81400 size 0x78 virtual false final false
 void _ReplaceScenes_b__2(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass33_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13861))
// CS Name: GameScenesManager::<>c__DisplayClass33_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass33_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass33_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass33_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0(GlobalNamespace__GameScenesManager____c__DisplayClass33_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0(GlobalNamespace__GameScenesManager____c__DisplayClass33_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass33_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass33_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass33_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass33_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_scenesTransitionSetupData, put=__set_scenesTransitionSetupData))  scenesTransitionSetupData;

constexpr void __set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_scenesTransitionSetupData() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_newSceneNames, put=__set_newSceneNames))  newSceneNames;

constexpr void __set_newSceneNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_newSceneNames() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_emptyTransitionSceneNameList, put=__set_emptyTransitionSceneNameList))  emptyTransitionSceneNameList;

constexpr void __set_emptyTransitionSceneNameList(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_emptyTransitionSceneNameList() const;

 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __declspec(property(get=__get_scenesStackData, put=__set_scenesStackData))  scenesStackData;

constexpr void __set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __get_scenesStackData() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get___9__1() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get___9__2, put=__set___9__2))  __9__2;

constexpr void __set___9__2(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get___9__2() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7f82c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ClearAndOpenScenes>b__0 addr 0x1f81478 size 0x128 virtual false final false
 void _ClearAndOpenScenes_b__0(Zenject::DiContainer emptySceneContainer) ;

/// @brief Method <ClearAndOpenScenes>b__1 addr 0x1f815a0 size 0x6c virtual false final false
 void _ClearAndOpenScenes_b__1(Zenject::DiContainer container) ;

/// @brief Method <ClearAndOpenScenes>b__2 addr 0x1f8160c size 0x78 virtual false final false
 void _ClearAndOpenScenes_b__2(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass34_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13862))
// CS Name: GameScenesManager::<>c__DisplayClass34_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass34_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass34_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass34_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0(GlobalNamespace__GameScenesManager____c__DisplayClass34_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0(GlobalNamespace__GameScenesManager____c__DisplayClass34_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass34_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass34_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass34_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass34_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __declspec(property(get=__get_scenesStackData, put=__set_scenesStackData))  scenesStackData;

constexpr void __set_scenesStackData(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData __get_scenesStackData() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_scenesTransitionSetupData, put=__set_scenesTransitionSetupData))  scenesTransitionSetupData;

constexpr void __set_scenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_scenesTransitionSetupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7fbf0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AppendScenes>b__0 addr 0x1f81684 size 0x6c virtual false final false
 void _AppendScenes_b__0(Zenject::DiContainer container) ;

/// @brief Method <AppendScenes>b__1 addr 0x1f816f0 size 0x78 virtual false final false
 void _AppendScenes_b__1(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass35_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13863))
// CS Name: GameScenesManager::<>c__DisplayClass35_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass35_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass35_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass35_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0(GlobalNamespace__GameScenesManager____c__DisplayClass35_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0(GlobalNamespace__GameScenesManager____c__DisplayClass35_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass35_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass35_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass35_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass35_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_sceneNamesToRemove, put=__set_sceneNamesToRemove))  sceneNamesToRemove;

constexpr void __set_sceneNamesToRemove(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_sceneNamesToRemove() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f7ff98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RemoveScenes>b__0 addr 0x1f81768 size 0xa8 virtual false final false
 void _RemoveScenes_b__0(Zenject::DiContainer container) ;

/// @brief Method <RemoveScenes>b__1 addr 0x1f81810 size 0x64 virtual false final false
 bool _RemoveScenes_b__1(::StringW scene) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass38_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13864))
// CS Name: GameScenesManager::<>c__DisplayClass38_0
class CORDL_TYPE GlobalNamespace__GameScenesManager____c__DisplayClass38_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameScenesManager____c__DisplayClass38_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass38_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0(GlobalNamespace__GameScenesManager____c__DisplayClass38_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0(GlobalNamespace__GameScenesManager____c__DisplayClass38_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager____c__DisplayClass38_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass38_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager____c__DisplayClass38_0& operator=(GlobalNamespace__GameScenesManager____c__DisplayClass38_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_newScenesTransitionSetupData, put=__set_newScenesTransitionSetupData))  newScenesTransitionSetupData;

constexpr void __set_newScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_newScenesTransitionSetupData() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 New_ctor() ;

/// @brief Method .ctor addr 0x1f81874 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ScenesTransitionCoroutine>b__0 addr 0x1f8187c size 0x24 virtual false final false
 bool _ScenesTransitionCoroutine_b__0() ;

/// @brief Method <ScenesTransitionCoroutine>b__1 addr 0x1f818a0 size 0x24 virtual false final false
 bool _ScenesTransitionCoroutine_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ScenesTransitionCoroutine>d__38
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13865))
// CS Name: GameScenesManager::<ScenesTransitionCoroutine>d__38
class CORDL_TYPE GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38(GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38(GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38& operator=(GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38&& o) noexcept = default;
  constexpr GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38& operator=(GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_newScenesTransitionSetupData, put=__set_newScenesTransitionSetupData))  newScenesTransitionSetupData;

constexpr void __set_newScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_newScenesTransitionSetupData() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_scenesToDismiss, put=__set_scenesToDismiss))  scenesToDismiss;

constexpr void __set_scenesToDismiss(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_scenesToDismiss() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get___4__this() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_scenesToPresent, put=__set_scenesToPresent))  scenesToPresent;

constexpr void __set_scenesToPresent(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_scenesToPresent() const;

 float_t __declspec(property(get=__get_minDuration, put=__set_minDuration))  minDuration;

constexpr void __set_minDuration(float_t value) ;

constexpr float_t __get_minDuration() const;

 GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType __declspec(property(get=__get_presentType, put=__set_presentType))  presentType;

constexpr void __set_presentType(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType __get_presentType() const;

 System::Action __declspec(property(get=__get_afterMinDurationCallback, put=__set_afterMinDurationCallback))  afterMinDurationCallback;

constexpr void __set_afterMinDurationCallback(System::Action value) ;

constexpr System::Action __get_afterMinDurationCallback() const;

 GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0 __get___8__1() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_extraBindingsCallback, put=__set_extraBindingsCallback))  extraBindingsCallback;

constexpr void __set_extraBindingsCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_extraBindingsCallback() const;

 GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType __declspec(property(get=__get_dismissType, put=__set_dismissType))  dismissType;

constexpr void __set_dismissType(GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType __get_dismissType() const;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get_finishCallback() const;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=__get__eventSystem_5__2, put=__set__eventSystem_5__2))  _eventSystem_5__2;

constexpr void __set__eventSystem_5__2(UnityEngine::EventSystems::EventSystem value) ;

constexpr UnityEngine::EventSystems::EventSystem __get__eventSystem_5__2() const;

 ::StringW __declspec(property(get=__get__sceneName_5__3, put=__set__sceneName_5__3))  _sceneName_5__3;

constexpr void __set__sceneName_5__3(::StringW value) ;

constexpr ::StringW __get__sceneName_5__3() const;

 UnityEngine::AsyncOperation __declspec(property(get=__get__loadSceneOperation_5__4, put=__set__loadSceneOperation_5__4))  _loadSceneOperation_5__4;

constexpr void __set__loadSceneOperation_5__4(UnityEngine::AsyncOperation value) ;

constexpr UnityEngine::AsyncOperation __get__loadSceneOperation_5__4() const;

 int32_t __declspec(property(get=__get__sceneNum_5__5, put=__set__sceneNum_5__5))  _sceneNum_5__5;

constexpr void __set__sceneNum_5__5(int32_t value) ;

constexpr int32_t __get__sceneNum_5__5() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW> __declspec(property(get=__get___7__wrap5, put=__set___7__wrap5))  __7__wrap5;

constexpr void __set___7__wrap5(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<::StringW> __get___7__wrap5() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f7ffa0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f818c4 size 0x38 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f818fc size 0xefc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x1f82898 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x1f828e8 size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f82938 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f82940 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f82980 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameScenesManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13866))
// CS Name: GameScenesManager
class CORDL_TYPE GameScenesManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _ScenesTransitionCoroutine_d__38 = GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38;

using __c__DisplayClass38_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0;

using __c__DisplayClass35_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0;

using __c__DisplayClass34_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0;

using __c__DisplayClass33_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0;

using __c__DisplayClass32_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0;

using __c__DisplayClass31_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0;

using __c__DisplayClass30_0 = GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0;

using SceneDismissType = GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType;

using ScenePresentType = GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType;

using ScenesStackData = GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~GameScenesManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: " const&", def_value: None }]
constexpr GameScenesManager(GameScenesManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameScenesManager", modifiers: "&&", def_value: None }]
constexpr GameScenesManager(GameScenesManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameScenesManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameScenesManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameScenesManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameScenesManager& operator=(GameScenesManager&& o) noexcept = default;
  constexpr GameScenesManager& operator=(GameScenesManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SceneInfo __declspec(property(get=__get__emptyTransitionSceneInfo, put=__set__emptyTransitionSceneInfo))  _emptyTransitionSceneInfo;

constexpr void __set__emptyTransitionSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__emptyTransitionSceneInfo() const;

 Zenject::ZenjectSceneLoader __declspec(property(get=__get__zenjectSceneLoader, put=__set__zenjectSceneLoader))  _zenjectSceneLoader;

constexpr void __set__zenjectSceneLoader(Zenject::ZenjectSceneLoader value) ;

constexpr Zenject::ZenjectSceneLoader __get__zenjectSceneLoader() const;

 System::Action_1<float_t> __declspec(property(get=__get_transitionDidStartEvent, put=__set_transitionDidStartEvent))  transitionDidStartEvent;

constexpr void __set_transitionDidStartEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_transitionDidStartEvent() const;

 System::Action __declspec(property(get=__get_beforeDismissingScenesEvent, put=__set_beforeDismissingScenesEvent))  beforeDismissingScenesEvent;

constexpr void __set_beforeDismissingScenesEvent(System::Action value) ;

constexpr System::Action __get_beforeDismissingScenesEvent() const;

 System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> __declspec(property(get=__get_transitionDidFinishEvent, put=__set_transitionDidFinishEvent))  transitionDidFinishEvent;

constexpr void __set_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

constexpr System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> __get_transitionDidFinishEvent() const;

 System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> __declspec(property(get=__get_installEarlyBindingsEvent, put=__set_installEarlyBindingsEvent))  installEarlyBindingsEvent;

constexpr void __set_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

constexpr System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> __get_installEarlyBindingsEvent() const;

/// @brief Field kStandardTransitionLength offset 0
static constexpr float_t  kStandardTransitionLength{0.7};

/// @brief Field kShortTransitionLength offset 0
static constexpr float_t  kShortTransitionLength{0.35};

/// @brief Field kLongTransitionLength offset 0
static constexpr float_t  kLongTransitionLength{1.3};

 bool __declspec(property(get=__get__inTransition, put=__set__inTransition))  _inTransition;

constexpr void __set__inTransition(bool value) ;

constexpr bool __get__inTransition() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData> __declspec(property(get=__get__scenesStack, put=__set__scenesStack))  _scenesStack;

constexpr void __set__scenesStack(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData> __get__scenesStack() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__neverUnloadScenes, put=__set__neverUnloadScenes))  _neverUnloadScenes;

constexpr void __set__neverUnloadScenes(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__neverUnloadScenes() const;

/// @brief Field kRootContainerGOName offset 0
static constexpr ::ConstString  kRootContainerGOName{u"RootContainer"};


// Properties

 Zenject::DiContainer __declspec(property(get=get_currentScenesContainer))  currentScenesContainer;

 bool __declspec(property(get=get_isInTransition))  isInTransition;

 UnityEngine::WaitUntil __declspec(property(get=get_waitUntilSceneTransitionFinish))  waitUntilSceneTransitionFinish;


// Methods

/// @brief Method add_transitionDidStartEvent addr 0x1f7dec4 size 0xb0 virtual false final false
 void add_transitionDidStartEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_transitionDidStartEvent addr 0x1f7df74 size 0xb0 virtual false final false
 void remove_transitionDidStartEvent(System::Action_1<float_t> value) ;

/// @brief Method add_beforeDismissingScenesEvent addr 0x1f7e024 size 0x9c virtual false final false
 void add_beforeDismissingScenesEvent(System::Action value) ;

/// @brief Method remove_beforeDismissingScenesEvent addr 0x1f7e0c0 size 0x9c virtual false final false
 void remove_beforeDismissingScenesEvent(System::Action value) ;

/// @brief Method add_transitionDidFinishEvent addr 0x1f7e15c size 0xb0 virtual false final false
 void add_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

/// @brief Method remove_transitionDidFinishEvent addr 0x1f7e20c size 0xb0 virtual false final false
 void remove_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

/// @brief Method add_installEarlyBindingsEvent addr 0x1f7e2bc size 0xb0 virtual false final false
 void add_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

/// @brief Method remove_installEarlyBindingsEvent addr 0x1f7e36c size 0xb0 virtual false final false
 void remove_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO,Zenject::DiContainer> value) ;

/// @brief Method get_currentScenesContainer addr 0x1f7e41c size 0x58 virtual false final false
 Zenject::DiContainer get_currentScenesContainer() ;

/// @brief Method get_isInTransition addr 0x1f7e474 size 0x8 virtual false final false
 bool get_isInTransition() ;

/// @brief Method get_waitUntilSceneTransitionFinish addr 0x1f7e47c size 0xac virtual false final false
 UnityEngine::WaitUntil get_waitUntilSceneTransitionFinish() ;

/// @brief Method MarkSceneAsPersistent addr 0x1f7e528 size 0x58 virtual false final false
 void MarkSceneAsPersistent(::StringW sceneName) ;

/// @brief Method GetCurrentlyLoadedSceneNames addr 0x1f7e580 size 0x1b4 virtual false final false
 System::Collections::Generic::List_1<::StringW> GetCurrentlyLoadedSceneNames() ;

/// @brief Method PushScenes addr 0x1f7e734 size 0x354 virtual false final false
 void PushScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method PopScenes addr 0x1f7ecb0 size 0x1e8 virtual false final false
 void PopScenes(float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method ReplaceScenes addr 0x1f7eea0 size 0x358 virtual false final false
 void ReplaceScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, ::ArrayW<System::Collections::IEnumerator> beforeNewScenesActivateRoutines, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method ClearAndOpenScenes addr 0x1f7f200 size 0x62c virtual false final false
 void ClearAndOpenScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback, bool unloadAllScenes) ;

/// @brief Method AppendScenes addr 0x1f7f834 size 0x3bc virtual false final false
 void AppendScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method RemoveScenes addr 0x1f7fbf8 size 0x3a0 virtual false final false
 void RemoveScenes(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupDataSo, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method ScenesTransitionCoroutine addr 0x1f7ebe0 size 0xd0 virtual false final false
 System::Collections::IEnumerator ScenesTransitionCoroutine(GlobalNamespace::ScenesTransitionSetupDataSO newScenesTransitionSetupData, System::Collections::Generic::List_1<::StringW> scenesToPresent, GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType presentType, System::Collections::Generic::List_1<::StringW> scenesToDismiss, GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType dismissType, float_t minDuration, System::Action afterMinDurationCallback, System::Action_1<Zenject::DiContainer> extraBindingsCallback, System::Action_1<Zenject::DiContainer> finishCallback) ;

/// @brief Method ActivatePresentedSceneRootObjects addr 0x1f7ffc8 size 0x300 virtual false final false
static void ActivatePresentedSceneRootObjects(System::Collections::Generic::List_1<::StringW> scenesToPresent) ;

/// @brief Method IsAnySceneInStack addr 0x1f802c8 size 0x164 virtual false final false
 bool IsAnySceneInStack(System::Collections::Generic::List_1<::StringW> sceneNames) ;

/// @brief Method AreAllScenesInStack addr 0x1f806e0 size 0x8 virtual false final false
 bool AreAllScenesInStack(System::Collections::Generic::List_1<::StringW> sceneNames) ;

/// @brief Method IsSceneInStack addr 0x1f8042c size 0x2b4 virtual false final false
 bool IsSceneInStack(::StringW searchSceneName) ;

/// @brief Method SceneNamesFromSceneInfoArray addr 0x1f7ea90 size 0x128 virtual false final false
 System::Collections::Generic::List_1<::StringW> SceneNamesFromSceneInfoArray(::ArrayW<GlobalNamespace::SceneInfo> sceneInfos) ;

/// @brief Method SetActiveRootObjectsInScenes addr 0x1f806e8 size 0x17c virtual false final false
 void SetActiveRootObjectsInScenes(System::Collections::Generic::List_1<::StringW> sceneNames, bool value) ;

/// @brief Method ReparentRootGameObjectsToDisabledGameObject addr 0x1f80864 size 0x284 virtual false final false
 void ReparentRootGameObjectsToDisabledGameObject(::StringW sceneName) ;

/// @brief Method MoveGameObjectsFromContainerToSceneRoot addr 0x1f80ae8 size 0x37c virtual false final false
 void MoveGameObjectsFromContainerToSceneRoot(::StringW sceneName) ;

/// @brief Method Log addr 0x1f80e64 size 0x58 virtual false final false
static void Log(::StringW message) ;

static GlobalNamespace::GameScenesManager New_ctor() ;

/// @brief Method .ctor addr 0x1f80ebc size 0xc0 virtual false final false
 void _ctor() ;

/// @brief Method <get_waitUntilSceneTransitionFinish>b__22_0 addr 0x1f80f7c size 0x10 virtual false final false
 bool _get_waitUntilSceneTransitionFinish_b__22_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager__SceneDismissType, "", "GameScenesManager/SceneDismissType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenePresentType, "", "GameScenesManager/ScenePresentType");
NEED_NO_BOX(GlobalNamespace::GameScenesManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager, "", "GameScenesManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager__ScenesStackData, "", "GameScenesManager/ScenesStackData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager___ScenesTransitionCoroutine_d__38, "", "GameScenesManager/<ScenesTransitionCoroutine>d__38");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass30_0, "", "GameScenesManager/<>c__DisplayClass30_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass31_0, "", "GameScenesManager/<>c__DisplayClass31_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass32_0, "", "GameScenesManager/<>c__DisplayClass32_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass33_0, "", "GameScenesManager/<>c__DisplayClass33_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass34_0, "", "GameScenesManager/<>c__DisplayClass34_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass35_0, "", "GameScenesManager/<>c__DisplayClass35_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameScenesManager____c__DisplayClass38_0, "", "GameScenesManager/<>c__DisplayClass38_0");
