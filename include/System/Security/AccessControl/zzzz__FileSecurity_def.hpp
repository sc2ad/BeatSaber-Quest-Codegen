#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSecurity;
}
// Type: System.Security.AccessControl::FileSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3027))
// CS Name: System.Security.AccessControl.FileSecurity
class CORDL_TYPE FileSecurity : public System::Security::AccessControl::FileSystemSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FileSecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: " const&", def_value: None }]
constexpr FileSecurity(FileSecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSecurity", modifiers: "&&", def_value: None }]
constexpr FileSecurity(FileSecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSecurity(void* ptr) noexcept : System::Security::AccessControl::FileSystemSecurity(ptr) {
}


  constexpr FileSecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSecurity& operator=(FileSecurity&& o) noexcept = default;
  constexpr FileSecurity& operator=(FileSecurity const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
explicit FileSecurity(::StringW fileName, System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method .ctor addr 0x2318358 size 0x18 virtual false final false
 void _ctor(::StringW fileName, System::Security::AccessControl::AccessControlSections includeSections) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::FileSecurity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::FileSecurity, "System.Security.AccessControl", "FileSecurity");
