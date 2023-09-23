#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class SceneContext;
}
namespace System {
class Delegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ZenUtilInternal;
}
namespace Zenject::Internal {
class Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3;
}
namespace Zenject::Internal {
class Zenject__Internal__ZenUtilInternal____c;
}
namespace Zenject::Internal {
class Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0;
}
// Type: ::<>c
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11337))
// CS Name: Zenject.Internal.ZenUtilInternal::<>c
class CORDL_TYPE Zenject__Internal__ZenUtilInternal____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__Internal__ZenUtilInternal____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal____c", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal____c(Zenject__Internal__ZenUtilInternal____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal____c", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal____c(Zenject__Internal__ZenUtilInternal____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ZenUtilInternal____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ZenUtilInternal____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal____c& operator=(Zenject__Internal__ZenUtilInternal____c&& o) noexcept = default;
  constexpr Zenject__Internal__ZenUtilInternal____c& operator=(Zenject__Internal__ZenUtilInternal____c const& o) noexcept = default;
                


// Fields

static Zenject::Internal::Zenject__Internal__ZenUtilInternal____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Internal::Zenject__Internal__ZenUtilInternal____c value) ;

static Zenject::Internal::Zenject__Internal__ZenUtilInternal____c __get___9() ;

static System::Func_2<UnityEngine::GameObject,System::Collections::Generic::IEnumerable_1<Zenject::SceneContext>> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<UnityEngine::GameObject,System::Collections::Generic::IEnumerable_1<Zenject::SceneContext>> value) ;

static System::Func_2<UnityEngine::GameObject,System::Collections::Generic::IEnumerable_1<Zenject::SceneContext>> __get___9__3_0() ;

static System::Func_2<UnityEngine::GameObject,bool> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<UnityEngine::GameObject,bool> value) ;

static System::Func_2<UnityEngine::GameObject,bool> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ZenUtilInternal____c() ;

/// @brief Method .ctor addr 0x2daf6a8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllSceneContexts>b__3_0 addr 0x2daf6b0 size 0x50 virtual false final false
 System::Collections::Generic::IEnumerable_1<Zenject::SceneContext> _GetAllSceneContexts_b__3_0(UnityEngine::GameObject root) ;

/// @brief Method <GetRootGameObjects>b__10_0 addr 0x2daf700 size 0x8c virtual false final false
 bool _GetRootGameObjects_b__10_0(UnityEngine::GameObject x) ;

