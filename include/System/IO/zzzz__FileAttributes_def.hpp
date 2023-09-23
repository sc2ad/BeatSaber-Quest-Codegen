#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct FileAttributes;
}
// Type: System.IO::FileAttributes
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3594))
// CS Name: System.IO.FileAttributes
struct CORDL_TYPE FileAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileAttributes(int32_t value__) noexcept;


                    constexpr FileAttributes(FileAttributes const&) = default;
                    constexpr FileAttributes(FileAttributes&&) = default;
                    constexpr FileAttributes& operator=(FileAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileAttributes& operator=(FileAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileAttributes_Unwrapped : int32_t {
__ReadOnly = 1,
__Hidden = 2,
__System = 4,
__Directory = 16,
__Archive = 32,
__Device = 64,
__Normal = 128,
__Temporary = 256,
__SparseFile = 512,
__ReparsePoint = 1024,
__Compressed = 2048,
__Offline = 4096,
__NotContentIndexed = 8192,
__Encrypted = 16384,
__IntegrityStream = 32768,
__NoScrubData = 131072,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileAttributes_Unwrapped () const noexcept {
return std::bit_cast<__FileAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ReadOnly offset 0
static System::IO::FileAttributes const ReadOnly;

/// @brief Field Hidden offset 0
static System::IO::FileAttributes const Hidden;

/// @brief Field System offset 0
static System::IO::FileAttributes const System;

/// @brief Field Directory offset 0
static System::IO::FileAttributes const Directory;

/// @brief Field Archive offset 0
static System::IO::FileAttributes const Archive;

/// @brief Field Device offset 0
static System::IO::FileAttributes const Device;

/// @brief Field Normal offset 0
static System::IO::FileAttributes const Normal;

/// @brief Field Temporary offset 0
static System::IO::FileAttributes const Temporary;

/// @brief Field SparseFile offset 0
static System::IO::FileAttributes const SparseFile;

/// @brief Field ReparsePoint offset 0
static System::IO::FileAttributes const ReparsePoint;

/// @brief Field Compressed offset 0
static System::IO::FileAttributes const Compressed;

/// @brief Field Offline offset 0
static System::IO::FileAttributes const Offline;

/// @brief Field NotContentIndexed offset 0
static System::IO::FileAttributes const NotContentIndexed;

/// @brief Field Encrypted offset 0
static System::IO::FileAttributes const Encrypted;

/// @brief Field IntegrityStream offset 0
static System::IO::FileAttributes const IntegrityStream;

/// @brief Field NoScrubData offset 0
static System::IO::FileAttributes const NoScrubData;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAttributes, "System.IO", "FileAttributes");
