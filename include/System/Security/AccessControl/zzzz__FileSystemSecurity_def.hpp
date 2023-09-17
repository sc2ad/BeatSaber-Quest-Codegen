#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::AccessControl {
class AccessRule;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSystemSecurity;
}
// Type: System.Security.AccessControl::FileSystemSecurity
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3030))
// CS Name: System.Security.AccessControl.FileSystemSecurity
class CORDL_TYPE FileSystemSecurity : public ::System::Security::AccessControl::NativeObjectSecurity {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FileSystemSecurity() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemSecurity", modifiers: " const&", def_value: None }]
constexpr FileSystemSecurity(FileSystemSecurity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemSecurity", modifiers: "&&", def_value: None }]
constexpr FileSystemSecurity(FileSystemSecurity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemSecurity(void* ptr) noexcept : ::System::Security::AccessControl::NativeObjectSecurity(ptr) {
}


  constexpr FileSystemSecurity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemSecurity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemSecurity& operator=(FileSystemSecurity&& o) noexcept = default;
  constexpr FileSystemSecurity& operator=(FileSystemSecurity const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "isContainer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "includeSections", ty: "::System::Security::AccessControl::AccessControlSections", modifiers: "", def_value: None }]
explicit FileSystemSecurity(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method .ctor addr 0x2318174 size 0x18 virtual false final false
 void _ctor(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method AccessRuleFactory addr 0x2318390 size 0xa0 virtual true final true
 ::System::Security::AccessControl::AccessRule AccessRuleFactory(::System::Security::Principal::IdentityReference identityReference, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::FileSystemSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::FileSystemSecurity, "System.Security.AccessControl", "FileSystemSecurity");
