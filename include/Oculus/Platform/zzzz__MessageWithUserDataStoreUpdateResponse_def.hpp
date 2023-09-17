#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserDataStoreUpdateResponse;
}
// Type: Oculus.Platform::MessageWithUserDataStoreUpdateResponse
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4478 }), TypeDefinitionIndex(TypeDefinitionIndex(13486))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13287))
// CS Name: Oculus.Platform.MessageWithUserDataStoreUpdateResponse
class CORDL_TYPE MessageWithUserDataStoreUpdateResponse : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserDataStoreUpdateResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: " const&", def_value: None }]
constexpr MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
constexpr MessageWithUserDataStoreUpdateResponse(MessageWithUserDataStoreUpdateResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserDataStoreUpdateResponse(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse>(ptr) {
}


  constexpr MessageWithUserDataStoreUpdateResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserDataStoreUpdateResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserDataStoreUpdateResponse& operator=(MessageWithUserDataStoreUpdateResponse&& o) noexcept = default;
  constexpr MessageWithUserDataStoreUpdateResponse& operator=(MessageWithUserDataStoreUpdateResponse const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithUserDataStoreUpdateResponse(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f500 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserDataStoreUpdateResponse addr 0x2584158 size 0x3c virtual true final false
 ::Oculus::Platform::Models::UserDataStoreUpdateResponse GetUserDataStoreUpdateResponse() ;

/// @brief Method GetDataFromMessage addr 0x2584194 size 0x9c virtual true final false
 ::Oculus::Platform::Models::UserDataStoreUpdateResponse GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserDataStoreUpdateResponse, "Oculus.Platform", "MessageWithUserDataStoreUpdateResponse");
