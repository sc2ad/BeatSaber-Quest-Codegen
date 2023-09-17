#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct TouchType;
}
// Type: UnityEngine::TouchType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15836))
// CS Name: UnityEngine.TouchType
struct CORDL_TYPE TouchType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchType(int32_t value__) noexcept;


                    constexpr TouchType(TouchType const&) = default;
                    constexpr TouchType(TouchType&&) = default;
                    constexpr TouchType& operator=(TouchType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchType& operator=(TouchType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TouchType_Unwrapped : int32_t {
__Direct = 0,
__Indirect = 1,
__Stylus = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchType_Unwrapped () const noexcept {
return std::bit_cast<__TouchType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Direct offset 0
static ::UnityEngine::TouchType const Direct;

/// @brief Field Indirect offset 0
static ::UnityEngine::TouchType const Indirect;

/// @brief Field Stylus offset 0
static ::UnityEngine::TouchType const Stylus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchType, "UnityEngine", "TouchType");
