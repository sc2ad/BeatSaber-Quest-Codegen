#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAbuseReportRecording;
}
// Type: Oculus.Platform::MessageWithAbuseReportRecording
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4423 }), TypeDefinitionIndex(TypeDefinitionIndex(13379))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13208))
// CS Name: Oculus.Platform.MessageWithAbuseReportRecording
class CORDL_TYPE MessageWithAbuseReportRecording : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAbuseReportRecording() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: " const&", def_value: None }]
constexpr MessageWithAbuseReportRecording(MessageWithAbuseReportRecording const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: "&&", def_value: None }]
constexpr MessageWithAbuseReportRecording(MessageWithAbuseReportRecording&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAbuseReportRecording(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording>(ptr) {
}


  constexpr MessageWithAbuseReportRecording& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAbuseReportRecording& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAbuseReportRecording& operator=(MessageWithAbuseReportRecording&& o) noexcept = default;
  constexpr MessageWithAbuseReportRecording& operator=(MessageWithAbuseReportRecording const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAbuseReportRecording(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257fb00 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAbuseReportRecording addr 0x257fb58 size 0x3c virtual true final false
 ::Oculus::Platform::Models::AbuseReportRecording GetAbuseReportRecording() ;

/// @brief Method GetDataFromMessage addr 0x257fb94 size 0x9c virtual true final false
 ::Oculus::Platform::Models::AbuseReportRecording GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithAbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAbuseReportRecording, "Oculus.Platform", "MessageWithAbuseReportRecording");
