#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO::Compression {
struct CompressionMode;
}
// Type: System.IO.Compression::CompressionMode
namespace System::IO::Compression {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8396))
// CS Name: System.IO.Compression.CompressionMode
struct CORDL_TYPE CompressionMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompressionMode(int32_t value__) noexcept;


                    constexpr CompressionMode(CompressionMode const&) = default;
                    constexpr CompressionMode(CompressionMode&&) = default;
                    constexpr CompressionMode& operator=(CompressionMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CompressionMode& operator=(CompressionMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CompressionMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CompressionMode_Unwrapped : int32_t {
__Decompress = 0,
__Compress = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionMode_Unwrapped () const noexcept {
return std::bit_cast<__CompressionMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Decompress offset 0
static System::IO::Compression::CompressionMode const Decompress;

/// @brief Field Compress offset 0
static System::IO::Compression::CompressionMode const Compress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::CompressionMode, "System.IO.Compression", "CompressionMode");
