#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::IO {
struct MonoIOError;
}
// Type: System.IO::MonoIOError
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3616))
// CS Name: System.IO.MonoIOError
struct CORDL_TYPE MonoIOError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoIOError(int32_t value__) noexcept;


                    constexpr MonoIOError(MonoIOError const&) = default;
                    constexpr MonoIOError(MonoIOError&&) = default;
                    constexpr MonoIOError& operator=(MonoIOError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoIOError& operator=(MonoIOError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoIOError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MonoIOError_Unwrapped : int32_t {
__ERROR_SUCCESS = 0,
__ERROR_FILE_NOT_FOUND = 2,
__ERROR_PATH_NOT_FOUND = 3,
__ERROR_TOO_MANY_OPEN_FILES = 4,
__ERROR_ACCESS_DENIED = 5,
__ERROR_INVALID_HANDLE = 6,
__ERROR_INVALID_DRIVE = 15,
__ERROR_NOT_SAME_DEVICE = 17,
__ERROR_NO_MORE_FILES = 18,
__ERROR_NOT_READY = 21,
__ERROR_WRITE_FAULT = 29,
__ERROR_READ_FAULT = 30,
__ERROR_GEN_FAILURE = 31,
__ERROR_SHARING_VIOLATION = 32,
__ERROR_LOCK_VIOLATION = 33,
__ERROR_HANDLE_DISK_FULL = 39,
__ERROR_NOT_SUPPORTED = 50,
__ERROR_FILE_EXISTS = 80,
__ERROR_CANNOT_MAKE = 82,
__ERROR_INVALID_PARAMETER = 87,
__ERROR_BROKEN_PIPE = 109,
__ERROR_INVALID_NAME = 123,
__ERROR_DIR_NOT_EMPTY = 145,
__ERROR_ALREADY_EXISTS = 183,
__ERROR_FILENAME_EXCED_RANGE = 206,
__ERROR_DIRECTORY = 267,
__ERROR_ENCRYPTION_FAILED = 6000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoIOError_Unwrapped () const noexcept {
return std::bit_cast<__MonoIOError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ERROR_SUCCESS offset 0
static ::System::IO::MonoIOError const ERROR_SUCCESS;

/// @brief Field ERROR_FILE_NOT_FOUND offset 0
static ::System::IO::MonoIOError const ERROR_FILE_NOT_FOUND;

/// @brief Field ERROR_PATH_NOT_FOUND offset 0
static ::System::IO::MonoIOError const ERROR_PATH_NOT_FOUND;

/// @brief Field ERROR_TOO_MANY_OPEN_FILES offset 0
static ::System::IO::MonoIOError const ERROR_TOO_MANY_OPEN_FILES;

/// @brief Field ERROR_ACCESS_DENIED offset 0
static ::System::IO::MonoIOError const ERROR_ACCESS_DENIED;

/// @brief Field ERROR_INVALID_HANDLE offset 0
static ::System::IO::MonoIOError const ERROR_INVALID_HANDLE;

/// @brief Field ERROR_INVALID_DRIVE offset 0
static ::System::IO::MonoIOError const ERROR_INVALID_DRIVE;

/// @brief Field ERROR_NOT_SAME_DEVICE offset 0
static ::System::IO::MonoIOError const ERROR_NOT_SAME_DEVICE;

/// @brief Field ERROR_NO_MORE_FILES offset 0
static ::System::IO::MonoIOError const ERROR_NO_MORE_FILES;

/// @brief Field ERROR_NOT_READY offset 0
static ::System::IO::MonoIOError const ERROR_NOT_READY;

/// @brief Field ERROR_WRITE_FAULT offset 0
static ::System::IO::MonoIOError const ERROR_WRITE_FAULT;

/// @brief Field ERROR_READ_FAULT offset 0
static ::System::IO::MonoIOError const ERROR_READ_FAULT;

/// @brief Field ERROR_GEN_FAILURE offset 0
static ::System::IO::MonoIOError const ERROR_GEN_FAILURE;

/// @brief Field ERROR_SHARING_VIOLATION offset 0
static ::System::IO::MonoIOError const ERROR_SHARING_VIOLATION;

/// @brief Field ERROR_LOCK_VIOLATION offset 0
static ::System::IO::MonoIOError const ERROR_LOCK_VIOLATION;

/// @brief Field ERROR_HANDLE_DISK_FULL offset 0
static ::System::IO::MonoIOError const ERROR_HANDLE_DISK_FULL;

/// @brief Field ERROR_NOT_SUPPORTED offset 0
static ::System::IO::MonoIOError const ERROR_NOT_SUPPORTED;

/// @brief Field ERROR_FILE_EXISTS offset 0
static ::System::IO::MonoIOError const ERROR_FILE_EXISTS;

/// @brief Field ERROR_CANNOT_MAKE offset 0
static ::System::IO::MonoIOError const ERROR_CANNOT_MAKE;

/// @brief Field ERROR_INVALID_PARAMETER offset 0
static ::System::IO::MonoIOError const ERROR_INVALID_PARAMETER;

/// @brief Field ERROR_BROKEN_PIPE offset 0
static ::System::IO::MonoIOError const ERROR_BROKEN_PIPE;

/// @brief Field ERROR_INVALID_NAME offset 0
static ::System::IO::MonoIOError const ERROR_INVALID_NAME;

/// @brief Field ERROR_DIR_NOT_EMPTY offset 0
static ::System::IO::MonoIOError const ERROR_DIR_NOT_EMPTY;

/// @brief Field ERROR_ALREADY_EXISTS offset 0
static ::System::IO::MonoIOError const ERROR_ALREADY_EXISTS;

/// @brief Field ERROR_FILENAME_EXCED_RANGE offset 0
static ::System::IO::MonoIOError const ERROR_FILENAME_EXCED_RANGE;

/// @brief Field ERROR_DIRECTORY offset 0
static ::System::IO::MonoIOError const ERROR_DIRECTORY;

/// @brief Field ERROR_ENCRYPTION_FAILED offset 0
static ::System::IO::MonoIOError const ERROR_ENCRYPTION_FAILED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::MonoIOError, "System.IO", "MonoIOError");
