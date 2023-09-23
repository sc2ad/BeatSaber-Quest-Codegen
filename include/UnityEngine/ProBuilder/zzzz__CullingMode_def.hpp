#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct CullingMode;
}
// Type: UnityEngine.ProBuilder::CullingMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12105))
// CS Name: UnityEngine.ProBuilder.CullingMode
struct CORDL_TYPE CullingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingMode(int32_t value__) noexcept;


                    constexpr CullingMode(CullingMode const&) = default;
                    constexpr CullingMode(CullingMode&&) = default;
                    constexpr CullingMode& operator=(CullingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CullingMode& operator=(CullingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CullingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CullingMode_Unwrapped : int32_t {
__None = 0,
__Back = 1,
__Front = 2,
__FrontBack = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingMode_Unwrapped () const noexcept {
return std::bit_cast<__CullingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ProBuilder::CullingMode const None;

/// @brief Field Back offset 0
static UnityEngine::ProBuilder::CullingMode const Back;

/// @brief Field Front offset 0
static UnityEngine::ProBuilder::CullingMode const Front;

/// @brief Field FrontBack offset 0
static UnityEngine::ProBuilder::CullingMode const FrontBack;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::CullingMode, "UnityEngine.ProBuilder", "CullingMode");
