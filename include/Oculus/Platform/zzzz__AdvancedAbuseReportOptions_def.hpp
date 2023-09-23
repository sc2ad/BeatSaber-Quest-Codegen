#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
// Forward declare root types
namespace Oculus::Platform {
class AdvancedAbuseReportOptions;
}
// Type: Oculus.Platform::AdvancedAbuseReportOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13162))
// CS Name: Oculus.Platform.AdvancedAbuseReportOptions
class CORDL_TYPE AdvancedAbuseReportOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AdvancedAbuseReportOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: " const&", def_value: None }]
constexpr AdvancedAbuseReportOptions(AdvancedAbuseReportOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "&&", def_value: None }]
constexpr AdvancedAbuseReportOptions(AdvancedAbuseReportOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdvancedAbuseReportOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AdvancedAbuseReportOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdvancedAbuseReportOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdvancedAbuseReportOptions& operator=(AdvancedAbuseReportOptions&& o) noexcept = default;
  constexpr AdvancedAbuseReportOptions& operator=(AdvancedAbuseReportOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit AdvancedAbuseReportOptions() ;

/// @brief Method .ctor addr 0x2552464 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetDeveloperDefinedContext addr 0x2552530 size 0x70 virtual false final false
 void SetDeveloperDefinedContext(::StringW key, ::StringW value) ;

/// @brief Method ClearDeveloperDefinedContext addr 0x2552660 size 0x58 virtual false final false
 void ClearDeveloperDefinedContext() ;

/// @brief Method SetObjectType addr 0x2552734 size 0x68 virtual false final false
 void SetObjectType(::StringW value) ;

/// @brief Method SetReportType addr 0x255283c size 0x68 virtual false final false
 void SetReportType(Oculus::Platform::AbuseReportType value) ;

/// @brief Method AddSuggestedUser addr 0x2552928 size 0x68 virtual false final false
 void AddSuggestedUser(uint64_t userID) ;

/// @brief Method ClearSuggestedUsers addr 0x2552a14 size 0x58 virtual false final false
 void ClearSuggestedUsers() ;

/// @brief Method SetVideoMode addr 0x2552ae8 size 0x68 virtual false final false
 void SetVideoMode(Oculus::Platform::AbuseReportVideoMode value) ;

/// @brief Method op_Explicit addr 0x2552bd4 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::AdvancedAbuseReportOptions options) ;

/// @brief Method Finalize addr 0x2552c2c size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::AdvancedAbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AdvancedAbuseReportOptions, "Oculus.Platform", "AdvancedAbuseReportOptions");
