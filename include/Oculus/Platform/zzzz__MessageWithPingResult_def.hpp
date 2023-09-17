#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class PingResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPingResult;
}
// Type: Oculus.Platform::MessageWithPingResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 950 }), TypeDefinitionIndex(TypeDefinitionIndex(13461)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13291))
// CS Name: Oculus.Platform.MessageWithPingResult
class CORDL_TYPE MessageWithPingResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PingResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPingResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPingResult", modifiers: " const&", def_value: None }]
constexpr MessageWithPingResult(MessageWithPingResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPingResult", modifiers: "&&", def_value: None }]
constexpr MessageWithPingResult(MessageWithPingResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPingResult(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PingResult>(ptr) {
}


  constexpr MessageWithPingResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPingResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPingResult& operator=(MessageWithPingResult&& o) noexcept = default;
  constexpr MessageWithPingResult& operator=(MessageWithPingResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPingResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f608 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPingResult addr 0x2584524 size 0x3c virtual true final false
 ::Oculus::Platform::Models::PingResult GetPingResult() ;

/// @brief Method GetDataFromMessage addr 0x2584560 size 0x114 virtual true final false
 ::Oculus::Platform::Models::PingResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithPingResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPingResult, "Oculus.Platform", "MessageWithPingResult");
