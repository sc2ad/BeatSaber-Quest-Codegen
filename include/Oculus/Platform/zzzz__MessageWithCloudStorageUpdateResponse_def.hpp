#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageUpdateResponse;
}
// Type: Oculus.Platform::MessageWithCloudStorageUpdateResponse
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4443 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13232))
// CS Name: Oculus.Platform.MessageWithCloudStorageUpdateResponse
class CORDL_TYPE MessageWithCloudStorageUpdateResponse : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageUpdateResponse> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCloudStorageUpdateResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageUpdateResponse", modifiers: " const&", def_value: None }]
constexpr MessageWithCloudStorageUpdateResponse(MessageWithCloudStorageUpdateResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageUpdateResponse", modifiers: "&&", def_value: None }]
constexpr MessageWithCloudStorageUpdateResponse(MessageWithCloudStorageUpdateResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCloudStorageUpdateResponse(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageUpdateResponse>(ptr) {
}


  constexpr MessageWithCloudStorageUpdateResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCloudStorageUpdateResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCloudStorageUpdateResponse& operator=(MessageWithCloudStorageUpdateResponse&& o) noexcept = default;
  constexpr MessageWithCloudStorageUpdateResponse& operator=(MessageWithCloudStorageUpdateResponse const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCloudStorageUpdateResponse(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e530 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCloudStorageUpdateResponse addr 0x2580ff0 size 0x3c virtual true final false
 Oculus::Platform::Models::CloudStorageUpdateResponse GetCloudStorageUpdateResponse() ;

/// @brief Method GetDataFromMessage addr 0x258102c size 0x9c virtual true final false
 Oculus::Platform::Models::CloudStorageUpdateResponse GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCloudStorageUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageUpdateResponse, "Oculus.Platform", "MessageWithCloudStorageUpdateResponse");
