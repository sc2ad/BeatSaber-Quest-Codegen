#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4;
}
namespace GlobalNamespace {
class GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class HMMainThreadDispatcher;
}
namespace {
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13955))
// CS Name: HMMainThreadDispatcher::<>c__DisplayClass2_0
class CORDL_TYPE GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0(GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0(GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0& operator=(GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0&& o) noexcept = default;
  constexpr GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0& operator=(GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HMMainThreadDispatcher __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::HMMainThreadDispatcher value) ;

constexpr GlobalNamespace::HMMainThreadDispatcher __get___4__this() const;

 System::Collections::IEnumerator __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_action() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x1fa2438 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Enqueue>b__0 addr 0x1fa25e4 size 0x24 virtual false final false
 void _Enqueue_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ActionCoroutine>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3821), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(2413)), TypeDefinitionIndex(TypeDefinitionIndex(3821)), TypeDefinitionIndex(TypeDefinitionIndex(3748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13956))
// CS Name: HMMainThreadDispatcher::<ActionCoroutine>d__4
class CORDL_TYPE GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4(GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4(GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4& operator=(GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4& operator=(GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fa24c4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fa2608 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fa260c size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa266c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa2674 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa26b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HMMainThreadDispatcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13880), inst: 4721 }), TypeDefinitionIndex(TypeDefinitionIndex(13880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13957))
// CS Name: HMMainThreadDispatcher
class CORDL_TYPE HMMainThreadDispatcher : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::HMMainThreadDispatcher> {
public:
// Declarations
using _ActionCoroutine_d__4 = GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4;

using __c__DisplayClass2_0 = GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HMMainThreadDispatcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMMainThreadDispatcher", modifiers: " const&", def_value: None }]
constexpr HMMainThreadDispatcher(HMMainThreadDispatcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMMainThreadDispatcher", modifiers: "&&", def_value: None }]
constexpr HMMainThreadDispatcher(HMMainThreadDispatcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMMainThreadDispatcher(void* ptr) noexcept : GlobalNamespace::PersistentSingleton_1<GlobalNamespace::HMMainThreadDispatcher>(ptr) {
}


  constexpr HMMainThreadDispatcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMMainThreadDispatcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMMainThreadDispatcher& operator=(HMMainThreadDispatcher&& o) noexcept = default;
  constexpr HMMainThreadDispatcher& operator=(HMMainThreadDispatcher const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Queue_1<System::Action> __declspec(property(get=__get__mainThreadExecutionQueue, put=__set__mainThreadExecutionQueue))  _mainThreadExecutionQueue;

static void __set__mainThreadExecutionQueue(System::Collections::Generic::Queue_1<System::Action> value) ;

static System::Collections::Generic::Queue_1<System::Action> __get__mainThreadExecutionQueue() ;


// Methods

/// @brief Method Update addr 0x1fa20c8 size 0x1a4 virtual false final false
 void Update() ;

/// @brief Method Enqueue addr 0x1fa226c size 0x1cc virtual false final false
 void Enqueue(System::Collections::IEnumerator action) ;

/// @brief Method Enqueue addr 0x1fa2440 size 0x1c virtual false final false
 void Enqueue(System::Action action) ;

/// @brief Method ActionCoroutine addr 0x1fa245c size 0x68 virtual false final false
 System::Collections::IEnumerator ActionCoroutine(System::Action action) ;

// Ctor Parameters []
explicit HMMainThreadDispatcher() ;

/// @brief Method .ctor addr 0x1fa24ec size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher___ActionCoroutine_d__4, "", "HMMainThreadDispatcher/<ActionCoroutine>d__4");
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__HMMainThreadDispatcher____c__DisplayClass2_0, "", "HMMainThreadDispatcher/<>c__DisplayClass2_0");
NEED_NO_BOX(::GlobalNamespace::HMMainThreadDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMMainThreadDispatcher, "", "HMMainThreadDispatcher");
} // end anonymous namespace
