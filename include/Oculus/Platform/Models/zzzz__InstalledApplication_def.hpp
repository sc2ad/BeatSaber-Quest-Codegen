#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class InstalledApplication;
}
// Type: Oculus.Platform.Models::InstalledApplication
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13417))
// CS Name: Oculus.Platform.Models.InstalledApplication
class CORDL_TYPE InstalledApplication : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~InstalledApplication() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: " const&", def_value: None }]
constexpr InstalledApplication(InstalledApplication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: "&&", def_value: None }]
constexpr InstalledApplication(InstalledApplication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstalledApplication(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstalledApplication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstalledApplication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstalledApplication& operator=(InstalledApplication&& o) noexcept = default;
  constexpr InstalledApplication& operator=(InstalledApplication const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ApplicationId, put=__set_ApplicationId))  ApplicationId;

constexpr void __set_ApplicationId(::StringW value) ;

constexpr ::StringW __get_ApplicationId() const;

 ::StringW __declspec(property(get=__get_PackageName, put=__set_PackageName))  PackageName;

constexpr void __set_PackageName(::StringW value) ;

constexpr ::StringW __get_PackageName() const;

 ::StringW __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(::StringW value) ;

constexpr ::StringW __get_Status() const;

 int32_t __declspec(property(get=__get_VersionCode, put=__set_VersionCode))  VersionCode;

constexpr void __set_VersionCode(int32_t value) ;

constexpr int32_t __get_VersionCode() const;

 ::StringW __declspec(property(get=__get_VersionName, put=__set_VersionName))  VersionName;

constexpr void __set_VersionName(::StringW value) ;

constexpr ::StringW __get_VersionName() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit InstalledApplication(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259edf4 size 0xb8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::InstalledApplication);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InstalledApplication, "Oculus.Platform.Models", "InstalledApplication");
