#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentContext;
}
// Type: ::EnvironmentContext
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5082))
// CS Name: EnvironmentContext
struct CORDL_TYPE EnvironmentContext : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnvironmentContext(int32_t value__) noexcept;


                    constexpr EnvironmentContext(EnvironmentContext const&) = default;
                    constexpr EnvironmentContext(EnvironmentContext&&) = default;
                    constexpr EnvironmentContext& operator=(EnvironmentContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EnvironmentContext& operator=(EnvironmentContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EnvironmentContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EnvironmentContext_Unwrapped : int32_t {
__Gameplay = 0,
__BeatmapEditor = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnvironmentContext_Unwrapped () const noexcept {
return std::bit_cast<__EnvironmentContext_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Gameplay offset 0
static GlobalNamespace::EnvironmentContext const Gameplay;

/// @brief Field BeatmapEditor offset 0
static GlobalNamespace::EnvironmentContext const BeatmapEditor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentContext, "", "EnvironmentContext");
