#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::IO {
class DirectoryInfo;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO {
struct SearchOption;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::IO {
struct SearchTarget;
}
namespace System::Security::AccessControl {
class DirectorySecurity;
}
// Forward declare root types
namespace System::IO {
class Directory;
}
// Type: System.IO::Directory
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3575))
// CS Name: System.IO.Directory
class CORDL_TYPE Directory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Directory() = default;

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: " const&", def_value: None }]
constexpr Directory(Directory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Directory", modifiers: "&&", def_value: None }]
constexpr Directory(Directory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Directory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Directory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Directory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Directory& operator=(Directory&& o) noexcept = default;
  constexpr Directory& operator=(Directory const& o) noexcept = default;
                


// Methods

/// @brief Method GetParent addr 0x2399f44 size 0x14c virtual false final false
static System::IO::DirectoryInfo GetParent(::StringW path) ;

/// @brief Method CreateDirectory addr 0x239a114 size 0x150 virtual false final false
static System::IO::DirectoryInfo CreateDirectory(::StringW path) ;

/// @brief Method Exists addr 0x239a88c size 0x17c virtual false final false
static bool Exists(::StringW path) ;

/// @brief Method GetFiles addr 0x239aa28 size 0xa8 virtual false final false
static ::ArrayW<::StringW> GetFiles(::StringW path) ;

/// @brief Method GetFiles addr 0x239ab38 size 0xa0 virtual false final false
static ::ArrayW<::StringW> GetFiles(::StringW path, ::StringW searchPattern) ;

/// @brief Method GetFiles addr 0x239abd8 size 0x74 virtual false final false
static ::ArrayW<::StringW> GetFiles(::StringW path, ::StringW searchPattern, System::IO::SearchOption searchOption) ;

/// @brief Method GetFiles addr 0x239aad0 size 0x68 virtual false final false
static ::ArrayW<::StringW> GetFiles(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions) ;

/// @brief Method InternalEnumeratePaths addr 0x239ad88 size 0x1cc virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> InternalEnumeratePaths(::StringW path, ::StringW searchPattern, System::IO::SearchTarget searchTarget, System::IO::EnumerationOptions options) ;

/// @brief Method EnumerateDirectories addr 0x239af54 size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> EnumerateDirectories(::StringW path, ::StringW searchPattern, System::IO::SearchOption searchOption) ;

/// @brief Method EnumerateDirectories addr 0x239afcc size 0xc virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> EnumerateDirectories(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions) ;

/// @brief Method EnumerateFileSystemEntries addr 0x239afd8 size 0xac virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> EnumerateFileSystemEntries(::StringW path) ;

/// @brief Method EnumerateFileSystemEntries addr 0x239b084 size 0xc virtual false final false
static System::Collections::Generic::IEnumerable_1<::StringW> EnumerateFileSystemEntries(::StringW path, ::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions) ;

/// @brief Method InternalGetDirectoryRoot addr 0x239b090 size 0xb8 virtual false final false
static ::StringW InternalGetDirectoryRoot(::StringW path) ;

/// @brief Method GetCurrentDirectory addr 0x239b148 size 0x8 virtual false final false
static ::StringW GetCurrentDirectory() ;

/// @brief Method GetLogicalDrives addr 0x239b150 size 0x8 virtual false final false
static ::ArrayW<::StringW> GetLogicalDrives() ;

/// @brief Method GetAccessControl addr 0x239b160 size 0x74 virtual false final false
static System::Security::AccessControl::DirectorySecurity GetAccessControl(::StringW path, System::Security::AccessControl::AccessControlSections includeSections) ;

/// @brief Method GetAccessControl addr 0x239b1d4 size 0x8 virtual false final false
static System::Security::AccessControl::DirectorySecurity GetAccessControl(::StringW path) ;

/// @brief Method InsecureGetCurrentDirectory addr 0x239b1dc size 0x9c virtual false final false
static ::StringW InsecureGetCurrentDirectory() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::Directory);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Directory, "System.IO", "Directory");
