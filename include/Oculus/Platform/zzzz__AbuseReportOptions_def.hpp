#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct AbuseReportType;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReportOptions;
}
// Type: Oculus.Platform::AbuseReportOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13158))
// CS Name: Oculus.Platform.AbuseReportOptions
class CORDL_TYPE AbuseReportOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AbuseReportOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportOptions", modifiers: " const&", def_value: None }]
constexpr AbuseReportOptions(AbuseReportOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbuseReportOptions", modifiers: "&&", def_value: None }]
constexpr AbuseReportOptions(AbuseReportOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbuseReportOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbuseReportOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbuseReportOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbuseReportOptions& operator=(AbuseReportOptions&& o) noexcept = default;
  constexpr AbuseReportOptions& operator=(AbuseReportOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

static Oculus::Platform::AbuseReportOptions New_ctor() ;

/// @brief Method .ctor addr 0x2552018 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetPreventPeopleChooser addr 0x25520e4 size 0x68 virtual false final false
 void SetPreventPeopleChooser(bool value) ;

/// @brief Method SetReportType addr 0x25521d0 size 0x68 virtual false final false
 void SetReportType(Oculus::Platform::AbuseReportType value) ;

/// @brief Method op_Explicit addr 0x25522bc size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::AbuseReportOptions options) ;

/// @brief Method Finalize addr 0x2552314 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::AbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AbuseReportOptions, "Oculus.Platform", "AbuseReportOptions");
