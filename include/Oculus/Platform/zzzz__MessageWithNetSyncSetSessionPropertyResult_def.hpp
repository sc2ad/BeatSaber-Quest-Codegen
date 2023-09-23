#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSetSessionPropertyResult;
}
// Type: Oculus.Platform::MessageWithNetSyncSetSessionPropertyResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4463 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13451))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13260))
// CS Name: Oculus.Platform.MessageWithNetSyncSetSessionPropertyResult
class CORDL_TYPE MessageWithNetSyncSetSessionPropertyResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSetSessionPropertyResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetSyncSetSessionPropertyResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: " const&", def_value: None }]
constexpr MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
constexpr MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetSyncSetSessionPropertyResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSetSessionPropertyResult>(ptr) {
}


  constexpr MessageWithNetSyncSetSessionPropertyResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetSyncSetSessionPropertyResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetSyncSetSessionPropertyResult& operator=(MessageWithNetSyncSetSessionPropertyResult&& o) noexcept = default;
  constexpr MessageWithNetSyncSetSessionPropertyResult& operator=(MessageWithNetSyncSetSessionPropertyResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetSyncSetSessionPropertyResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2582978 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetSyncSetSessionPropertyResult addr 0x25829d0 size 0x3c virtual true final false
 Oculus::Platform::Models::NetSyncSetSessionPropertyResult GetNetSyncSetSessionPropertyResult() ;

/// @brief Method GetDataFromMessage addr 0x2582a0c size 0x9c virtual true final false
 Oculus::Platform::Models::NetSyncSetSessionPropertyResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult, "Oculus.Platform", "MessageWithNetSyncSetSessionPropertyResult");
