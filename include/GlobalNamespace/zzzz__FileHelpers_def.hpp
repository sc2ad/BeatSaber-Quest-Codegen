#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class ISaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class FileHelpers;
}
// Type: ::FileHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13736))
// CS Name: FileHelpers
class CORDL_TYPE FileHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FileHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: " const&", def_value: None }]
constexpr FileHelpers(FileHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileHelpers", modifiers: "&&", def_value: None }]
constexpr FileHelpers(FileHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileHelpers& operator=(FileHelpers&& o) noexcept = default;
  constexpr FileHelpers& operator=(FileHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method GetEscapedURLForFilePath addr 0x1f71168 size 0x5c virtual false final false
static ::StringW GetEscapedURLForFilePath(::StringW filePath) ;

/// @brief Method GetUniqueDirectoryNameByAppendingNumber addr 0x1f711c4 size 0xa8 virtual false final false
static ::StringW GetUniqueDirectoryNameByAppendingNumber(::StringW dirName) ;

/// @brief Method GetFilePaths addr 0x1f7126c size 0x234 virtual false final false
static ::ArrayW<::StringW> GetFilePaths(::StringW directoryPath, ::System::Collections::Generic::HashSet_1<::StringW> extensions) ;

/// @brief Method GetFileNamesFromFilePaths addr 0x1f714a0 size 0x174 virtual false final false
static ::ArrayW<::StringW> GetFileNamesFromFilePaths(::ArrayW<::StringW> filePaths) ;

/// @brief Method SaveToJSONFile addr 0x1f71614 size 0x14c virtual false final false
static void SaveToJSONFile(::GlobalNamespace::ISaveData saveData, ::bs_hook::Il2CppWrapperType obj, ::StringW filePath, bool prettyPrint) ;

/// @brief Method SaveToJSONFile addr 0x1f71760 size 0x18c virtual false final false
static void SaveToJSONFile(::GlobalNamespace::ISaveData saveData, ::bs_hook::Il2CppWrapperType obj, ::StringW filePath, ::StringW tempFilePath, ::StringW backupFilePath) ;

/// @brief Method LoadFromJSONFile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T LoadFromJSONFile(::GlobalNamespace::ISaveData saveData, ::StringW filePath, ::StringW backupFilePath) ;

/// @brief Method LoadJSONFile addr 0x1f718ec size 0xc8 virtual false final false
static ::StringW LoadJSONFile(::GlobalNamespace::ISaveData saveData, ::StringW filePath, ::StringW backupFilePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FileHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileHelpers, "", "FileHelpers");
