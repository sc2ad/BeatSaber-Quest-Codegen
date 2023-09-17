#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct PRIORITY;
}
// Type: LIV.SDK.Unity::PRIORITY
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15148))
// CS Name: LIV.SDK.Unity.PRIORITY
struct CORDL_TYPE PRIORITY : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
constexpr PRIORITY(int8_t value__) noexcept;


                    constexpr PRIORITY(PRIORITY const&) = default;
                    constexpr PRIORITY(PRIORITY&&) = default;
                    constexpr PRIORITY& operator=(PRIORITY const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PRIORITY& operator=(PRIORITY&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PRIORITY(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PRIORITY_Unwrapped : int8_t {
__NONE = 0,
__GAME = 63,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PRIORITY_Unwrapped () const noexcept {
return std::bit_cast<__PRIORITY_Unwrapped>(__instance);
}


// Fields

 int8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int8_t value) ;

constexpr int8_t __get_value__() const;

/// @brief Field NONE offset 0
static ::LIV::SDK::Unity::PRIORITY const NONE;

/// @brief Field GAME offset 0
static ::LIV::SDK::Unity::PRIORITY const GAME;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::PRIORITY, "LIV.SDK.Unity", "PRIORITY");
