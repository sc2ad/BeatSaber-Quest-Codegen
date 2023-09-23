#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class System__Net__LazyAsyncResult__ThreadContext;
}
// Type: ::ThreadContext
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7957))
// CS Name: System.Net.LazyAsyncResult::ThreadContext
class CORDL_TYPE System__Net__LazyAsyncResult__ThreadContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Net__LazyAsyncResult__ThreadContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__LazyAsyncResult__ThreadContext", modifiers: " const&", def_value: None }]
constexpr System__Net__LazyAsyncResult__ThreadContext(System__Net__LazyAsyncResult__ThreadContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__LazyAsyncResult__ThreadContext", modifiers: "&&", def_value: None }]
constexpr System__Net__LazyAsyncResult__ThreadContext(System__Net__LazyAsyncResult__ThreadContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__LazyAsyncResult__ThreadContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__LazyAsyncResult__ThreadContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__LazyAsyncResult__ThreadContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__LazyAsyncResult__ThreadContext& operator=(System__Net__LazyAsyncResult__ThreadContext&& o) noexcept = default;
  constexpr System__Net__LazyAsyncResult__ThreadContext& operator=(System__Net__LazyAsyncResult__ThreadContext const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_NestedIOCount, put=__set_m_NestedIOCount))  m_NestedIOCount;

constexpr void __set_m_NestedIOCount(int32_t value) ;

constexpr int32_t __get_m_NestedIOCount() const;


// Methods

// Ctor Parameters []
explicit System__Net__LazyAsyncResult__ThreadContext() ;

/// @brief Method .ctor addr 0x2816490 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::LazyAsyncResult
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7958))
// CS Name: System.Net.LazyAsyncResult
class CORDL_TYPE LazyAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ThreadContext = System::Net::System__Net__LazyAsyncResult__ThreadContext;

/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LazyAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyAsyncResult", modifiers: " const&", def_value: None }]
constexpr LazyAsyncResult(LazyAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyAsyncResult", modifiers: "&&", def_value: None }]
constexpr LazyAsyncResult(LazyAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyAsyncResult& operator=(LazyAsyncResult&& o) noexcept = default;
  constexpr LazyAsyncResult& operator=(LazyAsyncResult const& o) noexcept = default;
                


// Fields

static System::Net::System__Net__LazyAsyncResult__ThreadContext __declspec(property(get=__get_t_ThreadContext, put=__set_t_ThreadContext))  t_ThreadContext;

static void __set_t_ThreadContext(System::Net::System__Net__LazyAsyncResult__ThreadContext value) ;

static System::Net::System__Net__LazyAsyncResult__ThreadContext __get_t_ThreadContext() ;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_AsyncObject, put=__set_m_AsyncObject))  m_AsyncObject;

constexpr void __set_m_AsyncObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_AsyncObject() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_AsyncState, put=__set_m_AsyncState))  m_AsyncState;

constexpr void __set_m_AsyncState(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_AsyncState() const;

 System::AsyncCallback __declspec(property(get=__get_m_AsyncCallback, put=__set_m_AsyncCallback))  m_AsyncCallback;

constexpr void __set_m_AsyncCallback(System::AsyncCallback value) ;

constexpr System::AsyncCallback __get_m_AsyncCallback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Result, put=__set_m_Result))  m_Result;

constexpr void __set_m_Result(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Result() const;

 int32_t __declspec(property(get=__get_m_IntCompleted, put=__set_m_IntCompleted))  m_IntCompleted;

constexpr void __set_m_IntCompleted(int32_t value) ;

constexpr int32_t __get_m_IntCompleted() const;

 bool __declspec(property(get=__get_m_EndCalled, put=__set_m_EndCalled))  m_EndCalled;

constexpr void __set_m_EndCalled(bool value) ;

constexpr bool __get_m_EndCalled() const;

 bool __declspec(property(get=__get_m_UserEvent, put=__set_m_UserEvent))  m_UserEvent;

constexpr void __set_m_UserEvent(bool value) ;

constexpr bool __get_m_UserEvent() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Event, put=__set_m_Event))  m_Event;

