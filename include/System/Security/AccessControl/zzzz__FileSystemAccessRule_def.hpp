#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
namespace System::Security::AccessControl {
struct FileSystemRights;
}
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct AccessControlType;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class FileSystemAccessRule;
}
// Type: System.Security.AccessControl::FileSystemAccessRule
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3028))
// CS Name: System.Security.AccessControl.FileSystemAccessRule
class CORDL_TYPE FileSystemAccessRule : public System::Security::AccessControl::AccessRule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FileSystemAccessRule() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemAccessRule", modifiers: " const&", def_value: None }]
constexpr FileSystemAccessRule(FileSystemAccessRule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemAccessRule", modifiers: "&&", def_value: None }]
constexpr FileSystemAccessRule(FileSystemAccessRule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemAccessRule(void* ptr) noexcept : System::Security::AccessControl::AccessRule(ptr) {
}


  constexpr FileSystemAccessRule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemAccessRule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemAccessRule& operator=(FileSystemAccessRule&& o) noexcept = default;
  constexpr FileSystemAccessRule& operator=(FileSystemAccessRule const& o) noexcept = default;
                


// Properties

 System::Security::AccessControl::FileSystemRights __declspec(property(get=get_FileSystemRights))  FileSystemRights;


// Methods

static System::Security::AccessControl::FileSystemAccessRule New_ctor(System::Security::Principal::IdentityReference identity, System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type) ;

/// @brief Method .ctor addr 0x2318370 size 0x8 virtual false final false
 void _ctor(System::Security::Principal::IdentityReference identity, System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited, System::Security::AccessControl::InheritanceFlags inheritanceFlags, System::Security::AccessControl::PropagationFlags propagationFlags, System::Security::AccessControl::AccessControlType type) ;

/// @brief Method get_FileSystemRights addr 0x2318378 size 0x8 virtual false final false
 System::Security::AccessControl::FileSystemRights get_FileSystemRights() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::FileSystemAccessRule);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::FileSystemAccessRule, "System.Security.AccessControl", "FileSystemAccessRule");
