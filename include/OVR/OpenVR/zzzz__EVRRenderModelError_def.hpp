#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
// Type: OVR.OpenVR::EVRRenderModelError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9415))
// CS Name: OVR.OpenVR.EVRRenderModelError
struct CORDL_TYPE EVRRenderModelError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRRenderModelError(int32_t value__) noexcept;


                    constexpr EVRRenderModelError(EVRRenderModelError const&) = default;
                    constexpr EVRRenderModelError(EVRRenderModelError&&) = default;
                    constexpr EVRRenderModelError& operator=(EVRRenderModelError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRRenderModelError& operator=(EVRRenderModelError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRRenderModelError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRRenderModelError_Unwrapped : int32_t {
__None = 0,
__Loading = 100,
__NotSupported = 200,
__InvalidArg = 300,
__InvalidModel = 301,
__NoShapes = 302,
__MultipleShapes = 303,
__TooManyVertices = 304,
__MultipleTextures = 305,
__BufferTooSmall = 306,
__NotEnoughNormals = 307,
__NotEnoughTexCoords = 308,
__InvalidTexture = 400,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRRenderModelError_Unwrapped () const noexcept {
return std::bit_cast<__EVRRenderModelError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::OVR::OpenVR::EVRRenderModelError const None;

/// @brief Field Loading offset 0
static ::OVR::OpenVR::EVRRenderModelError const Loading;

/// @brief Field NotSupported offset 0
static ::OVR::OpenVR::EVRRenderModelError const NotSupported;

/// @brief Field InvalidArg offset 0
static ::OVR::OpenVR::EVRRenderModelError const InvalidArg;

/// @brief Field InvalidModel offset 0
static ::OVR::OpenVR::EVRRenderModelError const InvalidModel;

/// @brief Field NoShapes offset 0
static ::OVR::OpenVR::EVRRenderModelError const NoShapes;

/// @brief Field MultipleShapes offset 0
static ::OVR::OpenVR::EVRRenderModelError const MultipleShapes;

/// @brief Field TooManyVertices offset 0
static ::OVR::OpenVR::EVRRenderModelError const TooManyVertices;

/// @brief Field MultipleTextures offset 0
static ::OVR::OpenVR::EVRRenderModelError const MultipleTextures;

/// @brief Field BufferTooSmall offset 0
static ::OVR::OpenVR::EVRRenderModelError const BufferTooSmall;

/// @brief Field NotEnoughNormals offset 0
static ::OVR::OpenVR::EVRRenderModelError const NotEnoughNormals;

/// @brief Field NotEnoughTexCoords offset 0
static ::OVR::OpenVR::EVRRenderModelError const NotEnoughTexCoords;

/// @brief Field InvalidTexture offset 0
static ::OVR::OpenVR::EVRRenderModelError const InvalidTexture;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRRenderModelError, "OVR.OpenVR", "EVRRenderModelError");
