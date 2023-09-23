#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpaceLocationFlags;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrSpaceLocationFlags
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14179))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpaceLocationFlags
struct CORDL_TYPE XrSpaceLocationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrSpaceLocationFlags(int32_t value__) noexcept;


                    constexpr XrSpaceLocationFlags(XrSpaceLocationFlags const&) = default;
                    constexpr XrSpaceLocationFlags(XrSpaceLocationFlags&&) = default;
                    constexpr XrSpaceLocationFlags& operator=(XrSpaceLocationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrSpaceLocationFlags& operator=(XrSpaceLocationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrSpaceLocationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrSpaceLocationFlags_Unwrapped : int32_t {
__None = 0,
__OrientationValid = 1,
__PositionValid = 2,
__OrientationTracked = 4,
__PositionTracked = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrSpaceLocationFlags_Unwrapped () const noexcept {
return std::bit_cast<__XrSpaceLocationFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const None;

/// @brief Field OrientationValid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationValid;

/// @brief Field PositionValid offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionValid;

/// @brief Field OrientationTracked offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const OrientationTracked;

/// @brief Field PositionTracked offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags const PositionTracked;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpaceLocationFlags");
