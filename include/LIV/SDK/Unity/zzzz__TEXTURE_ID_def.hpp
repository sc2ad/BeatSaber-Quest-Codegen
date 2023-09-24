#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
// Type: LIV.SDK.Unity::TEXTURE_ID
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15150))
// CS Name: LIV.SDK.Unity.TEXTURE_ID
struct CORDL_TYPE TEXTURE_ID : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TEXTURE_ID(uint32_t value__) noexcept;


                    constexpr TEXTURE_ID(TEXTURE_ID const&) = default;
                    constexpr TEXTURE_ID(TEXTURE_ID&&) = default;
                    constexpr TEXTURE_ID& operator=(TEXTURE_ID const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TEXTURE_ID& operator=(TEXTURE_ID&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TEXTURE_ID(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TEXTURE_ID_Unwrapped : uint32_t {
__UNDEFINED = 0u,
__BACKGROUND_COLOR_BUFFER_ID = 10u,
__FOREGROUND_COLOR_BUFFER_ID = 20u,
__OPTIMIZED_COLOR_BUFFER_ID = 30u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TEXTURE_ID_Unwrapped () const noexcept {
return std::bit_cast<__TEXTURE_ID_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint32_t;


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNDEFINED offset 0
static LIV::SDK::Unity::TEXTURE_ID const UNDEFINED;

/// @brief Field BACKGROUND_COLOR_BUFFER_ID offset 0
static LIV::SDK::Unity::TEXTURE_ID const BACKGROUND_COLOR_BUFFER_ID;

/// @brief Field FOREGROUND_COLOR_BUFFER_ID offset 0
static LIV::SDK::Unity::TEXTURE_ID const FOREGROUND_COLOR_BUFFER_ID;

/// @brief Field OPTIMIZED_COLOR_BUFFER_ID offset 0
static LIV::SDK::Unity::TEXTURE_ID const OPTIMIZED_COLOR_BUFFER_ID;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::TEXTURE_ID, "LIV.SDK.Unity", "TEXTURE_ID");
