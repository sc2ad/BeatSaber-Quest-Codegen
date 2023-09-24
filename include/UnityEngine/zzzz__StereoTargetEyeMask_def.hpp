#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct StereoTargetEyeMask;
}
// Type: UnityEngine::StereoTargetEyeMask
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10044))
// CS Name: UnityEngine.StereoTargetEyeMask
struct CORDL_TYPE StereoTargetEyeMask : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StereoTargetEyeMask(int32_t value__) noexcept;


                    constexpr StereoTargetEyeMask(StereoTargetEyeMask const&) = default;
                    constexpr StereoTargetEyeMask(StereoTargetEyeMask&&) = default;
                    constexpr StereoTargetEyeMask& operator=(StereoTargetEyeMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StereoTargetEyeMask& operator=(StereoTargetEyeMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StereoTargetEyeMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StereoTargetEyeMask_Unwrapped : int32_t {
__None = 0,
__Left = 1,
__Right = 2,
__Both = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StereoTargetEyeMask_Unwrapped () const noexcept {
return std::bit_cast<__StereoTargetEyeMask_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::StereoTargetEyeMask const None;

/// @brief Field Left offset 0
static UnityEngine::StereoTargetEyeMask const Left;

/// @brief Field Right offset 0
static UnityEngine::StereoTargetEyeMask const Right;

/// @brief Field Both offset 0
static UnityEngine::StereoTargetEyeMask const Both;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StereoTargetEyeMask, "UnityEngine", "StereoTargetEyeMask");
