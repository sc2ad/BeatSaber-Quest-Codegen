#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRCompositorError;
}
// Type: OVR.OpenVR::EVRCompositorError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9405))
// CS Name: OVR.OpenVR.EVRCompositorError
struct CORDL_TYPE EVRCompositorError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRCompositorError(int32_t value__) noexcept;


                    constexpr EVRCompositorError(EVRCompositorError const&) = default;
                    constexpr EVRCompositorError(EVRCompositorError&&) = default;
                    constexpr EVRCompositorError& operator=(EVRCompositorError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRCompositorError& operator=(EVRCompositorError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRCompositorError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRCompositorError_Unwrapped : int32_t {
__None = 0,
__RequestFailed = 1,
__IncompatibleVersion = 100,
__DoNotHaveFocus = 101,
__InvalidTexture = 102,
__IsNotSceneApplication = 103,
__TextureIsOnWrongDevice = 104,
__TextureUsesUnsupportedFormat = 105,
__SharedTexturesNotSupported = 106,
__IndexOutOfRange = 107,
__AlreadySubmitted = 108,
__InvalidBounds = 109,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRCompositorError_Unwrapped () const noexcept {
return std::bit_cast<__EVRCompositorError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRCompositorError const None;

/// @brief Field RequestFailed offset 0
static OVR::OpenVR::EVRCompositorError const RequestFailed;

/// @brief Field IncompatibleVersion offset 0
static OVR::OpenVR::EVRCompositorError const IncompatibleVersion;

/// @brief Field DoNotHaveFocus offset 0
static OVR::OpenVR::EVRCompositorError const DoNotHaveFocus;

/// @brief Field InvalidTexture offset 0
static OVR::OpenVR::EVRCompositorError const InvalidTexture;

/// @brief Field IsNotSceneApplication offset 0
static OVR::OpenVR::EVRCompositorError const IsNotSceneApplication;

/// @brief Field TextureIsOnWrongDevice offset 0
static OVR::OpenVR::EVRCompositorError const TextureIsOnWrongDevice;

/// @brief Field TextureUsesUnsupportedFormat offset 0
static OVR::OpenVR::EVRCompositorError const TextureUsesUnsupportedFormat;

/// @brief Field SharedTexturesNotSupported offset 0
static OVR::OpenVR::EVRCompositorError const SharedTexturesNotSupported;

/// @brief Field IndexOutOfRange offset 0
static OVR::OpenVR::EVRCompositorError const IndexOutOfRange;

/// @brief Field AlreadySubmitted offset 0
static OVR::OpenVR::EVRCompositorError const AlreadySubmitted;

/// @brief Field InvalidBounds offset 0
static OVR::OpenVR::EVRCompositorError const InvalidBounds;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRCompositorError, "OVR.OpenVR", "EVRCompositorError");
