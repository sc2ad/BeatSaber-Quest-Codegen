#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Type: Org.BouncyCastle.Bcpg::CompressionAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(559))
// CS Name: Org.BouncyCastle.Bcpg.CompressionAlgorithmTag
struct CORDL_TYPE CompressionAlgorithmTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompressionAlgorithmTag(int32_t value__) noexcept;


                    constexpr CompressionAlgorithmTag(CompressionAlgorithmTag const&) = default;
                    constexpr CompressionAlgorithmTag(CompressionAlgorithmTag&&) = default;
                    constexpr CompressionAlgorithmTag& operator=(CompressionAlgorithmTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CompressionAlgorithmTag& operator=(CompressionAlgorithmTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CompressionAlgorithmTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CompressionAlgorithmTag_Unwrapped : int32_t {
__Uncompressed = 0,
__Zip = 1,
__ZLib = 2,
__BZip2 = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__CompressionAlgorithmTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uncompressed offset 0
static Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Uncompressed;

/// @brief Field Zip offset 0
static Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const Zip;

/// @brief Field ZLib offset 0
static Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const ZLib;

/// @brief Field BZip2 offset 0
static Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const BZip2;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, "Org.BouncyCastle.Bcpg", "CompressionAlgorithmTag");
