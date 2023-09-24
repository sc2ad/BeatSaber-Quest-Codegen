#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncReadRequest;
}
// Type: Mono.Net.Security::AsyncReadRequest
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7675))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7676))
// CS Name: Mono.Net.Security.AsyncReadRequest
class CORDL_TYPE AsyncReadRequest : public Mono::Net::Security::AsyncReadOrWriteRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AsyncReadRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadRequest", modifiers: " const&", def_value: None }]
constexpr AsyncReadRequest(AsyncReadRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadRequest", modifiers: "&&", def_value: None }]
constexpr AsyncReadRequest(AsyncReadRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncReadRequest(void* ptr) noexcept : Mono::Net::Security::AsyncReadOrWriteRequest(ptr) {
}


  constexpr AsyncReadRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncReadRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncReadRequest& operator=(AsyncReadRequest&& o) noexcept = default;
  constexpr AsyncReadRequest& operator=(AsyncReadRequest const& o) noexcept = default;
                


// Methods

static Mono::Net::Security::AsyncReadRequest New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method .ctor addr 0x268e21c size 0x8 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Run addr 0x268e224 size 0x68 virtual true final false
 Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncReadRequest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncReadRequest, "Mono.Net.Security", "AsyncReadRequest");