constexpr void __set_m_Event(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Event() const;


// Properties

static System::Net::System__Net__LazyAsyncResult__ThreadContext __declspec(property(get=get_CurrentThreadContext))  CurrentThreadContext;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncObject))  AsyncObject;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 System::AsyncCallback __declspec(property(get=get_AsyncCallback))  AsyncCallback;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 bool __declspec(property(get=get_InternalPeekCompleted))  InternalPeekCompleted;

 bool __declspec(property(get=get_EndCalled, put=set_EndCalled))  EndCalled;


// Methods

/// @brief Method get_CurrentThreadContext addr 0x28163fc size 0x94 virtual false final false
static System::Net::System__Net__LazyAsyncResult__ThreadContext get_CurrentThreadContext() ;

// Ctor Parameters [CppParam { name: "myObject", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "myCallBack", ty: "System::AsyncCallback", modifiers: "", def_value: None }]
explicit LazyAsyncResult(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method .ctor addr 0x2816498 size 0x90 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType myObject, ::bs_hook::Il2CppWrapperType myState, System::AsyncCallback myCallBack) ;

/// @brief Method get_AsyncObject addr 0x2816528 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_AsyncObject() ;

/// @brief Method get_AsyncState addr 0x2816530 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_AsyncCallback addr 0x2816538 size 0x8 virtual false final false
 System::AsyncCallback get_AsyncCallback() ;

/// @brief Method get_AsyncWaitHandle addr 0x2816540 size 0xa4 virtual true final true
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method LazilyCreateEvent addr 0x28165e4 size 0x1b4 virtual false final false
 bool LazilyCreateEvent(ByRef<System::Threading::ManualResetEvent> waitHandle) ;

/// @brief Method get_CompletedSynchronously addr 0x28167a8 size 0x30 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method get_IsCompleted addr 0x28167d8 size 0x30 virtual true final true
 bool get_IsCompleted() ;

/// @brief Method get_InternalPeekCompleted addr 0x2816798 size 0x10 virtual false final false
 bool get_InternalPeekCompleted() ;

/// @brief Method get_EndCalled addr 0x2816808 size 0x8 virtual false final false
 bool get_EndCalled() ;

/// @brief Method set_EndCalled addr 0x2816810 size 0xc virtual false final false
 void set_EndCalled(bool value) ;

/// @brief Method ProtectedInvokeCallback addr 0x281681c size 0x1d8 virtual false final false
 void ProtectedInvokeCallback(::bs_hook::Il2CppWrapperType result, ::cordl_internals::intptr_t userToken) ;

/// @brief Method InvokeCallback addr 0x28169f4 size 0x60 virtual false final false
 void InvokeCallback(::bs_hook::Il2CppWrapperType result) ;

/// @brief Method InvokeCallback addr 0x2816a54 size 0x54 virtual false final false
 void InvokeCallback() ;

/// @brief Method Complete addr 0x2816aa8 size 0x198 virtual true final false
 void Complete(::cordl_internals::intptr_t userToken) ;

/// @brief Method WorkerThreadComplete addr 0x2816c40 size 0xac virtual false final false
 void WorkerThreadComplete(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Cleanup addr 0x2816cec size 0x4 virtual true final false
 void Cleanup() ;

/// @brief Method InternalWaitForCompletion addr 0x2816cf0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType InternalWaitForCompletion() ;

/// @brief Method WaitForCompletion addr 0x2816cf8 size 0x2b8 virtual false final false
 ::bs_hook::Il2CppWrapperType WaitForCompletion(bool snap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::LazyAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::Net::LazyAsyncResult, "System.Net", "LazyAsyncResult");
NEED_NO_BOX(System::Net::System__Net__LazyAsyncResult__ThreadContext);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__LazyAsyncResult__ThreadContext, "System.Net", "LazyAsyncResult/ThreadContext");
