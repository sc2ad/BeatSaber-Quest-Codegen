#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct RevocationKeyTag;
}
// Type: Org.BouncyCastle.Bcpg::RevocationKeyTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(543))
// CS Name: Org.BouncyCastle.Bcpg.RevocationKeyTag
struct CORDL_TYPE RevocationKeyTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RevocationKeyTag(uint8_t value__) noexcept;


                    constexpr RevocationKeyTag(RevocationKeyTag const&) = default;
                    constexpr RevocationKeyTag(RevocationKeyTag&&) = default;
                    constexpr RevocationKeyTag& operator=(RevocationKeyTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RevocationKeyTag& operator=(RevocationKeyTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RevocationKeyTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RevocationKeyTag_Unwrapped : uint8_t {
__ClassDefault = 128u,
__ClassSensitive = 64u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RevocationKeyTag_Unwrapped () const noexcept {
return std::bit_cast<__RevocationKeyTag_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field ClassDefault offset 0
static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassDefault;

/// @brief Field ClassSensitive offset 0
static ::Org::BouncyCastle::Bcpg::RevocationKeyTag const ClassSensitive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::RevocationKeyTag, "Org.BouncyCastle.Bcpg", "RevocationKeyTag");
