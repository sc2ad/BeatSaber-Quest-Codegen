#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct ArcVisibilityType;
}
// Type: ::ArcVisibilityType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4716))
// CS Name: ArcVisibilityType
struct CORDL_TYPE ArcVisibilityType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArcVisibilityType(int32_t value__) noexcept;


                    constexpr ArcVisibilityType(ArcVisibilityType const&) = default;
                    constexpr ArcVisibilityType(ArcVisibilityType&&) = default;
                    constexpr ArcVisibilityType& operator=(ArcVisibilityType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArcVisibilityType& operator=(ArcVisibilityType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArcVisibilityType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ArcVisibilityType_Unwrapped : int32_t {
__None = 0,
__Low = 1,
__Standard = 2,
__High = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ArcVisibilityType_Unwrapped () const noexcept {
return std::bit_cast<__ArcVisibilityType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::ArcVisibilityType const None;

/// @brief Field Low offset 0
static GlobalNamespace::ArcVisibilityType const Low;

/// @brief Field Standard offset 0
static GlobalNamespace::ArcVisibilityType const Standard;

/// @brief Field High offset 0
static GlobalNamespace::ArcVisibilityType const High;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ArcVisibilityType, "", "ArcVisibilityType");
