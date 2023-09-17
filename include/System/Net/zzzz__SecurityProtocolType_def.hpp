#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct SecurityProtocolType;
}
// Type: System.Net::SecurityProtocolType
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7906))
// CS Name: System.Net.SecurityProtocolType
struct CORDL_TYPE SecurityProtocolType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityProtocolType(int32_t value__) noexcept;


                    constexpr SecurityProtocolType(SecurityProtocolType const&) = default;
                    constexpr SecurityProtocolType(SecurityProtocolType&&) = default;
                    constexpr SecurityProtocolType& operator=(SecurityProtocolType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SecurityProtocolType& operator=(SecurityProtocolType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SecurityProtocolType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SecurityProtocolType_Unwrapped : int32_t {
__SystemDefault = 0,
__Ssl3 = 48,
__Tls = 192,
__Tls11 = 768,
__Tls12 = 3072,
__Tls13 = 12288,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityProtocolType_Unwrapped () const noexcept {
return std::bit_cast<__SecurityProtocolType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SystemDefault offset 0
static ::System::Net::SecurityProtocolType const SystemDefault;

/// @brief Field Ssl3 offset 0
static ::System::Net::SecurityProtocolType const Ssl3;

/// @brief Field Tls offset 0
static ::System::Net::SecurityProtocolType const Tls;

/// @brief Field Tls11 offset 0
static ::System::Net::SecurityProtocolType const Tls11;

/// @brief Field Tls12 offset 0
static ::System::Net::SecurityProtocolType const Tls12;

/// @brief Field Tls13 offset 0
static ::System::Net::SecurityProtocolType const Tls13;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SecurityProtocolType, "System.Net", "SecurityProtocolType");
