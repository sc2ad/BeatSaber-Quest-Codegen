#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class DirectoryInfo;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__ErrorInfo;
}
namespace System::IO {
struct FileAttributes;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class FileSystem;
}
// Type: System.IO::FileSystem
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3581))
// CS Name: System.IO.FileSystem
class CORDL_TYPE FileSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: " const&", def_value: None }]
constexpr FileSystem(FileSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystem", modifiers: "&&", def_value: None }]
constexpr FileSystem(FileSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystem& operator=(FileSystem&& o) noexcept = default;
  constexpr FileSystem& operator=(FileSystem const& o) noexcept = default;
                


// Methods

/// @brief Method CopyDanglingSymlink addr 0x239eae0 size 0x168 virtual false final false
static bool CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath) ;

/// @brief Method CopyFile addr 0x239ec48 size 0x428 virtual false final false
static void CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite) ;

/// @brief Method LinkOrCopyFile addr 0x239f070 size 0x17c virtual false final false
static void LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath) ;

/// @brief Method ReplaceFile addr 0x239de80 size 0x170 virtual false final false
static void ReplaceFile(::StringW sourceFullPath, ::StringW destFullPath, ::StringW destBackupFullPath, bool ignoreMetadataErrors) ;

/// @brief Method DeleteFile addr 0x239c060 size 0x1ac virtual false final false
static void DeleteFile(::StringW fullPath) ;

/// @brief Method CreateDirectory addr 0x239a264 size 0x5e0 virtual false final false
static void CreateDirectory(::StringW fullPath) ;

/// @brief Method RemoveDirectory addr 0x239b890 size 0xc4 virtual false final false
static void RemoveDirectory(::StringW fullPath, bool recursive) ;

/// @brief Method RemoveDirectoryInternal addr 0x239f308 size 0x690 virtual false final false
static void RemoveDirectoryInternal(System::IO::DirectoryInfo directory, bool recursive, bool throwOnTopLevelDirectoryNotFound) ;

/// @brief Method DirectoryExists addr 0x239aa08 size 0x20 virtual false final false
static bool DirectoryExists(System::ReadOnlySpan_1<char16_t> fullPath) ;

/// @brief Method DirectoryExists addr 0x239f2fc size 0xc virtual false final false
static bool DirectoryExists(System::ReadOnlySpan_1<char16_t> fullPath, ByRef<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorInfo) ;

/// @brief Method FileExists addr 0x239c20c size 0x7c virtual false final false
static bool FileExists(System::ReadOnlySpan_1<char16_t> fullPath) ;

/// @brief Method FileExists addr 0x239f1ec size 0x110 virtual false final false
static bool FileExists(System::ReadOnlySpan_1<char16_t> fullPath, int32_t fileType, ByRef<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorInfo) ;

/// @brief Method ShouldIgnoreDirectory addr 0x239f998 size 0x84 virtual false final false
static bool ShouldIgnoreDirectory(::StringW name) ;

/// @brief Method GetAttributes addr 0x239c384 size 0x80 virtual false final false
static System::IO::FileAttributes GetAttributes(::StringW fullPath) ;

/// @brief Method GetLogicalDrives addr 0x239b158 size 0x8 virtual false final false
static ::ArrayW<::StringW> GetLogicalDrives() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::FileSystem);
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystem, "System.IO", "FileSystem");
