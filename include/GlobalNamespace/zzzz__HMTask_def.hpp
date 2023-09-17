#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__HMTask___RunCoroutine_d__8;
}
namespace GlobalNamespace {
class HMTask;
}
namespace {
// Type: ::<RunCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3821), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(3821)), TypeDefinitionIndex(TypeDefinitionIndex(3748)), TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13958))
// CS Name: HMTask::<RunCoroutine>d__8
class CORDL_TYPE GlobalNamespace__HMTask___RunCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__HMTask___RunCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMTask___RunCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HMTask___RunCoroutine_d__8(GlobalNamespace__HMTask___RunCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HMTask___RunCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HMTask___RunCoroutine_d__8(GlobalNamespace__HMTask___RunCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HMTask___RunCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HMTask___RunCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HMTask___RunCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HMTask___RunCoroutine_d__8& operator=(GlobalNamespace__HMTask___RunCoroutine_d__8&& o) noexcept = default;
  constexpr GlobalNamespace__HMTask___RunCoroutine_d__8& operator=(GlobalNamespace__HMTask___RunCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::HMTask __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::HMTask value) ;

constexpr GlobalNamespace::HMTask __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__HMTask___RunCoroutine_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fa2920 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fa2a88 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fa2a8c size 0xf4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa2b80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa2b88 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa2bc8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HMTask
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13959))
// CS Name: HMTask
class CORDL_TYPE HMTask : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _RunCoroutine_d__8 = GlobalNamespace::GlobalNamespace__HMTask___RunCoroutine_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMTask", modifiers: " const&", def_value: None }]
constexpr HMTask(HMTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMTask", modifiers: "&&", def_value: None }]
constexpr HMTask(HMTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMTask(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMTask& operator=(HMTask&& o) noexcept = default;
  constexpr HMTask& operator=(HMTask const& o) noexcept = default;
                


// Fields

 System::Threading::Thread __declspec(property(get=__get__thread, put=__set__thread))  _thread;

constexpr void __set__thread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get__thread() const;

 System::Action __declspec(property(get=__get__job, put=__set__job))  _job;

constexpr void __set__job(System::Action value) ;

constexpr System::Action __get__job() const;

 System::Action __declspec(property(get=__get__finishCallback, put=__set__finishCallback))  _finishCallback;

constexpr void __set__finishCallback(System::Action value) ;

constexpr System::Action __get__finishCallback() const;

 bool __declspec(property(get=__get__canceled, put=__set__canceled))  _canceled;

constexpr void __set__canceled(bool value) ;

constexpr bool __get__canceled() const;

 bool __declspec(property(get=__get__started, put=__set__started))  _started;

constexpr void __set__started(bool value) ;

constexpr bool __get__started() const;

 bool __declspec(property(get=__get__finished, put=__set__finished))  _finished;

constexpr void __set__finished(bool value) ;

constexpr bool __get__finished() const;


// Methods

// Ctor Parameters [CppParam { name: "job", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "finishCallback", ty: "System::Action", modifiers: "", def_value: None }]
explicit HMTask(System::Action job, System::Action finishCallback) ;

/// @brief Method .ctor addr 0x1fa26bc size 0x12c virtual false final false
 void _ctor(System::Action job, System::Action finishCallback) ;

/// @brief Method Run addr 0x1fa27e8 size 0xd0 virtual false final false
 void Run() ;

/// @brief Method RunCoroutine addr 0x1fa28b8 size 0x68 virtual false final false
 System::Collections::IEnumerator RunCoroutine() ;

/// @brief Method RunJob addr 0x1fa2948 size 0xf4 virtual false final false
 void RunJob() ;

/// @brief Method Cancel addr 0x1fa2a3c size 0xc virtual false final false
 void Cancel() ;

/// @brief Method <RunCoroutine>b__8_0 addr 0x1fa2a48 size 0x8 virtual false final false
 bool _RunCoroutine_b__8_0() ;

/// @brief Method <RunJob>b__9_0 addr 0x1fa2a50 size 0x38 virtual false final false
 void _RunJob_b__9_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalNamespace__HMTask___RunCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalNamespace__HMTask___RunCoroutine_d__8, "", "HMTask/<RunCoroutine>d__8");
NEED_NO_BOX(::GlobalNamespace::HMTask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMTask, "", "HMTask");
} // end anonymous namespace
