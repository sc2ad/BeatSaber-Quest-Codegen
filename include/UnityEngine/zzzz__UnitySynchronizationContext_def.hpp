#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class ManualResetEvent;
}
// Forward declare root types
namespace UnityEngine {
class UnitySynchronizationContext;
}
namespace UnityEngine {
struct UnityEngine__UnitySynchronizationContext__WorkRequest;
}
// Type: ::WorkRequest
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10180))
// CS Name: UnityEngine.UnitySynchronizationContext::WorkRequest
struct CORDL_TYPE UnityEngine__UnitySynchronizationContext__WorkRequest : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "System::Threading::SendOrPostCallback", modifiers: "", def_value: None }, CppParam { name: "m_DelagateState", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "m_WaitHandle", ty: "System::Threading::ManualResetEvent", modifiers: "", def_value: None }]
constexpr UnityEngine__UnitySynchronizationContext__WorkRequest(System::Threading::SendOrPostCallback m_DelagateCallback, ::bs_hook::Il2CppWrapperType m_DelagateState, System::Threading::ManualResetEvent m_WaitHandle) noexcept;


                    constexpr UnityEngine__UnitySynchronizationContext__WorkRequest(UnityEngine__UnitySynchronizationContext__WorkRequest const&) = default;
                    constexpr UnityEngine__UnitySynchronizationContext__WorkRequest(UnityEngine__UnitySynchronizationContext__WorkRequest&&) = default;
                    constexpr UnityEngine__UnitySynchronizationContext__WorkRequest& operator=(UnityEngine__UnitySynchronizationContext__WorkRequest const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UnitySynchronizationContext__WorkRequest& operator=(UnityEngine__UnitySynchronizationContext__WorkRequest&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UnitySynchronizationContext__WorkRequest(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::SendOrPostCallback __declspec(property(get=__get_m_DelagateCallback, put=__set_m_DelagateCallback))  m_DelagateCallback;

constexpr void __set_m_DelagateCallback(System::Threading::SendOrPostCallback value) ;

constexpr System::Threading::SendOrPostCallback __get_m_DelagateCallback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_DelagateState, put=__set_m_DelagateState))  m_DelagateState;

constexpr void __set_m_DelagateState(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_DelagateState() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_m_WaitHandle, put=__set_m_WaitHandle))  m_WaitHandle;

constexpr void __set_m_WaitHandle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_m_WaitHandle() const;


// Methods

/// @brief Method .ctor addr 0x2b5d2c8 size 0xc virtual false final false
 void _ctor(System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state, System::Threading::ManualResetEvent waitHandle) ;

/// @brief Method Invoke addr 0x2b5d668 size 0xac virtual false final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::UnitySynchronizationContext
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10181))
// CS Name: UnityEngine.UnitySynchronizationContext
class CORDL_TYPE UnitySynchronizationContext : public System::Threading::SynchronizationContext {
public:
// Declarations
using WorkRequest = UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnitySynchronizationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: " const&", def_value: None }]
constexpr UnitySynchronizationContext(UnitySynchronizationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "&&", def_value: None }]
constexpr UnitySynchronizationContext(UnitySynchronizationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnitySynchronizationContext(void* ptr) noexcept : System::Threading::SynchronizationContext(ptr) {
}


  constexpr UnitySynchronizationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnitySynchronizationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnitySynchronizationContext& operator=(UnitySynchronizationContext&& o) noexcept = default;
  constexpr UnitySynchronizationContext& operator=(UnitySynchronizationContext const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> __declspec(property(get=__get_m_AsyncWorkQueue, put=__set_m_AsyncWorkQueue))  m_AsyncWorkQueue;

constexpr void __set_m_AsyncWorkQueue(System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> __get_m_AsyncWorkQueue() const;

 System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> __declspec(property(get=__get_m_CurrentFrameWork, put=__set_m_CurrentFrameWork))  m_CurrentFrameWork;

constexpr void __set_m_CurrentFrameWork(System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> __get_m_CurrentFrameWork() const;

 int32_t __declspec(property(get=__get_m_MainThreadID, put=__set_m_MainThreadID))  m_MainThreadID;

constexpr void __set_m_MainThreadID(int32_t value) ;

constexpr int32_t __get_m_MainThreadID() const;

 int32_t __declspec(property(get=__get_m_TrackedCount, put=__set_m_TrackedCount))  m_TrackedCount;

constexpr void __set_m_TrackedCount(int32_t value) ;

constexpr int32_t __get_m_TrackedCount() const;


// Methods

// Ctor Parameters [CppParam { name: "mainThreadID", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnitySynchronizationContext(int32_t mainThreadID) ;

/// @brief Method .ctor addr 0x2b5ce6c size 0xb8 virtual false final false
 void _ctor(int32_t mainThreadID) ;

// Ctor Parameters [CppParam { name: "queue", ty: "System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest>", modifiers: "", def_value: None }, CppParam { name: "mainThreadID", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnitySynchronizationContext(System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> queue, int32_t mainThreadID) ;

/// @brief Method .ctor addr 0x2b5cf24 size 0xa0 virtual false final false
 void _ctor(System::Collections::Generic::List_1<UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest> queue, int32_t mainThreadID) ;

/// @brief Method Send addr 0x2b5cfc4 size 0x304 virtual true final false
 void Send(System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method OperationStarted addr 0x2b5d2d4 size 0xc virtual true final false
 void OperationStarted() ;

/// @brief Method OperationCompleted addr 0x2b5d2e0 size 0xc virtual true final false
 void OperationCompleted() ;

/// @brief Method Post addr 0x2b5d2ec size 0x150 virtual true final false
 void Post(System::Threading::SendOrPostCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method CreateCopy addr 0x2b5d43c size 0x6c virtual true final false
 System::Threading::SynchronizationContext CreateCopy() ;

/// @brief Method Exec addr 0x2b5d4a8 size 0x1c0 virtual false final false
 void Exec() ;

/// @brief Method HasPendingTasks addr 0x2b5d714 size 0x60 virtual false final false
 bool HasPendingTasks() ;

/// @brief Method InitializeSynchronizationContext addr 0x2b5d774 size 0x7c virtual false final false
static void InitializeSynchronizationContext() ;

/// @brief Method ExecuteTasks addr 0x2b5d7f0 size 0x64 virtual false final false
static void ExecuteTasks() ;

/// @brief Method ExecutePendingTasks addr 0x2b5d854 size 0xf0 virtual false final false
static bool ExecutePendingTasks(int64_t millisecondsTimeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::UnitySynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnitySynchronizationContext, "UnityEngine", "UnitySynchronizationContext");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__UnitySynchronizationContext__WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
