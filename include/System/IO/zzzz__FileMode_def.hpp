#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct FileMode;
}
// Type: System.IO::FileMode
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3553))
// CS Name: System.IO.FileMode
struct CORDL_TYPE FileMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FileMode(int32_t value__) noexcept;


                    constexpr FileMode(FileMode const&) = default;
                    constexpr FileMode(FileMode&&) = default;
                    constexpr FileMode& operator=(FileMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileMode& operator=(FileMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FileMode_Unwrapped : int32_t {
__CreateNew = 1,
__Create = 2,
__Open = 3,
__OpenOrCreate = 4,
__Truncate = 5,
__Append = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FileMode_Unwrapped () const noexcept {
return std::bit_cast<__FileMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CreateNew offset 0
static System::IO::FileMode const CreateNew;

/// @brief Field Create offset 0
static System::IO::FileMode const Create;

/// @brief Field Open offset 0
static System::IO::FileMode const Open;

/// @brief Field OpenOrCreate offset 0
static System::IO::FileMode const OpenOrCreate;

/// @brief Field Truncate offset 0
static System::IO::FileMode const Truncate;

/// @brief Field Append offset 0
static System::IO::FileMode const Append;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileMode, "System.IO", "FileMode");
