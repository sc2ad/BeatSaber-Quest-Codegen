#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatus
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(41))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiStatus
struct CORDL_TYPE PkiStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PkiStatus(int32_t value__) noexcept;


                    constexpr PkiStatus(PkiStatus const&) = default;
                    constexpr PkiStatus(PkiStatus&&) = default;
                    constexpr PkiStatus& operator=(PkiStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PkiStatus& operator=(PkiStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PkiStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PkiStatus_Unwrapped : int32_t {
__Granted = 0,
__GrantedWithMods = 1,
__Rejection = 2,
__Waiting = 3,
__RevocationWarning = 4,
__RevocationNotification = 5,
__KeyUpdateWarning = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PkiStatus_Unwrapped () const noexcept {
return std::bit_cast<__PkiStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Granted offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Granted;

/// @brief Field GrantedWithMods offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const GrantedWithMods;

/// @brief Field Rejection offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Rejection;

/// @brief Field Waiting offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const Waiting;

/// @brief Field RevocationWarning offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationWarning;

/// @brief Field RevocationNotification offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const RevocationNotification;

/// @brief Field KeyUpdateWarning offset 0
static ::Org::BouncyCastle::Asn1::Cmp::PkiStatus const KeyUpdateWarning;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatus, "Org.BouncyCastle.Asn1.Cmp", "PkiStatus");
