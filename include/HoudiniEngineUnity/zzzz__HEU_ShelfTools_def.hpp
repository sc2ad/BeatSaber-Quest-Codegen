#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_ShelfToolData;
}
namespace HoudiniEngineUnity {
class HEU_Shelf;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ShelfTools;
}
// Type: HoudiniEngineUnity::HEU_ShelfTools
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9800))
// CS Name: HoudiniEngineUnity.HEU_ShelfTools
class CORDL_TYPE HEU_ShelfTools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_ShelfTools() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfTools", modifiers: " const&", def_value: None }]
constexpr HEU_ShelfTools(HEU_ShelfTools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ShelfTools", modifiers: "&&", def_value: None }]
constexpr HEU_ShelfTools(HEU_ShelfTools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ShelfTools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ShelfTools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ShelfTools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ShelfTools& operator=(HEU_ShelfTools&& o) noexcept = default;
  constexpr HEU_ShelfTools& operator=(HEU_ShelfTools const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Shelf> __declspec(property(get=__get__shelves, put=__set__shelves))  _shelves;

static void __set__shelves(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Shelf> value) ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Shelf> __get__shelves() ;

static bool __declspec(property(get=__get__shelvesLoaded, put=__set__shelvesLoaded))  _shelvesLoaded;

static void __set__shelvesLoaded(bool value) ;

static bool __get__shelvesLoaded() ;

static int32_t __declspec(property(get=__get__currentSelectedShelf, put=__set__currentSelectedShelf))  _currentSelectedShelf;

static void __set__currentSelectedShelf(int32_t value) ;

static int32_t __get__currentSelectedShelf() ;

/// @brief Field TARGET_ALL offset 0
static constexpr ::ConstString  TARGET_ALL{u"all"};

/// @brief Field TARGET_UNITY offset 0
static constexpr ::ConstString  TARGET_UNITY{u"unity"};


// Methods

/// @brief Method AreShelvesLoaded addr 0x205eef0 size 0x58 virtual false final false
static bool AreShelvesLoaded() ;

/// @brief Method SetReloadShelves addr 0x205ef48 size 0x58 virtual false final false
static void SetReloadShelves() ;

/// @brief Method ClearShelves addr 0x205efa0 size 0x98 virtual false final false
static void ClearShelves() ;

/// @brief Method GetNumShelves addr 0x205f038 size 0x70 virtual false final false
static int32_t GetNumShelves() ;

/// @brief Method GetCurrentShelfIndex addr 0x205f0a8 size 0x58 virtual false final false
static int32_t GetCurrentShelfIndex() ;

/// @brief Method SetCurrentShelf addr 0x205f100 size 0x5c virtual false final false
static void SetCurrentShelf(int32_t index) ;

/// @brief Method GetShelf addr 0x205f15c size 0xcc virtual false final false
static HoudiniEngineUnity::HEU_Shelf GetShelf(int32_t index) ;

/// @brief Method GetShelf addr 0x205f228 size 0x1b8 virtual false final false
static HoudiniEngineUnity::HEU_Shelf GetShelf(::StringW shelfName) ;

/// @brief Method GetShelfStorageEntry addr 0x205f3e0 size 0x5c virtual false final false
static ::StringW GetShelfStorageEntry(::StringW shelfName, ::StringW shelfPath) ;

/// @brief Method GetSplitShelfEntry addr 0x205f43c size 0xd0 virtual false final false
static void GetSplitShelfEntry(::StringW shelfEntry, ByRef<::StringW> shelfName, ByRef<::StringW> shelfPath) ;

/// @brief Method LoadShelves addr 0x205f50c size 0x748 virtual false final false
static void LoadShelves() ;

/// @brief Method LoadToolsFromDirectory addr 0x205fd5c size 0x2ac virtual false final false
static bool LoadToolsFromDirectory(::StringW folderPath, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ShelfToolData>> tools) ;

/// @brief Method LoadToolFromJsonFile addr 0x2060294 size 0x1c8 virtual false final false
static HoudiniEngineUnity::HEU_ShelfToolData LoadToolFromJsonFile(::StringW jsonFilePath) ;

/// @brief Method LoadToolFromJsonString addr 0x206045c size 0x990 virtual false final false
static HoudiniEngineUnity::HEU_ShelfToolData LoadToolFromJsonString(::StringW json, ::StringW jsonFilePath) ;

/// @brief Method AddShelf addr 0x205fc54 size 0x108 virtual false final false
static HoudiniEngineUnity::HEU_Shelf AddShelf(::StringW shelfName, ::StringW shelfPath) ;

/// @brief Method RemoveShelf addr 0x20610f4 size 0x144 virtual false final false
static void RemoveShelf(int32_t shelfIndex) ;

/// @brief Method SaveShelf addr 0x2060008 size 0x28c virtual false final false
static void SaveShelf() ;

/// @brief Method ExecuteTool addr 0x2061238 size 0x384 virtual false final false
static void ExecuteTool(int32_t toolSlot) ;

/// @brief Method ExecuteToolGenerator addr 0x20615bc size 0x210 virtual false final false
static void ExecuteToolGenerator(::StringW toolName, ::StringW toolPath, UnityEngine::Vector3 targetPosition, UnityEngine::Quaternion targetRotation, UnityEngine::Vector3 targetScale) ;

/// @brief Method IsValidInput addr 0x20624cc size 0xfc virtual false final false
static bool IsValidInput(UnityEngine::GameObject gameObject) ;

/// @brief Method ExecuteToolNoInput addr 0x20617cc size 0x1b8 virtual false final false
static void ExecuteToolNoInput(::StringW toolName, ::StringW toolPath) ;

/// @brief Method ExecuteToolOperatorSingle addr 0x2061984 size 0x5fc virtual false final false
static void ExecuteToolOperatorSingle(::StringW toolName, ::StringW toolPath, ::ArrayW<UnityEngine::GameObject> inputObjects) ;

/// @brief Method ExecuteToolOperatorMultiple addr 0x2061f80 size 0x4e0 virtual false final false
static void ExecuteToolOperatorMultiple(::StringW toolName, ::StringW toolPath, ::ArrayW<UnityEngine::GameObject> inputObjects) ;

/// @brief Method ExecuteToolBatch addr 0x2062460 size 0x6c virtual false final false
static void ExecuteToolBatch(::StringW toolName, ::StringW toolPath, ::ArrayW<UnityEngine::GameObject> batchObjects) ;

/// @brief Method GetToolResourcePath addr 0x20625c8 size 0xe0 virtual false final false
static ::StringW GetToolResourcePath(HoudiniEngineUnity::HEU_ShelfToolData tool, ::StringW inPath, ::StringW ext) ;

/// @brief Method GetToolIconPath addr 0x2060fa0 size 0x154 virtual false final false
static ::StringW GetToolIconPath(HoudiniEngineUnity::HEU_ShelfToolData tool, ::StringW inPath) ;

/// @brief Method GetToolAssetPath addr 0x2060e44 size 0x15c virtual false final false
static ::StringW GetToolAssetPath(HoudiniEngineUnity::HEU_ShelfToolData tool, ::StringW inPath) ;

static HoudiniEngineUnity::HEU_ShelfTools New_ctor() ;

/// @brief Method .ctor addr 0x20626a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ShelfTools);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ShelfTools, "HoudiniEngineUnity", "HEU_ShelfTools");
