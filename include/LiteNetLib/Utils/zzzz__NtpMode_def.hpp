#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpMode;
}
// Type: LiteNetLib.Utils::NtpMode
namespace LiteNetLib::Utils {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14520))
// CS Name: LiteNetLib.Utils.NtpMode
struct CORDL_TYPE NtpMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtpMode(int32_t value__) noexcept;


                    constexpr NtpMode(NtpMode const&) = default;
                    constexpr NtpMode(NtpMode&&) = default;
                    constexpr NtpMode& operator=(NtpMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NtpMode& operator=(NtpMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NtpMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NtpMode_Unwrapped : int32_t {
__Client = 3,
__Server = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NtpMode_Unwrapped () const noexcept {
return std::bit_cast<__NtpMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Client offset 0
static LiteNetLib::Utils::NtpMode const Client;

/// @brief Field Server offset 0
static LiteNetLib::Utils::NtpMode const Server;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpMode, "LiteNetLib.Utils", "NtpMode");
