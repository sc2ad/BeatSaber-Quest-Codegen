#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingStartResult;
}
// Type: Oculus.Platform::MessageWithLivestreamingStartResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13434)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4454 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13249))
// CS Name: Oculus.Platform.MessageWithLivestreamingStartResult
class CORDL_TYPE MessageWithLivestreamingStartResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingStartResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLivestreamingStartResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLivestreamingStartResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingStartResult>(ptr) {
}


  constexpr MessageWithLivestreamingStartResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLivestreamingStartResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLivestreamingStartResult& operator=(MessageWithLivestreamingStartResult&& o) noexcept = default;
  constexpr MessageWithLivestreamingStartResult& operator=(MessageWithLivestreamingStartResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLivestreamingStartResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2581f28 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLivestreamingStartResult addr 0x2581f80 size 0x3c virtual true final false
 Oculus::Platform::Models::LivestreamingStartResult GetLivestreamingStartResult() ;

/// @brief Method GetDataFromMessage addr 0x2581fbc size 0x9c virtual true final false
 Oculus::Platform::Models::LivestreamingStartResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLivestreamingStartResult, "Oculus.Platform", "MessageWithLivestreamingStartResult");
