#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
// Type: UnityEngine.ResourceManagement::WebRequestQueueOperation
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14240))
// CS Name: UnityEngine.ResourceManagement.WebRequestQueueOperation
class CORDL_TYPE WebRequestQueueOperation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~WebRequestQueueOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueueOperation", modifiers: " const&", def_value: None }]
constexpr WebRequestQueueOperation(WebRequestQueueOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestQueueOperation", modifiers: "&&", def_value: None }]
constexpr WebRequestQueueOperation(WebRequestQueueOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestQueueOperation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebRequestQueueOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestQueueOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestQueueOperation& operator=(WebRequestQueueOperation&& o) noexcept = default;
  constexpr WebRequestQueueOperation& operator=(WebRequestQueueOperation const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Completed, put=__set_m_Completed))  m_Completed;

constexpr void __set_m_Completed(bool value) ;

constexpr bool __get_m_Completed() const;

 UnityEngine::Networking::UnityWebRequestAsyncOperation __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(UnityEngine::Networking::UnityWebRequestAsyncOperation value) ;

constexpr UnityEngine::Networking::UnityWebRequestAsyncOperation __get_Result() const;

 System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> __declspec(property(get=__get_OnComplete, put=__set_OnComplete))  OnComplete;

constexpr void __set_OnComplete(System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> value) ;

constexpr System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation> __get_OnComplete() const;

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get_m_WebRequest, put=__set_m_WebRequest))  m_WebRequest;

constexpr void __set_m_WebRequest(UnityEngine::Networking::UnityWebRequest value) ;

constexpr UnityEngine::Networking::UnityWebRequest __get_m_WebRequest() const;


// Properties

 bool __declspec(property(get=get_IsDone))  IsDone;


// Methods

/// @brief Method get_IsDone addr 0x2a375b4 size 0x20 virtual false final false
 bool get_IsDone() ;

static UnityEngine::ResourceManagement::WebRequestQueueOperation New_ctor(UnityEngine::Networking::UnityWebRequest request) ;

/// @brief Method .ctor addr 0x2a375d4 size 0x28 virtual false final false
 void _ctor(UnityEngine::Networking::UnityWebRequest request) ;

/// @brief Method Complete addr 0x2a375fc size 0x28 virtual false final false
 void Complete(UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
NEED_NO_BOX(UnityEngine::ResourceManagement::WebRequestQueueOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::WebRequestQueueOperation, "UnityEngine.ResourceManagement", "WebRequestQueueOperation");
