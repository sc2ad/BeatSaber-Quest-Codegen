#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Component;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetDirectChildren_d__21;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil____c;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___get_AllScenes_d__1;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetParents_d__16;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetDirectChildren_d__21;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___GetParents_d__16;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil____c;
}
namespace ModestTree::Util {
class ModestTree__Util__UnityUtil___get_AllScenes_d__1;
}
namespace ModestTree::Util {
class UnityUtil;
}
// Type: ::<get_AllScenes>d__1
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10572))
// CS Name: ModestTree.Util.UnityUtil::<get_AllScenes>d__1
class CORDL_TYPE ModestTree__Util__UnityUtil___get_AllScenes_d__1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ModestTree__Util__UnityUtil___get_AllScenes_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___get_AllScenes_d__1", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1(ModestTree__Util__UnityUtil___get_AllScenes_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___get_AllScenes_d__1", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1(ModestTree__Util__UnityUtil___get_AllScenes_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil___get_AllScenes_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1& operator=(ModestTree__Util__UnityUtil___get_AllScenes_d__1&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil___get_AllScenes_d__1& operator=(ModestTree__Util__UnityUtil___get_AllScenes_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 UnityEngine::SceneManagement::Scene __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil___get_AllScenes_d__1 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d459b8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d46514 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d46518 size 0xcc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.SceneManagement.Scene>.get_Current addr 0x2d465e4 size 0x8 virtual true final true
 UnityEngine::SceneManagement::Scene System_Collections_Generic_IEnumerator_UnityEngine_SceneManagement_Scene__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d465ec size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d4662c size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.SceneManagement.Scene>.GetEnumerator addr 0x2d46688 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::SceneManagement::Scene> System_Collections_Generic_IEnumerable_UnityEngine_SceneManagement_Scene__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d46720 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ::<>c
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10573))
// CS Name: ModestTree.Util.UnityUtil::<>c
class CORDL_TYPE ModestTree__Util__UnityUtil____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ModestTree__Util__UnityUtil____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil____c", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil____c(ModestTree__Util__UnityUtil____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil____c", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil____c(ModestTree__Util__UnityUtil____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil____c& operator=(ModestTree__Util__UnityUtil____c&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil____c& operator=(ModestTree__Util__UnityUtil____c const& o) noexcept = default;
                


// Fields

static ModestTree::Util::ModestTree__Util__UnityUtil____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(ModestTree::Util::ModestTree__Util__UnityUtil____c value) ;

static ModestTree::Util::ModestTree__Util__UnityUtil____c __get___9() ;

static System::Func_2<UnityEngine::SceneManagement::Scene,bool> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<UnityEngine::SceneManagement::Scene,bool> value) ;

static System::Func_2<UnityEngine::SceneManagement::Scene,bool> __get___9__3_0() ;

static System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> value) ;

static System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> __get___9__15_0() ;

static System::Func_2<UnityEngine::Component,int32_t> __declspec(property(get=__get___9__18_0, put=__set___9__18_0))  __9__18_0;

static void __set___9__18_0(System::Func_2<UnityEngine::Component,int32_t> value) ;

static System::Func_2<UnityEngine::Component,int32_t> __get___9__18_0() ;

static System::Func_2<UnityEngine::Component,int32_t> __declspec(property(get=__get___9__19_0, put=__set___9__19_0))  __9__19_0;

static void __set___9__19_0(System::Func_2<UnityEngine::Component,int32_t> value) ;

static System::Func_2<UnityEngine::Component,int32_t> __get___9__19_0() ;

static System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> __declspec(property(get=__get___9__22_0, put=__set___9__22_0))  __9__22_0;

static void __set___9__22_0(System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> value) ;

static System::Func_2<UnityEngine::Transform,UnityEngine::GameObject> __get___9__22_0() ;

static System::Func_2<UnityEngine::GameObject,bool> __declspec(property(get=__get___9__23_0, put=__set___9__23_0))  __9__23_0;

static void __set___9__23_0(System::Func_2<UnityEngine::GameObject,bool> value) ;

static System::Func_2<UnityEngine::GameObject,bool> __get___9__23_0() ;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil____c New_ctor() ;

/// @brief Method .ctor addr 0x2d46788 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_AllLoadedScenes>b__3_0 addr 0x2d46790 size 0x20 virtual false final false
 bool _get_AllLoadedScenes_b__3_0(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method <GetRootParentOrSelf>b__15_0 addr 0x2d467b0 size 0x18 virtual false final false
 UnityEngine::GameObject _GetRootParentOrSelf_b__15_0(UnityEngine::Transform x) ;

/// @brief Method <GetComponentsInChildrenTopDown>b__18_0 addr 0x2d467c8 size 0x88 virtual false final false
 int32_t _GetComponentsInChildrenTopDown_b__18_0(UnityEngine::Component x) ;

/// @brief Method <GetComponentsInChildrenBottomUp>b__19_0 addr 0x2d46850 size 0x88 virtual false final false
 int32_t _GetComponentsInChildrenBottomUp_b__19_0(UnityEngine::Component x) ;

/// @brief Method <GetAllGameObjects>b__22_0 addr 0x2d468d8 size 0x18 virtual false final false
 UnityEngine::GameObject _GetAllGameObjects_b__22_0(UnityEngine::Transform x) ;

/// @brief Method <GetAllRootGameObjects>b__23_0 addr 0x2d468f0 size 0x84 virtual false final false
 bool _GetAllRootGameObjects_b__23_0(UnityEngine::GameObject x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ::<GetParents>d__16
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10574))
// CS Name: ModestTree.Util.UnityUtil::<GetParents>d__16
class CORDL_TYPE ModestTree__Util__UnityUtil___GetParents_d__16 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Transform>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Transform>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Transform>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Transform>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__Util__UnityUtil___GetParents_d__16() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetParents_d__16", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetParents_d__16(ModestTree__Util__UnityUtil___GetParents_d__16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetParents_d__16", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetParents_d__16(ModestTree__Util__UnityUtil___GetParents_d__16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil___GetParents_d__16(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil___GetParents_d__16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetParents_d__16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetParents_d__16& operator=(ModestTree__Util__UnityUtil___GetParents_d__16&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil___GetParents_d__16& operator=(ModestTree__Util__UnityUtil___GetParents_d__16 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::Transform __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 UnityEngine::Transform __declspec(property(get=__get___3__transform, put=__set___3__transform))  __3__transform;

constexpr void __set___3__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get___3__transform() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> __get___7__wrap1() const;


// Properties

 UnityEngine::Transform __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil___GetParents_d__16 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d45e94 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d46974 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d46990 size 0x2f8 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d46c88 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current addr 0x2d46d38 size 0x8 virtual true final true
 UnityEngine::Transform System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d46d40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d46d80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator addr 0x2d46d88 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d46e2c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ::<GetParentsAndSelf>d__17
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10575))
// CS Name: ModestTree.Util.UnityUtil::<GetParentsAndSelf>d__17
class CORDL_TYPE ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Transform>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Transform>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Transform>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Transform>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17(ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17(ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17& operator=(ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17& operator=(ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::Transform __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_transform() const;

 UnityEngine::Transform __declspec(property(get=__get___3__transform, put=__set___3__transform))  __3__transform;

constexpr void __set___3__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get___3__transform() const;

 System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> value) ;

constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> __get___7__wrap1() const;


// Properties

 UnityEngine::Transform __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_Transform__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d45ec8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d46e30 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d46e4c size 0x320 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d4716c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current addr 0x2d4721c size 0x8 virtual true final true
 UnityEngine::Transform System_Collections_Generic_IEnumerator_UnityEngine_Transform__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d47224 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d47264 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator addr 0x2d4726c size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Transform> System_Collections_Generic_IEnumerable_UnityEngine_Transform__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d47310 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ::<GetDirectChildrenAndSelf>d__20
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10576))
// CS Name: ModestTree.Util.UnityUtil::<GetDirectChildrenAndSelf>d__20
class CORDL_TYPE ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20(ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20(ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20& operator=(ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20& operator=(ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::GameObject __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::GameObject __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_obj() const;

 UnityEngine::GameObject __declspec(property(get=__get___3__obj, put=__set___3__obj))  __3__obj;

constexpr void __set___3__obj(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get___3__obj() const;

 System::Collections::IEnumerator __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get___7__wrap1() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d461d4 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d47314 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d47330 size 0x2ac virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d475dc size 0xbc virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current addr 0x2d47698 size 0x8 virtual true final true
 UnityEngine::GameObject System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d476a0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d476e0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator addr 0x2d476e8 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject> System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d4778c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ::<GetDirectChildren>d__21
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10577))
// CS Name: ModestTree.Util.UnityUtil::<GetDirectChildren>d__21
class CORDL_TYPE ModestTree__Util__UnityUtil___GetDirectChildren_d__21 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ModestTree__Util__UnityUtil___GetDirectChildren_d__21() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetDirectChildren_d__21", modifiers: " const&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21(ModestTree__Util__UnityUtil___GetDirectChildren_d__21 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModestTree__Util__UnityUtil___GetDirectChildren_d__21", modifiers: "&&", def_value: None }]
constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21(ModestTree__Util__UnityUtil___GetDirectChildren_d__21&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModestTree__Util__UnityUtil___GetDirectChildren_d__21(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21& operator=(ModestTree__Util__UnityUtil___GetDirectChildren_d__21&& o) noexcept = default;
  constexpr ModestTree__Util__UnityUtil___GetDirectChildren_d__21& operator=(ModestTree__Util__UnityUtil___GetDirectChildren_d__21 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::GameObject __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::GameObject __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_obj() const;

 UnityEngine::GameObject __declspec(property(get=__get___3__obj, put=__set___3__obj))  __3__obj;

constexpr void __set___3__obj(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get___3__obj() const;

 System::Collections::IEnumerator __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get___7__wrap1() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_GameObject__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildren_d__21 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2d46280 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2d47790 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2d477ac size 0x290 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2d47a3c size 0xbc virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.GameObject>.get_Current addr 0x2d47af8 size 0x8 virtual true final true
 UnityEngine::GameObject System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2d47b00 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2d47b40 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.GameObject>.GetEnumerator addr 0x2d47b48 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::GameObject> System_Collections_Generic_IEnumerable_UnityEngine_GameObject__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2d47bec size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ModestTree.Util::UnityUtil
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10578))
// CS Name: ModestTree.Util.UnityUtil
class CORDL_TYPE UnityUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetDirectChildren_d__21 = ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildren_d__21;

using _GetDirectChildrenAndSelf_d__20 = ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20;

using _GetParentsAndSelf_d__17 = ModestTree::Util::ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17;

using _GetParents_d__16 = ModestTree::Util::ModestTree__Util__UnityUtil___GetParents_d__16;

using __c = ModestTree::Util::ModestTree__Util__UnityUtil____c;

using _get_AllScenes_d__1 = ModestTree::Util::ModestTree__Util__UnityUtil___get_AllScenes_d__1;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: " const&", def_value: None }]
constexpr UnityUtil(UnityUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityUtil", modifiers: "&&", def_value: None }]
constexpr UnityUtil(UnityUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityUtil& operator=(UnityUtil&& o) noexcept = default;
  constexpr UnityUtil& operator=(UnityUtil const& o) noexcept = default;
                


// Properties

static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene> __declspec(property(get=get_AllScenes))  AllScenes;

static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene> __declspec(property(get=get_AllLoadedScenes))  AllLoadedScenes;

static bool __declspec(property(get=get_IsAltKeyDown))  IsAltKeyDown;

static bool __declspec(property(get=get_IsControlKeyDown))  IsControlKeyDown;

static bool __declspec(property(get=get_IsShiftKeyDown))  IsShiftKeyDown;

static bool __declspec(property(get=get_WasShiftKeyJustPressed))  WasShiftKeyJustPressed;

static bool __declspec(property(get=get_WasAltKeyJustPressed))  WasAltKeyJustPressed;


// Methods

/// @brief Method get_AllScenes addr 0x2d45948 size 0x70 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene> get_AllScenes() ;

/// @brief Method get_AllLoadedScenes addr 0x2d459ec size 0x104 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene> get_AllLoadedScenes() ;

/// @brief Method get_IsAltKeyDown addr 0x2d45af0 size 0x30 virtual false final false
static bool get_IsAltKeyDown() ;

/// @brief Method get_IsControlKeyDown addr 0x2d45b20 size 0x30 virtual false final false
static bool get_IsControlKeyDown() ;

/// @brief Method get_IsShiftKeyDown addr 0x2d45b50 size 0x30 virtual false final false
static bool get_IsShiftKeyDown() ;

/// @brief Method get_WasShiftKeyJustPressed addr 0x2d45b80 size 0x30 virtual false final false
static bool get_WasShiftKeyJustPressed() ;

/// @brief Method get_WasAltKeyJustPressed addr 0x2d45bb0 size 0x30 virtual false final false
static bool get_WasAltKeyJustPressed() ;

/// @brief Method GetDepthLevel addr 0x2d45be0 size 0x90 virtual false final false
static int32_t GetDepthLevel(UnityEngine::Transform transform) ;

/// @brief Method GetRootParentOrSelf addr 0x2d45c70 size 0x134 virtual false final false
static UnityEngine::GameObject GetRootParentOrSelf(UnityEngine::GameObject gameObject) ;

/// @brief Method GetParents addr 0x2d45e1c size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform> GetParents(UnityEngine::Transform transform) ;

/// @brief Method GetParentsAndSelf addr 0x2d45da4 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform> GetParentsAndSelf(UnityEngine::Transform transform) ;

/// @brief Method GetComponentsInChildrenTopDown addr 0x2d45efc size 0x130 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::Component> GetComponentsInChildrenTopDown(UnityEngine::GameObject gameObject, bool includeInactive) ;

/// @brief Method GetComponentsInChildrenBottomUp addr 0x2d4602c size 0x130 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::Component> GetComponentsInChildrenBottomUp(UnityEngine::GameObject gameObject, bool includeInactive) ;

/// @brief Method GetDirectChildrenAndSelf addr 0x2d4615c size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetDirectChildrenAndSelf(UnityEngine::GameObject obj) ;

/// @brief Method GetDirectChildren addr 0x2d46208 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetDirectChildren(UnityEngine::GameObject obj) ;

/// @brief Method GetAllGameObjects addr 0x2d462b4 size 0x140 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject> GetAllGameObjects() ;

/// @brief Method GetAllRootGameObjects addr 0x2d463f4 size 0x120 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetAllRootGameObjects() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildrenAndSelf_d__20, "ModestTree.Util", "UnityUtil/<GetDirectChildrenAndSelf>d__20");
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildren_d__21);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil___GetDirectChildren_d__21, "ModestTree.Util", "UnityUtil/<GetDirectChildren>d__21");
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil___GetParentsAndSelf_d__17, "ModestTree.Util", "UnityUtil/<GetParentsAndSelf>d__17");
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil___GetParents_d__16);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil___GetParents_d__16, "ModestTree.Util", "UnityUtil/<GetParents>d__16");
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil____c);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil____c, "ModestTree.Util", "UnityUtil/<>c");
NEED_NO_BOX(ModestTree::Util::ModestTree__Util__UnityUtil___get_AllScenes_d__1);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::ModestTree__Util__UnityUtil___get_AllScenes_d__1, "ModestTree.Util", "UnityUtil/<get_AllScenes>d__1");
NEED_NO_BOX(ModestTree::Util::UnityUtil);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil, "ModestTree.Util", "UnityUtil");
