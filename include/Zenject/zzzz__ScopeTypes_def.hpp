#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Zenject {
struct ScopeTypes;
}
// Type: Zenject::ScopeTypes
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10884))
// CS Name: Zenject.ScopeTypes
struct CORDL_TYPE ScopeTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScopeTypes(int32_t value__) noexcept;


                    constexpr ScopeTypes(ScopeTypes const&) = default;
                    constexpr ScopeTypes(ScopeTypes&&) = default;
                    constexpr ScopeTypes& operator=(ScopeTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScopeTypes& operator=(ScopeTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScopeTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScopeTypes_Unwrapped : int32_t {
__Unset = 0,
__Transient = 1,
__Singleton = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScopeTypes_Unwrapped () const noexcept {
return std::bit_cast<__ScopeTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unset offset 0
static Zenject::ScopeTypes const Unset;

/// @brief Field Transient offset 0
static Zenject::ScopeTypes const Transient;

/// @brief Field Singleton offset 0
static Zenject::ScopeTypes const Singleton;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopeTypes, "Zenject", "ScopeTypes");
