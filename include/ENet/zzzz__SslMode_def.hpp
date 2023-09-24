#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace ENet {
struct SslMode;
}
// Type: ENet::SslMode
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15256))
// CS Name: ENet.SslMode
struct CORDL_TYPE SslMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SslMode(int32_t value__) noexcept;


                    constexpr SslMode(SslMode const&) = default;
                    constexpr SslMode(SslMode&&) = default;
                    constexpr SslMode& operator=(SslMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SslMode& operator=(SslMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SslMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SslMode_Unwrapped : int32_t {
__None = 0,
__Server = 1,
__Client = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SslMode_Unwrapped () const noexcept {
return std::bit_cast<__SslMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ENet::SslMode const None;

/// @brief Field Server offset 0
static ENet::SslMode const Server;

/// @brief Field Client offset 0
static ENet::SslMode const Client;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::SslMode, "ENet", "SslMode");
