#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Type: UnityEngine.Networking::UnityWebRequestAsyncOperation
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15551))
// CS Name: UnityEngine.Networking.UnityWebRequestAsyncOperation
class CORDL_TYPE UnityWebRequestAsyncOperation : public UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityWebRequestAsyncOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperation", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestAsyncOperation(UnityWebRequestAsyncOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestAsyncOperation(void* ptr) noexcept : UnityEngine::AsyncOperation(ptr) {
}


  constexpr UnityWebRequestAsyncOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestAsyncOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestAsyncOperation& operator=(UnityWebRequestAsyncOperation&& o) noexcept = default;
  constexpr UnityWebRequestAsyncOperation& operator=(UnityWebRequestAsyncOperation const& o) noexcept = default;
                


// Fields

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__webRequest_k__BackingField, put=__set__webRequest_k__BackingField))  _webRequest_k__BackingField;

constexpr void __set__webRequest_k__BackingField(UnityEngine::Networking::UnityWebRequest value) ;

constexpr UnityEngine::Networking::UnityWebRequest __get__webRequest_k__BackingField() const;


// Properties

 UnityEngine::Networking::UnityWebRequest __declspec(property(get=get_webRequest, put=set_webRequest))  webRequest;


// Methods

/// @brief Method get_webRequest addr 0x2d35494 size 0x8 virtual false final false
 UnityEngine::Networking::UnityWebRequest get_webRequest() ;

/// @brief Method set_webRequest addr 0x2d3549c size 0x8 virtual false final false
 void set_webRequest(UnityEngine::Networking::UnityWebRequest value) ;

static UnityEngine::Networking::UnityWebRequestAsyncOperation New_ctor() ;

/// @brief Method .ctor addr 0x2d354a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::UnityWebRequestAsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestAsyncOperation, "UnityEngine.Networking", "UnityWebRequestAsyncOperation");
