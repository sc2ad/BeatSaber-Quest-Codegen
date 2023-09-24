#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct FileAccess;
}
// Type: System.IO::FileAccess
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3551))
// CS Name: System.IO.FileAccess
struct CORDL_TYPE FileAccess : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileAccess(int32_t value__) noexcept;


                    constexpr FileAccess(FileAccess const&) = default;
                    constexpr FileAccess(FileAccess&&) = default;
                    constexpr FileAccess& operator=(FileAccess const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileAccess& operator=(FileAccess&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileAccess(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileAccess_Unwrapped : int32_t {
__Read = 1,
__Write = 2,
__ReadWrite = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileAccess_Unwrapped () const noexcept {
return std::bit_cast<__FileAccess_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Read offset 0
static System::IO::FileAccess const Read;

/// @brief Field Write offset 0
static System::IO::FileAccess const Write;

/// @brief Field ReadWrite offset 0
static System::IO::FileAccess const ReadWrite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileAccess, "System.IO", "FileAccess");
