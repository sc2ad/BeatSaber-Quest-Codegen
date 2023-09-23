#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
// Type: System.Security.Cryptography::AsnDecodeStatus
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7827))
// CS Name: System.Security.Cryptography.AsnDecodeStatus
struct CORDL_TYPE AsnDecodeStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsnDecodeStatus(int32_t value__) noexcept;


                    constexpr AsnDecodeStatus(AsnDecodeStatus const&) = default;
                    constexpr AsnDecodeStatus(AsnDecodeStatus&&) = default;
                    constexpr AsnDecodeStatus& operator=(AsnDecodeStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsnDecodeStatus& operator=(AsnDecodeStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsnDecodeStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AsnDecodeStatus_Unwrapped : int32_t {
__NotDecoded = -1,
__Ok = 0,
__BadAsn = 1,
__BadTag = 2,
__BadLength = 3,
__InformationNotAvailable = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AsnDecodeStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsnDecodeStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotDecoded offset 0
static System::Security::Cryptography::AsnDecodeStatus const NotDecoded;

/// @brief Field Ok offset 0
static System::Security::Cryptography::AsnDecodeStatus const Ok;

/// @brief Field BadAsn offset 0
static System::Security::Cryptography::AsnDecodeStatus const BadAsn;

/// @brief Field BadTag offset 0
static System::Security::Cryptography::AsnDecodeStatus const BadTag;

/// @brief Field BadLength offset 0
static System::Security::Cryptography::AsnDecodeStatus const BadLength;

/// @brief Field InformationNotAvailable offset 0
static System::Security::Cryptography::AsnDecodeStatus const InformationNotAvailable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnDecodeStatus, "System.Security.Cryptography", "AsnDecodeStatus");
