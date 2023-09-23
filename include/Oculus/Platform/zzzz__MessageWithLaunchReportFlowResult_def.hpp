#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchReportFlowResult;
}
// Type: Oculus.Platform::MessageWithLaunchReportFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13425)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4449 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13243))
// CS Name: Oculus.Platform.MessageWithLaunchReportFlowResult
class CORDL_TYPE MessageWithLaunchReportFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchReportFlowResult> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithLaunchReportFlowResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: " const&", def_value: None }]
constexpr MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: "&&", def_value: None }]
constexpr MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithLaunchReportFlowResult(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchReportFlowResult>(ptr) {
}


  constexpr MessageWithLaunchReportFlowResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithLaunchReportFlowResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithLaunchReportFlowResult& operator=(MessageWithLaunchReportFlowResult&& o) noexcept = default;
  constexpr MessageWithLaunchReportFlowResult& operator=(MessageWithLaunchReportFlowResult const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithLaunchReportFlowResult(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2581910 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetLaunchReportFlowResult addr 0x2581968 size 0x3c virtual true final false
 Oculus::Platform::Models::LaunchReportFlowResult GetLaunchReportFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x25819a4 size 0x9c virtual true final false
 Oculus::Platform::Models::LaunchReportFlowResult GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithLaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchReportFlowResult, "Oculus.Platform", "MessageWithLaunchReportFlowResult");
