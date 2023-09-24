#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Type: ::PlatformEnvironment
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12863))
// CS Name: PlatformEnvironment
struct CORDL_TYPE PlatformEnvironment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr PlatformEnvironment(uint8_t value__) noexcept;


                    constexpr PlatformEnvironment(PlatformEnvironment const&) = default;
                    constexpr PlatformEnvironment(PlatformEnvironment&&) = default;
                    constexpr PlatformEnvironment& operator=(PlatformEnvironment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlatformEnvironment& operator=(PlatformEnvironment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlatformEnvironment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlatformEnvironment_Unwrapped : uint8_t {
__Development = 0u,
__Certification = 1u,
__Production = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformEnvironment_Unwrapped () const noexcept {
return std::bit_cast<__PlatformEnvironment_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Development offset 0
static GlobalNamespace::PlatformEnvironment const Development;

/// @brief Field Certification offset 0
static GlobalNamespace::PlatformEnvironment const Certification;

/// @brief Field Production offset 0
static GlobalNamespace::PlatformEnvironment const Production;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformEnvironment, "", "PlatformEnvironment");
