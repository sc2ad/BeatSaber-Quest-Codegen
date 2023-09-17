#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class WebRequestQueue;
}
// Type: UnityEngine.ResourceManagement::WebRequestQueue
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14241))
// CS Name: UnityEngine.ResourceManagement.WebRequestQueue
class CORDL_TYPE WebRequestQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebRequestQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: " const&", def_value: None }]
constexpr WebRequestQueue(WebRequestQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueue", modifiers: "&&", def_value: None }]
constexpr WebRequestQueue(WebRequestQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebRequestQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestQueue& operator=(WebRequestQueue&& o) noexcept = default;
  constexpr WebRequestQueue& operator=(WebRequestQueue const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_MaxRequest, put=__set_s_MaxRequest))  s_MaxRequest;

static void __set_s_MaxRequest(int32_t value) ;

static int32_t __get_s_MaxRequest() ;

static ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation> __declspec(property(get=__get_s_QueuedOperations, put=__set_s_QueuedOperations))  s_QueuedOperations;

static void __set_s_QueuedOperations(::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation> value) ;

static ::System::Collections::Generic::Queue_1<::UnityEngine::ResourceManagement::WebRequestQueueOperation> __get_s_QueuedOperations() ;

static ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation> __declspec(property(get=__get_s_ActiveRequests, put=__set_s_ActiveRequests))  s_ActiveRequests;

static void __set_s_ActiveRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequestAsyncOperation> __get_s_ActiveRequests() ;


// Methods

/// @brief Method SetMaxConcurrentRequests addr 0x2a37624 size 0xc4 virtual false final false
static void SetMaxConcurrentRequests(int32_t maxRequests) ;

/// @brief Method QueueRequest addr 0x2a376e8 size 0x344 virtual false final false
static ::UnityEngine::ResourceManagement::WebRequestQueueOperation QueueRequest(::UnityEngine::Networking::UnityWebRequest request) ;

/// @brief Method WaitForRequestToBeActive addr 0x2a37c8c size 0x48c virtual false final false
static void WaitForRequestToBeActive(::UnityEngine::ResourceManagement::WebRequestQueueOperation request, int32_t millisecondsTimeout) ;

/// @brief Method OnWebAsyncOpComplete addr 0x2a37a2c size 0x260 virtual false final false
static void OnWebAsyncOpComplete(::UnityEngine::AsyncOperation operation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::WebRequestQueue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::WebRequestQueue, "UnityEngine.ResourceManagement", "WebRequestQueue");
