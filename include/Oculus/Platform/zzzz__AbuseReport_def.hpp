#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReport;
}
// Type: Oculus.Platform::AbuseReport
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13321))
// CS Name: Oculus.Platform.AbuseReport
class CORDL_TYPE AbuseReport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbuseReport() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: " const&", def_value: None }]
constexpr AbuseReport(AbuseReport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "&&", def_value: None }]
constexpr AbuseReport(AbuseReport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbuseReport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbuseReport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbuseReport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbuseReport& operator=(AbuseReport&& o) noexcept = default;
  constexpr AbuseReport& operator=(AbuseReport const& o) noexcept = default;
                


// Methods

/// @brief Method ReportRequestHandled addr 0x258f5e8 size 0x14c virtual false final false
static Oculus::Platform::Request ReportRequestHandled(Oculus::Platform::ReportRequestResponse response) ;

/// @brief Method SetReportButtonPressedNotificationCallback addr 0x258f734 size 0x74 virtual false final false
static void SetReportButtonPressedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<::StringW> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::AbuseReport);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AbuseReport, "Oculus.Platform", "AbuseReport");
