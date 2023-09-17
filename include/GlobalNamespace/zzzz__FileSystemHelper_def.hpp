#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Security::AccessControl {
class FileSystemSecurity;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemHelper;
}
// Type: ::FileSystemHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5921))
// CS Name: FileSystemHelper
class CORDL_TYPE FileSystemHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileSystemHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: " const&", def_value: None }]
constexpr FileSystemHelper(FileSystemHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemHelper", modifiers: "&&", def_value: None }]
constexpr FileSystemHelper(FileSystemHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSystemHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemHelper& operator=(FileSystemHelper&& o) noexcept = default;
  constexpr FileSystemHelper& operator=(FileSystemHelper const& o) noexcept = default;
                


// Methods

/// @brief Method FindFirstExistedParentPath addr 0x21924ec size 0x90 virtual false final false
static ::StringW FindFirstExistedParentPath(::StringW path) ;

/// @brief Method HasWritePermission addr 0x219257c size 0x398 virtual false final false
static bool HasWritePermission(::System::Security::AccessControl::FileSystemSecurity accessControlList) ;

/// @brief Method HasWritePermissionOnDirectory addr 0x2192914 size 0x14 virtual false final false
static bool HasWritePermissionOnDirectory(::StringW path) ;

/// @brief Method HasWritePermissionOnFile addr 0x2192928 size 0x14 virtual false final false
static bool HasWritePermissionOnFile(::StringW path) ;

/// @brief Method IsFileWritable addr 0x219293c size 0x74 virtual false final false
static bool IsFileWritable(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FileSystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemHelper, "", "FileSystemHelper");
