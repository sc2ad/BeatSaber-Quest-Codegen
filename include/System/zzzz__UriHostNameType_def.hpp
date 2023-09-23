#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct UriHostNameType;
}
// Type: System::UriHostNameType
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7735))
// CS Name: System.UriHostNameType
struct CORDL_TYPE UriHostNameType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriHostNameType(int32_t value__) noexcept;


                    constexpr UriHostNameType(UriHostNameType const&) = default;
                    constexpr UriHostNameType(UriHostNameType&&) = default;
                    constexpr UriHostNameType& operator=(UriHostNameType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UriHostNameType& operator=(UriHostNameType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UriHostNameType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UriHostNameType_Unwrapped : int32_t {
__Unknown = 0,
__Basic = 1,
__Dns = 2,
__IPv4 = 3,
__IPv6 = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriHostNameType_Unwrapped () const noexcept {
return std::bit_cast<__UriHostNameType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::UriHostNameType const Unknown;

/// @brief Field Basic offset 0
static System::UriHostNameType const Basic;

/// @brief Field Dns offset 0
static System::UriHostNameType const Dns;

/// @brief Field IPv4 offset 0
static System::UriHostNameType const IPv4;

/// @brief Field IPv6 offset 0
static System::UriHostNameType const IPv6;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::UriHostNameType, "System", "UriHostNameType");
