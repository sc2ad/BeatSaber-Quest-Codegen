#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
// Type: Org.BouncyCastle.Bcpg::RevocationReasonTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(545))
// CS Name: Org.BouncyCastle.Bcpg.RevocationReasonTag
struct CORDL_TYPE RevocationReasonTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr RevocationReasonTag(uint8_t value__) noexcept;


                    constexpr RevocationReasonTag(RevocationReasonTag const&) = default;
                    constexpr RevocationReasonTag(RevocationReasonTag&&) = default;
                    constexpr RevocationReasonTag& operator=(RevocationReasonTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RevocationReasonTag& operator=(RevocationReasonTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RevocationReasonTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RevocationReasonTag_Unwrapped : uint8_t {
__NoReason = 0u,
__KeySuperseded = 1u,
__KeyCompromised = 2u,
__KeyRetired = 3u,
__UserNoLongerValid = 32u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RevocationReasonTag_Unwrapped () const noexcept {
return std::bit_cast<__RevocationReasonTag_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field NoReason offset 0
static Org::BouncyCastle::Bcpg::RevocationReasonTag const NoReason;

/// @brief Field KeySuperseded offset 0
static Org::BouncyCastle::Bcpg::RevocationReasonTag const KeySuperseded;

/// @brief Field KeyCompromised offset 0
static Org::BouncyCastle::Bcpg::RevocationReasonTag const KeyCompromised;

/// @brief Field KeyRetired offset 0
static Org::BouncyCastle::Bcpg::RevocationReasonTag const KeyRetired;

/// @brief Field UserNoLongerValid offset 0
static Org::BouncyCastle::Bcpg::RevocationReasonTag const UserNoLongerValid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::RevocationReasonTag, "Org.BouncyCastle.Bcpg", "RevocationReasonTag");
