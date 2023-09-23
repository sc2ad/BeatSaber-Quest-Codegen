#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Zenject {
struct InjectSources;
}
// Type: Zenject::InjectSources
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15654))
// CS Name: Zenject.InjectSources
struct CORDL_TYPE InjectSources : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InjectSources(int32_t value__) noexcept;


                    constexpr InjectSources(InjectSources const&) = default;
                    constexpr InjectSources(InjectSources&&) = default;
                    constexpr InjectSources& operator=(InjectSources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InjectSources& operator=(InjectSources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InjectSources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InjectSources_Unwrapped : int32_t {
__Any = 0,
__Local = 1,
__Parent = 2,
__AnyParent = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InjectSources_Unwrapped () const noexcept {
return std::bit_cast<__InjectSources_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Any offset 0
static Zenject::InjectSources const Any;

/// @brief Field Local offset 0
static Zenject::InjectSources const Local;

/// @brief Field Parent offset 0
static Zenject::InjectSources const Parent;

/// @brief Field AnyParent offset 0
static Zenject::InjectSources const AnyParent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectSources, "Zenject", "InjectSources");