/// @brief Method __zenCreate addr 0x2daf78c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2daf7e8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<GetAllSceneContexts>d__3
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11338))
// CS Name: Zenject.Internal.ZenUtilInternal::<GetAllSceneContexts>d__3
class CORDL_TYPE Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<Zenject::SceneContext>
constexpr operator  System::Collections::Generic::IEnumerable_1<Zenject::SceneContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<Zenject::SceneContext>
constexpr operator  System::Collections::Generic::IEnumerator_1<Zenject::SceneContext>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3(Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3(Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3& operator=(Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3&& o) noexcept = default;
  constexpr Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3& operator=(Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 Zenject::SceneContext __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(Zenject::SceneContext value) ;

constexpr Zenject::SceneContext __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene> __get___7__wrap1() const;


// Properties

 Zenject::SceneContext __declspec(property(get=System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current))  System_Collections_Generic_IEnumerator_Zenject_SceneContext__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2dae864 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2daf9a8 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2daf9c4 size 0x484 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2dafe48 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<Zenject.SceneContext>.get_Current addr 0x2dafef8 size 0x8 virtual true final true
 Zenject::SceneContext System_Collections_Generic_IEnumerator_Zenject_SceneContext__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2daff00 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2daff40 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<Zenject.SceneContext>.GetEnumerator addr 0x2daff48 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<Zenject::SceneContext> System_Collections_Generic_IEnumerable_Zenject_SceneContext__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2daffe0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass10_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11339))
// CS Name: Zenject.Internal.ZenUtilInternal::<>c__DisplayClass10_0
class CORDL_TYPE Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0(Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0(Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0& operator=(Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0&& o) noexcept = default;
  constexpr Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0& operator=(Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get_scene, put=__set_scene))  scene;

constexpr void __set_scene(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get_scene() const;


// Methods

// Ctor Parameters []
explicit Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x2daf63c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetRootGameObjects>b__1 addr 0x2daffe4 size 0x110 virtual false final false
 bool _GetRootGameObjects_b__1(UnityEngine::GameObject x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
// Type: Zenject.Internal::ZenUtilInternal
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11340))
// CS Name: Zenject.Internal.ZenUtilInternal
class CORDL_TYPE ZenUtilInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass10_0 = Zenject::Internal::Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0;

using _GetAllSceneContexts_d__3 = Zenject::Internal::Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3;

using __c = Zenject::Internal::Zenject__Internal__ZenUtilInternal____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZenUtilInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: " const&", def_value: None }]
constexpr ZenUtilInternal(ZenUtilInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenUtilInternal", modifiers: "&&", def_value: None }]
constexpr ZenUtilInternal(ZenUtilInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenUtilInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZenUtilInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenUtilInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenUtilInternal& operator=(ZenUtilInternal&& o) noexcept = default;
  constexpr ZenUtilInternal& operator=(ZenUtilInternal const& o) noexcept = default;
                


// Methods

/// @brief Method IsNull addr 0x2dae614 size 0x1c virtual false final false
static bool IsNull(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method AreFunctionsEqual addr 0x2dae630 size 0xa8 virtual false final false
static bool AreFunctionsEqual(System::Delegate left, System::Delegate right) ;

/// @brief Method GetInheritanceDelta addr 0x2dae6d8 size 0x11c virtual false final false
static int32_t GetInheritanceDelta(System::Type derived, System::Type parent) ;

/// @brief Method GetAllSceneContexts addr 0x2dae7f4 size 0x70 virtual false final false
static System::Collections::Generic::IEnumerable_1<Zenject::SceneContext> GetAllSceneContexts() ;

/// @brief Method AddStateMachineBehaviourAutoInjectersInScene addr 0x2dae898 size 0x320 virtual false final false
static void AddStateMachineBehaviourAutoInjectersInScene(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method AddStateMachineBehaviourAutoInjectersUnderGameObject addr 0x2daed7c size 0x140 virtual false final false
static void AddStateMachineBehaviourAutoInjectersUnderGameObject(UnityEngine::GameObject root) ;

/// @brief Method GetInjectableMonoBehavioursInScene addr 0x2daeebc size 0x330 virtual false final false
static void GetInjectableMonoBehavioursInScene(UnityEngine::SceneManagement::Scene scene, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> monoBehaviours) ;

/// @brief Method GetInjectableMonoBehavioursUnderGameObject addr 0x2daf550 size 0x4 virtual false final false
static void GetInjectableMonoBehavioursUnderGameObject(UnityEngine::GameObject gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> injectableComponents) ;

/// @brief Method GetInjectableMonoBehavioursUnderGameObjectInternal addr 0x2daf1ec size 0x364 virtual false final false
static void GetInjectableMonoBehavioursUnderGameObjectInternal(UnityEngine::GameObject gameObject, System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> injectableComponents) ;

/// @brief Method IsInjectableMonoBehaviourType addr 0x2daf554 size 0xe8 virtual false final false
static bool IsInjectableMonoBehaviourType(System::Type type) ;

/// @brief Method GetRootGameObjects addr 0x2daebb8 size 0x1c4 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetRootGameObjects(UnityEngine::SceneManagement::Scene scene) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
NEED_NO_BOX(Zenject::Internal::ZenUtilInternal);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal, "Zenject.Internal", "ZenUtilInternal");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ZenUtilInternal___GetAllSceneContexts_d__3, "Zenject.Internal", "ZenUtilInternal/<GetAllSceneContexts>d__3");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ZenUtilInternal____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ZenUtilInternal____c, "Zenject.Internal", "ZenUtilInternal/<>c");
NEED_NO_BOX(Zenject::Internal::Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::Zenject__Internal__ZenUtilInternal____c__DisplayClass10_0, "Zenject.Internal", "ZenUtilInternal/<>c__DisplayClass10_0");
