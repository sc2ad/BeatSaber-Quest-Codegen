#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVROverlayIntersectionMaskPrimitiveType;
}
// Type: OVR.OpenVR::EVROverlayIntersectionMaskPrimitiveType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9414))
// CS Name: OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
struct CORDL_TYPE EVROverlayIntersectionMaskPrimitiveType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVROverlayIntersectionMaskPrimitiveType(int32_t value__) noexcept;


                    constexpr EVROverlayIntersectionMaskPrimitiveType(EVROverlayIntersectionMaskPrimitiveType const&) = default;
                    constexpr EVROverlayIntersectionMaskPrimitiveType(EVROverlayIntersectionMaskPrimitiveType&&) = default;
                    constexpr EVROverlayIntersectionMaskPrimitiveType& operator=(EVROverlayIntersectionMaskPrimitiveType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVROverlayIntersectionMaskPrimitiveType& operator=(EVROverlayIntersectionMaskPrimitiveType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVROverlayIntersectionMaskPrimitiveType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVROverlayIntersectionMaskPrimitiveType_Unwrapped : int32_t {
__OverlayIntersectionPrimitiveType_Rectangle = 0,
__OverlayIntersectionPrimitiveType_Circle = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVROverlayIntersectionMaskPrimitiveType_Unwrapped () const noexcept {
return std::bit_cast<__EVROverlayIntersectionMaskPrimitiveType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OverlayIntersectionPrimitiveType_Rectangle offset 0
static ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType const OverlayIntersectionPrimitiveType_Rectangle;

/// @brief Field OverlayIntersectionPrimitiveType_Circle offset 0
static ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType const OverlayIntersectionPrimitiveType_Circle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, "OVR.OpenVR", "EVROverlayIntersectionMaskPrimitiveType");
