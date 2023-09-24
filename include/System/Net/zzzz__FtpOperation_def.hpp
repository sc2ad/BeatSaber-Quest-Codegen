#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct FtpOperation;
}
// Type: System.Net::FtpOperation
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7895))
// CS Name: System.Net.FtpOperation
struct CORDL_TYPE FtpOperation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FtpOperation(int32_t value__) noexcept;


                    constexpr FtpOperation(FtpOperation const&) = default;
                    constexpr FtpOperation(FtpOperation&&) = default;
                    constexpr FtpOperation& operator=(FtpOperation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FtpOperation& operator=(FtpOperation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FtpOperation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FtpOperation_Unwrapped : int32_t {
__DownloadFile = 0,
__ListDirectory = 1,
__ListDirectoryDetails = 2,
__UploadFile = 3,
__UploadFileUnique = 4,
__AppendFile = 5,
__DeleteFile = 6,
__GetDateTimestamp = 7,
__GetFileSize = 8,
__Rename = 9,
__MakeDirectory = 10,
__RemoveDirectory = 11,
__PrintWorkingDirectory = 12,
__Other = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpOperation_Unwrapped () const noexcept {
return std::bit_cast<__FtpOperation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DownloadFile offset 0
static System::Net::FtpOperation const DownloadFile;

/// @brief Field ListDirectory offset 0
static System::Net::FtpOperation const ListDirectory;

/// @brief Field ListDirectoryDetails offset 0
static System::Net::FtpOperation const ListDirectoryDetails;

/// @brief Field UploadFile offset 0
static System::Net::FtpOperation const UploadFile;

/// @brief Field UploadFileUnique offset 0
static System::Net::FtpOperation const UploadFileUnique;

/// @brief Field AppendFile offset 0
static System::Net::FtpOperation const AppendFile;

/// @brief Field DeleteFile offset 0
static System::Net::FtpOperation const DeleteFile;

/// @brief Field GetDateTimestamp offset 0
static System::Net::FtpOperation const GetDateTimestamp;

/// @brief Field GetFileSize offset 0
static System::Net::FtpOperation const GetFileSize;

/// @brief Field Rename offset 0
static System::Net::FtpOperation const Rename;

/// @brief Field MakeDirectory offset 0
static System::Net::FtpOperation const MakeDirectory;

/// @brief Field RemoveDirectory offset 0
static System::Net::FtpOperation const RemoveDirectory;

/// @brief Field PrintWorkingDirectory offset 0
static System::Net::FtpOperation const PrintWorkingDirectory;

/// @brief Field Other offset 0
static System::Net::FtpOperation const Other;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpOperation, "System.Net", "FtpOperation");
