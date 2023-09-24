#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Platform;
}
// Type: HoudiniEngineUnity::HEU_Platform
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9615))
// CS Name: HoudiniEngineUnity.HEU_Platform
class CORDL_TYPE HEU_Platform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Platform() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Platform", modifiers: " const&", def_value: None }]
constexpr HEU_Platform(HEU_Platform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Platform", modifiers: "&&", def_value: None }]
constexpr HEU_Platform(HEU_Platform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Platform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Platform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Platform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Platform& operator=(HEU_Platform&& o) noexcept = default;
  constexpr HEU_Platform& operator=(HEU_Platform const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get__lastErrorMsg, put=__set__lastErrorMsg))  _lastErrorMsg;

static void __set__lastErrorMsg(::StringW value) ;

static ::StringW __get__lastErrorMsg() ;

static ::StringW __declspec(property(get=__get__libPath, put=__set__libPath))  _libPath;

static void __set__libPath(::StringW value) ;

static ::StringW __get__libPath() ;

static bool __declspec(property(get=__get__pathSet, put=__set__pathSet))  _pathSet;

static void __set__pathSet(bool value) ;

static bool __get__pathSet() ;


// Properties

static ::StringW __declspec(property(get=get_LibPath))  LibPath;

static bool __declspec(property(get=get_IsPathSet))  IsPathSet;

static char16_t __declspec(property(get=get_DirectorySeparator))  DirectorySeparator;

static ::StringW __declspec(property(get=get_DirectorySeparatorStr))  DirectorySeparatorStr;


// Methods

/// @brief Method get_LibPath addr 0x2016c2c size 0x58 virtual false final false
static ::StringW get_LibPath() ;

/// @brief Method get_IsPathSet addr 0x2016c84 size 0x58 virtual false final false
static bool get_IsPathSet() ;

/// @brief Method GetHoudiniEnginePath addr 0x20131c8 size 0x54 virtual false final false
static ::StringW GetHoudiniEnginePath() ;

/// @brief Method GetHoudiniEngineDefaultPath addr 0x2016d40 size 0x74 virtual false final false
static ::StringW GetHoudiniEngineDefaultPath() ;

/// @brief Method GetSavedHoudiniPath addr 0x2016db4 size 0x18c virtual false final false
static ::StringW GetSavedHoudiniPath() ;

/// @brief Method SetHapiClientName addr 0x2016ce0 size 0x5c virtual false final false
static void SetHapiClientName() ;

/// @brief Method SetHoudiniEnginePath addr 0x2016d3c size 0x4 virtual false final false
static void SetHoudiniEnginePath() ;

/// @brief Method GetAllFoldersInPath addr 0x20170d8 size 0xcc virtual false final false
static ::StringW GetAllFoldersInPath(::StringW path) ;

/// @brief Method GetAllFoldersInPathHelper addr 0x20171a4 size 0x15c virtual false final false
static void GetAllFoldersInPathHelper(::StringW inPath, System::Text::StringBuilder pathBuilder) ;

/// @brief Method GetFilesInFolder addr 0x2017300 size 0x134 virtual false final false
static ::ArrayW<::StringW> GetFilesInFolder(::StringW folderPath, ::StringW searchPattern, bool bRecursive) ;

/// @brief Method GetFileName addr 0x2017434 size 0x58 virtual false final false
static ::StringW GetFileName(::StringW path) ;

/// @brief Method GetFileNameWithoutExtension addr 0x201748c size 0x58 virtual false final false
static ::StringW GetFileNameWithoutExtension(::StringW path) ;

/// @brief Method GetFolderPath addr 0x20174e4 size 0x11c virtual false final false
static ::StringW GetFolderPath(::StringW path, bool bRemoveDirectorySeparatorAtEnd) ;

/// @brief Method get_DirectorySeparator addr 0x2017600 size 0x8 virtual false final false
static char16_t get_DirectorySeparator() ;

/// @brief Method get_DirectorySeparatorStr addr 0x20115cc size 0x40 virtual false final false
static ::StringW get_DirectorySeparatorStr() ;

/// @brief Method BuildPath addr 0x2012720 size 0x124 virtual false final false
static ::StringW BuildPath(::StringW folder1, ::StringW folder2, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method TrimLastDirectorySeparator addr 0x2017608 size 0xac virtual false final false
static ::StringW TrimLastDirectorySeparator(::StringW inPath) ;

/// @brief Method DoesPathExist addr 0x2013544 size 0x30 virtual false final false
static bool DoesPathExist(::StringW inPath) ;

/// @brief Method DoesFileExist addr 0x201393c size 0x8 virtual false final false
static bool DoesFileExist(::StringW inPath) ;

/// @brief Method DoesDirectoryExist addr 0x20176b4 size 0x8 virtual false final false
static bool DoesDirectoryExist(::StringW inPath) ;

/// @brief Method CreateDirectory addr 0x20176bc size 0x28 virtual false final false
static bool CreateDirectory(::StringW inPath) ;

/// @brief Method GetParentDirectory addr 0x20176e4 size 0x24 virtual false final false
static ::StringW GetParentDirectory(::StringW inPath) ;

/// @brief Method GetFullPath addr 0x2011c10 size 0x58 virtual false final false
static ::StringW GetFullPath(::StringW inPath) ;

/// @brief Method IsPathRooted addr 0x2017708 size 0x58 virtual false final false
static bool IsPathRooted(::StringW inPath) ;

/// @brief Method WriteBytes addr 0x2017760 size 0x8 virtual false final false
static void WriteBytes(::StringW path, ::ArrayW<uint8_t> bytes) ;

/// @brief Method WriteAllText addr 0x2017768 size 0x148 virtual false final false
static bool WriteAllText(::StringW path, ::StringW text) ;

/// @brief Method ReadAllText addr 0x20178b0 size 0x184 virtual false final false
static ::StringW ReadAllText(::StringW path) ;

/// @brief Method GetEnvironmentValue addr 0x2017a34 size 0x74 virtual false final false
static ::StringW GetEnvironmentValue(::StringW key) ;

/// @brief Method GetHoudiniEngineEnvironmentFilePathFull addr 0x2017aa8 size 0xac virtual false final false
static ::StringW GetHoudiniEngineEnvironmentFilePathFull() ;

/// @brief Method LoadFileIntoMemory addr 0x2017bcc size 0x21c virtual false final false
static bool LoadFileIntoMemory(::StringW path, ByRef<::ArrayW<uint8_t>> buffer) ;

static HoudiniEngineUnity::HEU_Platform New_ctor() ;

/// @brief Method .ctor addr 0x2017de8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_Platform);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Platform, "HoudiniEngineUnity", "HEU_Platform");
