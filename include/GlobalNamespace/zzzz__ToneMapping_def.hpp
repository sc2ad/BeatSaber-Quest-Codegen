#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct ToneMapping;
}
// Type: ::ToneMapping
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14651))
// CS Name: ToneMapping
struct CORDL_TYPE ToneMapping : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ToneMapping(int32_t value__) noexcept;


                    constexpr ToneMapping(ToneMapping const&) = default;
                    constexpr ToneMapping(ToneMapping&&) = default;
                    constexpr ToneMapping& operator=(ToneMapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ToneMapping& operator=(ToneMapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ToneMapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ToneMapping_Unwrapped : int32_t {
__None = 0,
__Aces = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ToneMapping_Unwrapped () const noexcept {
return std::bit_cast<__ToneMapping_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::ToneMapping const None;

/// @brief Field Aces offset 0
static GlobalNamespace::ToneMapping const Aces;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ToneMapping, "", "ToneMapping");
