#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
// Type: OVR.OpenVR::EVRSubmitFlags
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9372))
// CS Name: OVR.OpenVR.EVRSubmitFlags
struct CORDL_TYPE EVRSubmitFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSubmitFlags(int32_t value__) noexcept;


                    constexpr EVRSubmitFlags(EVRSubmitFlags const&) = default;
                    constexpr EVRSubmitFlags(EVRSubmitFlags&&) = default;
                    constexpr EVRSubmitFlags& operator=(EVRSubmitFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRSubmitFlags& operator=(EVRSubmitFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRSubmitFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRSubmitFlags_Unwrapped : int32_t {
__Submit_Default = 0,
__Submit_LensDistortionAlreadyApplied = 1,
__Submit_GlRenderBuffer = 2,
__Submit_Reserved = 4,
__Submit_TextureWithPose = 8,
__Submit_TextureWithDepth = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSubmitFlags_Unwrapped () const noexcept {
return std::bit_cast<__EVRSubmitFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Submit_Default offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_Default;

/// @brief Field Submit_LensDistortionAlreadyApplied offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_LensDistortionAlreadyApplied;

/// @brief Field Submit_GlRenderBuffer offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_GlRenderBuffer;

/// @brief Field Submit_Reserved offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_Reserved;

/// @brief Field Submit_TextureWithPose offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithPose;

/// @brief Field Submit_TextureWithDepth offset 0
static OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithDepth;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRSubmitFlags, "OVR.OpenVR", "EVRSubmitFlags");
