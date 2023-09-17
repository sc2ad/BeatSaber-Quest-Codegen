#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskToApm;
}
namespace System::Threading::Tasks {
class ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0;
}
// Type: ::TaskWrapperAsyncResult
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2758))
// CS Name: System.Threading.Tasks.TaskToApm::TaskWrapperAsyncResult
class CORDL_TYPE ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IAsyncResult
constexpr operator  ::System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult(____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult(____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult& operator=(____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult&& o) noexcept = default;
  constexpr ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult& operator=(____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task __declspec(property(get=__get_Task, put=__set_Task))  Task;

constexpr void __set_Task(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get_Task() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__state() const;

 bool __declspec(property(get=__get__completedSynchronously, put=__set__completedSynchronously))  _completedSynchronously;

constexpr void __set__completedSynchronously(bool value) ;

constexpr bool __get__completedSynchronously() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_IAsyncResult_get_AsyncState))  System_IAsyncResult_AsyncState;

 bool __declspec(property(get=System_IAsyncResult_get_CompletedSynchronously))  System_IAsyncResult_CompletedSynchronously;

 bool __declspec(property(get=System_IAsyncResult_get_IsCompleted))  System_IAsyncResult_IsCompleted;

 ::System::Threading::WaitHandle __declspec(property(get=System_IAsyncResult_get_AsyncWaitHandle))  System_IAsyncResult_AsyncWaitHandle;


// Methods

// Ctor Parameters [CppParam { name: "task", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "completedSynchronously", ty: "bool", modifiers: "", def_value: None }]
explicit ____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult(::System::Threading::Tasks::Task task, ::bs_hook::Il2CppWrapperType state, bool completedSynchronously) ;

/// @brief Method .ctor addr 0x24b3a3c size 0x3c virtual false final false
 void _ctor(::System::Threading::Tasks::Task task, ::bs_hook::Il2CppWrapperType state, bool completedSynchronously) ;

/// @brief Method System.IAsyncResult.get_AsyncState addr 0x24b3c9c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IAsyncResult_get_AsyncState() ;

/// @brief Method System.IAsyncResult.get_CompletedSynchronously addr 0x24b3ca4 size 0x8 virtual true final true
 bool System_IAsyncResult_get_CompletedSynchronously() ;

/// @brief Method System.IAsyncResult.get_IsCompleted addr 0x24b3cac size 0x18 virtual true final true
 bool System_IAsyncResult_get_IsCompleted() ;

/// @brief Method System.IAsyncResult.get_AsyncWaitHandle addr 0x24b3cc4 size 0xa4 virtual true final true
 ::System::Threading::WaitHandle System_IAsyncResult_get_AsyncWaitHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c__DisplayClass3_0
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2759))
// CS Name: System.Threading.Tasks.TaskToApm::<>c__DisplayClass3_0
class CORDL_TYPE ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0(____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0(____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0& operator=(____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0&& o) noexcept = default;
  constexpr ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0& operator=(____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 ::System::AsyncCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(::System::AsyncCallback value) ;

constexpr ::System::AsyncCallback __get_callback() const;

 ::System::IAsyncResult __declspec(property(get=__get_asyncResult, put=__set_asyncResult))  asyncResult;

constexpr void __set_asyncResult(::System::IAsyncResult value) ;

constexpr ::System::IAsyncResult __get_asyncResult() const;


// Methods

// Ctor Parameters []
explicit ____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x24b3c60 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InvokeCallbackWhenTaskCompletes>b__0 addr 0x24b3d68 size 0x28 virtual false final false
 void _InvokeCallbackWhenTaskCompletes_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskToApm
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2760))
// CS Name: System.Threading.Tasks.TaskToApm
class CORDL_TYPE TaskToApm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass3_0 = ::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0;

using TaskWrapperAsyncResult = ::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskToApm() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: " const&", def_value: None }]
constexpr TaskToApm(TaskToApm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: "&&", def_value: None }]
constexpr TaskToApm(TaskToApm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskToApm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskToApm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskToApm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskToApm& operator=(TaskToApm&& o) noexcept = default;
  constexpr TaskToApm& operator=(TaskToApm const& o) noexcept = default;
                


// Methods

/// @brief Method Begin addr 0x24b38e4 size 0xf4 virtual false final false
static ::System::IAsyncResult Begin(::System::Threading::Tasks::Task task, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method End addr 0x24b3b70 size 0xec virtual false final false
static void End(::System::IAsyncResult asyncResult) ;

/// @brief Method End addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static TResult End(::System::IAsyncResult asyncResult) ;

/// @brief Method InvokeCallbackWhenTaskCompletes addr 0x24b3a78 size 0xf8 virtual false final false
static void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task antecedent, ::System::AsyncCallback callback, ::System::IAsyncResult asyncResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm, "System.Threading.Tasks", "TaskToApm");
NEED_NO_BOX(::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm__TaskWrapperAsyncResult, "System.Threading.Tasks", "TaskToApm/TaskWrapperAsyncResult");
NEED_NO_BOX(::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::____System__Threading__Tasks__TaskToApm____c__DisplayClass3_0, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
