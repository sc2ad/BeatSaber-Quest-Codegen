#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Type: System.Net.Security::EncryptionPolicy
namespace System::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8217))
// CS Name: System.Net.Security.EncryptionPolicy
struct CORDL_TYPE EncryptionPolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EncryptionPolicy(int32_t value__) noexcept;


                    constexpr EncryptionPolicy(EncryptionPolicy const&) = default;
                    constexpr EncryptionPolicy(EncryptionPolicy&&) = default;
                    constexpr EncryptionPolicy& operator=(EncryptionPolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EncryptionPolicy& operator=(EncryptionPolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EncryptionPolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EncryptionPolicy_Unwrapped : int32_t {
__RequireEncryption = 0,
__AllowNoEncryption = 1,
__NoEncryption = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionPolicy_Unwrapped () const noexcept {
return std::bit_cast<__EncryptionPolicy_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RequireEncryption offset 0
static System::Net::Security::EncryptionPolicy const RequireEncryption;

/// @brief Field AllowNoEncryption offset 0
static System::Net::Security::EncryptionPolicy const AllowNoEncryption;

/// @brief Field NoEncryption offset 0
static System::Net::Security::EncryptionPolicy const NoEncryption;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Security
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::EncryptionPolicy, "System.Net.Security", "EncryptionPolicy");
