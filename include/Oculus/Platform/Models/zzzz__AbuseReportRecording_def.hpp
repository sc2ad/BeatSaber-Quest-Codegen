#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
// Type: Oculus.Platform.Models::AbuseReportRecording
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13379))
// CS Name: Oculus.Platform.Models.AbuseReportRecording
class CORDL_TYPE AbuseReportRecording : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AbuseReportRecording() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: " const&", def_value: None }]
constexpr AbuseReportRecording(AbuseReportRecording const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: "&&", def_value: None }]
constexpr AbuseReportRecording(AbuseReportRecording&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbuseReportRecording(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbuseReportRecording& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbuseReportRecording& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbuseReportRecording& operator=(AbuseReportRecording&& o) noexcept = default;
  constexpr AbuseReportRecording& operator=(AbuseReportRecording const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_RecordingUuid, put=__set_RecordingUuid))  RecordingUuid;

constexpr void __set_RecordingUuid(::StringW value) ;

constexpr ::StringW __get_RecordingUuid() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AbuseReportRecording(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259bc00 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::AbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AbuseReportRecording, "Oculus.Platform.Models", "AbuseReportRecording");
