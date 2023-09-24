#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncHandshakeRequest;
}
// Type: Mono.Net.Security::AsyncHandshakeRequest
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7673))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7674))
// CS Name: Mono.Net.Security.AsyncHandshakeRequest
class CORDL_TYPE AsyncHandshakeRequest : public Mono::Net::Security::AsyncProtocolRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AsyncHandshakeRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHandshakeRequest", modifiers: " const&", def_value: None }]
constexpr AsyncHandshakeRequest(AsyncHandshakeRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHandshakeRequest", modifiers: "&&", def_value: None }]
constexpr AsyncHandshakeRequest(AsyncHandshakeRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncHandshakeRequest(void* ptr) noexcept : Mono::Net::Security::AsyncProtocolRequest(ptr) {
}


  constexpr AsyncHandshakeRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncHandshakeRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncHandshakeRequest& operator=(AsyncHandshakeRequest&& o) noexcept = default;
  constexpr AsyncHandshakeRequest& operator=(AsyncHandshakeRequest const& o) noexcept = default;
                


// Methods

static Mono::Net::Security::AsyncHandshakeRequest New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync) ;

/// @brief Method .ctor addr 0x268dd08 size 0x8 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync) ;

/// @brief Method Run addr 0x268dd10 size 0x1c virtual true final false
 Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncHandshakeRequest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncHandshakeRequest, "Mono.Net.Security", "AsyncHandshakeRequest");
