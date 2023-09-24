#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Type: Org.BouncyCastle.Bcpg::HashAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(572))
// CS Name: Org.BouncyCastle.Bcpg.HashAlgorithmTag
struct CORDL_TYPE HashAlgorithmTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HashAlgorithmTag(int32_t value__) noexcept;


                    constexpr HashAlgorithmTag(HashAlgorithmTag const&) = default;
                    constexpr HashAlgorithmTag(HashAlgorithmTag&&) = default;
                    constexpr HashAlgorithmTag& operator=(HashAlgorithmTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HashAlgorithmTag& operator=(HashAlgorithmTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HashAlgorithmTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HashAlgorithmTag_Unwrapped : int32_t {
__MD5 = 1,
__Sha1 = 2,
__RipeMD160 = 3,
__DoubleSha = 4,
__MD2 = 5,
__Tiger192 = 6,
__Haval5pass160 = 7,
__Sha256 = 8,
__Sha384 = 9,
__Sha512 = 10,
__Sha224 = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HashAlgorithmTag_Unwrapped () const noexcept {
return std::bit_cast<__HashAlgorithmTag_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MD5 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD5;

/// @brief Field Sha1 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha1;

/// @brief Field RipeMD160 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const RipeMD160;

/// @brief Field DoubleSha offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const DoubleSha;

/// @brief Field MD2 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const MD2;

/// @brief Field Tiger192 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Tiger192;

/// @brief Field Haval5pass160 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Haval5pass160;

/// @brief Field Sha256 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha256;

/// @brief Field Sha384 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha384;

/// @brief Field Sha512 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha512;

/// @brief Field Sha224 offset 0
static Org::BouncyCastle::Bcpg::HashAlgorithmTag const Sha224;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::HashAlgorithmTag, "Org.BouncyCastle.Bcpg", "HashAlgorithmTag");
