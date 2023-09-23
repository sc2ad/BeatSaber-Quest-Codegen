#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct InitConfigOptions;
}
// Type: Oculus.Platform::InitConfigOptions
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13185))
// CS Name: Oculus.Platform.InitConfigOptions
struct CORDL_TYPE InitConfigOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InitConfigOptions(uint32_t value__) noexcept;


                    constexpr InitConfigOptions(InitConfigOptions const&) = default;
                    constexpr InitConfigOptions(InitConfigOptions&&) = default;
                    constexpr InitConfigOptions& operator=(InitConfigOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InitConfigOptions& operator=(InitConfigOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InitConfigOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InitConfigOptions_Unwrapped : uint32_t {
__DisableP2pNetworking = 484335070u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InitConfigOptions_Unwrapped () const noexcept {
return std::bit_cast<__InitConfigOptions_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field DisableP2pNetworking offset 0
static Oculus::Platform::InitConfigOptions const DisableP2pNetworking;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::InitConfigOptions, "Oculus.Platform", "InitConfigOptions");
