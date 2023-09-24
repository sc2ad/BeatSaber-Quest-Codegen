#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::AccessControl {
struct FileSystemRights;
}
// Type: System.Security.AccessControl::FileSystemRights
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3029))
// CS Name: System.Security.AccessControl.FileSystemRights
struct CORDL_TYPE FileSystemRights : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileSystemRights(int32_t value__) noexcept;


                    constexpr FileSystemRights(FileSystemRights const&) = default;
                    constexpr FileSystemRights(FileSystemRights&&) = default;
                    constexpr FileSystemRights& operator=(FileSystemRights const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileSystemRights& operator=(FileSystemRights&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileSystemRights(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileSystemRights_Unwrapped : int32_t {
__ListDirectory = 1,
__ReadData = 1,
__CreateFiles = 2,
__WriteData = 2,
__AppendData = 4,
__CreateDirectories = 4,
__ReadExtendedAttributes = 8,
__WriteExtendedAttributes = 16,
__ExecuteFile = 32,
__Traverse = 32,
__DeleteSubdirectoriesAndFiles = 64,
__ReadAttributes = 128,
__WriteAttributes = 256,
__Write = 278,
__Delete = 65536,
__ReadPermissions = 131072,
__Read = 131209,
__ReadAndExecute = 131241,
__Modify = 197055,
__ChangePermissions = 262144,
__TakeOwnership = 524288,
__Synchronize = 1048576,
__FullControl = 2032127,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileSystemRights_Unwrapped () const noexcept {
return std::bit_cast<__FileSystemRights_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ListDirectory offset 0
static System::Security::AccessControl::FileSystemRights const ListDirectory;

/// @brief Field ReadData offset 0
static System::Security::AccessControl::FileSystemRights const ReadData;

/// @brief Field CreateFiles offset 0
static System::Security::AccessControl::FileSystemRights const CreateFiles;

/// @brief Field WriteData offset 0
static System::Security::AccessControl::FileSystemRights const WriteData;

/// @brief Field AppendData offset 0
static System::Security::AccessControl::FileSystemRights const AppendData;

/// @brief Field CreateDirectories offset 0
static System::Security::AccessControl::FileSystemRights const CreateDirectories;

/// @brief Field ReadExtendedAttributes offset 0
static System::Security::AccessControl::FileSystemRights const ReadExtendedAttributes;

/// @brief Field WriteExtendedAttributes offset 0
static System::Security::AccessControl::FileSystemRights const WriteExtendedAttributes;

/// @brief Field ExecuteFile offset 0
static System::Security::AccessControl::FileSystemRights const ExecuteFile;

/// @brief Field Traverse offset 0
static System::Security::AccessControl::FileSystemRights const Traverse;

/// @brief Field DeleteSubdirectoriesAndFiles offset 0
static System::Security::AccessControl::FileSystemRights const DeleteSubdirectoriesAndFiles;

/// @brief Field ReadAttributes offset 0
static System::Security::AccessControl::FileSystemRights const ReadAttributes;

/// @brief Field WriteAttributes offset 0
static System::Security::AccessControl::FileSystemRights const WriteAttributes;

/// @brief Field Write offset 0
static System::Security::AccessControl::FileSystemRights const Write;

/// @brief Field Delete offset 0
static System::Security::AccessControl::FileSystemRights const Delete;

/// @brief Field ReadPermissions offset 0
static System::Security::AccessControl::FileSystemRights const ReadPermissions;

/// @brief Field Read offset 0
static System::Security::AccessControl::FileSystemRights const Read;

/// @brief Field ReadAndExecute offset 0
static System::Security::AccessControl::FileSystemRights const ReadAndExecute;

/// @brief Field Modify offset 0
static System::Security::AccessControl::FileSystemRights const Modify;

/// @brief Field ChangePermissions offset 0
static System::Security::AccessControl::FileSystemRights const ChangePermissions;

/// @brief Field TakeOwnership offset 0
static System::Security::AccessControl::FileSystemRights const TakeOwnership;

/// @brief Field Synchronize offset 0
static System::Security::AccessControl::FileSystemRights const Synchronize;

/// @brief Field FullControl offset 0
static System::Security::AccessControl::FileSystemRights const FullControl;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::FileSystemRights, "System.Security.AccessControl", "FileSystemRights");
