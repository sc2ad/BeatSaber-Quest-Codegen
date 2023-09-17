#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct ComponentMode;
}
// Type: UnityEngine.ProBuilder::ComponentMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12096))
// CS Name: UnityEngine.ProBuilder.ComponentMode
struct CORDL_TYPE ComponentMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ComponentMode(int32_t value__) noexcept;


                    constexpr ComponentMode(ComponentMode const&) = default;
                    constexpr ComponentMode(ComponentMode&&) = default;
                    constexpr ComponentMode& operator=(ComponentMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ComponentMode& operator=(ComponentMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ComponentMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ComponentMode_Unwrapped : int32_t {
__Vertex = 0,
__Edge = 1,
__Face = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ComponentMode_Unwrapped () const noexcept {
return std::bit_cast<__ComponentMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertex offset 0
static ::UnityEngine::ProBuilder::ComponentMode const Vertex;

/// @brief Field Edge offset 0
static ::UnityEngine::ProBuilder::ComponentMode const Edge;

/// @brief Field Face offset 0
static ::UnityEngine::ProBuilder::ComponentMode const Face;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ComponentMode, "UnityEngine.ProBuilder", "ComponentMode");
