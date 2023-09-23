#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct FileShare;
}
// Type: System.IO::FileShare
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3556))
// CS Name: System.IO.FileShare
struct CORDL_TYPE FileShare : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileShare(int32_t value__) noexcept;


                    constexpr FileShare(FileShare const&) = default;
                    constexpr FileShare(FileShare&&) = default;
                    constexpr FileShare& operator=(FileShare const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileShare& operator=(FileShare&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileShare(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileShare_Unwrapped : int32_t {
__None = 0,
__Read = 1,
__Write = 2,
__ReadWrite = 3,
__Delete = 4,
__Inheritable = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileShare_Unwrapped () const noexcept {
return std::bit_cast<__FileShare_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::IO::FileShare const None;

/// @brief Field Read offset 0
static System::IO::FileShare const Read;

/// @brief Field Write offset 0
static System::IO::FileShare const Write;

/// @brief Field ReadWrite offset 0
static System::IO::FileShare const ReadWrite;

/// @brief Field Delete offset 0
static System::IO::FileShare const Delete;

/// @brief Field Inheritable offset 0
static System::IO::FileShare const Inheritable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileShare, "System.IO", "FileShare");
