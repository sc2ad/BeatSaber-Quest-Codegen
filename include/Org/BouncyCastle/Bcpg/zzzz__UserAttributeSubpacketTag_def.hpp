#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacketTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(599))
// CS Name: Org.BouncyCastle.Bcpg.UserAttributeSubpacketTag
struct CORDL_TYPE UserAttributeSubpacketTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserAttributeSubpacketTag(int32_t value__) noexcept;


                    constexpr UserAttributeSubpacketTag(UserAttributeSubpacketTag const&) = default;
                    constexpr UserAttributeSubpacketTag(UserAttributeSubpacketTag&&) = default;
                    constexpr UserAttributeSubpacketTag& operator=(UserAttributeSubpacketTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UserAttributeSubpacketTag& operator=(UserAttributeSubpacketTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UserAttributeSubpacketTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UserAttributeSubpacketTag_Unwrapped : int32_t {
__ImageAttribute = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserAttributeSubpacketTag_Unwrapped () const noexcept {
return std::bit_cast<__UserAttributeSubpacketTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ImageAttribute offset 0
static ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const ImageAttribute;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacketTag");
