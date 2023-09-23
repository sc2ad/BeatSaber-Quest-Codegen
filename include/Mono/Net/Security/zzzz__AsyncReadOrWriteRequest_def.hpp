#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncReadOrWriteRequest;
}
// Type: Mono.Net.Security::AsyncReadOrWriteRequest
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7673))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7675))
// CS Name: Mono.Net.Security.AsyncReadOrWriteRequest
class CORDL_TYPE AsyncReadOrWriteRequest : public Mono::Net::Security::AsyncProtocolRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AsyncReadOrWriteRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: " const&", def_value: None }]
constexpr AsyncReadOrWriteRequest(AsyncReadOrWriteRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: "&&", def_value: None }]
constexpr AsyncReadOrWriteRequest(AsyncReadOrWriteRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncReadOrWriteRequest(void* ptr) noexcept : Mono::Net::Security::AsyncProtocolRequest(ptr) {
}


  constexpr AsyncReadOrWriteRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncReadOrWriteRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncReadOrWriteRequest& operator=(AsyncReadOrWriteRequest&& o) noexcept = default;
  constexpr AsyncReadOrWriteRequest& operator=(AsyncReadOrWriteRequest const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::BufferOffsetSize __declspec(property(get=__get__UserBuffer_k__BackingField, put=__set__UserBuffer_k__BackingField))  _UserBuffer_k__BackingField;

constexpr void __set__UserBuffer_k__BackingField(Mono::Net::Security::BufferOffsetSize value) ;

constexpr Mono::Net::Security::BufferOffsetSize __get__UserBuffer_k__BackingField() const;

 int32_t __declspec(property(get=__get__CurrentSize_k__BackingField, put=__set__CurrentSize_k__BackingField))  _CurrentSize_k__BackingField;

constexpr void __set__CurrentSize_k__BackingField(int32_t value) ;

constexpr int32_t __get__CurrentSize_k__BackingField() const;


// Properties

 Mono::Net::Security::BufferOffsetSize __declspec(property(get=get_UserBuffer))  UserBuffer;

 int32_t __declspec(property(get=get_CurrentSize, put=set_CurrentSize))  CurrentSize;


// Methods

/// @brief Method get_UserBuffer addr 0x268e104 size 0x8 virtual false final false
 Mono::Net::Security::BufferOffsetSize get_UserBuffer() ;

/// @brief Method get_CurrentSize addr 0x268e10c size 0x8 virtual false final false
 int32_t get_CurrentSize() ;

/// @brief Method set_CurrentSize addr 0x268e114 size 0x8 virtual false final false
 void set_CurrentSize(int32_t value) ;

// Ctor Parameters [CppParam { name: "parent", ty: "Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "sync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit AsyncReadOrWriteRequest(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method .ctor addr 0x268e11c size 0xa4 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync, ::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method ToString addr 0x268e1c0 size 0x5c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncReadOrWriteRequest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncReadOrWriteRequest, "Mono.Net.Security", "AsyncReadOrWriteRequest");
