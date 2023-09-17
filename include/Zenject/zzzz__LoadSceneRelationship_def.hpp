#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Zenject {
struct LoadSceneRelationship;
}
// Type: Zenject::LoadSceneRelationship
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11304))
// CS Name: Zenject.LoadSceneRelationship
struct CORDL_TYPE LoadSceneRelationship : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LoadSceneRelationship(int32_t value__) noexcept;


                    constexpr LoadSceneRelationship(LoadSceneRelationship const&) = default;
                    constexpr LoadSceneRelationship(LoadSceneRelationship&&) = default;
                    constexpr LoadSceneRelationship& operator=(LoadSceneRelationship const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LoadSceneRelationship& operator=(LoadSceneRelationship&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LoadSceneRelationship(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LoadSceneRelationship_Unwrapped : int32_t {
__None = 0,
__Child = 1,
__Sibling = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LoadSceneRelationship_Unwrapped () const noexcept {
return std::bit_cast<__LoadSceneRelationship_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Zenject::LoadSceneRelationship const None;

/// @brief Field Child offset 0
static ::Zenject::LoadSceneRelationship const Child;

/// @brief Field Sibling offset 0
static ::Zenject::LoadSceneRelationship const Sibling;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LoadSceneRelationship, "Zenject", "LoadSceneRelationship");
