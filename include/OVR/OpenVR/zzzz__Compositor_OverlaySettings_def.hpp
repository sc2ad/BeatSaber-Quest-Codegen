#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_OverlaySettings;
}
// Type: OVR.OpenVR::Compositor_OverlaySettings
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9481))
// CS Name: OVR.OpenVR.Compositor_OverlaySettings
struct CORDL_TYPE Compositor_OverlaySettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "curved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "antialias", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridDivs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None }]
constexpr Compositor_OverlaySettings(uint32_t size, bool curved, bool antialias, float_t scale, float_t distance, float_t alpha, float_t uOffset, float_t vOffset, float_t uScale, float_t vScale, float_t gridDivs, float_t gridWidth, float_t gridScale, ::OVR::OpenVR::HmdMatrix44_t transform) noexcept;


                    constexpr Compositor_OverlaySettings(Compositor_OverlaySettings const&) = default;
                    constexpr Compositor_OverlaySettings(Compositor_OverlaySettings&&) = default;
                    constexpr Compositor_OverlaySettings& operator=(Compositor_OverlaySettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Compositor_OverlaySettings& operator=(Compositor_OverlaySettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Compositor_OverlaySettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(uint32_t value) ;

constexpr uint32_t __get_size() const;

 bool __declspec(property(get=__get_curved, put=__set_curved))  curved;

constexpr void __set_curved(bool value) ;

constexpr bool __get_curved() const;

 bool __declspec(property(get=__get_antialias, put=__set_antialias))  antialias;

constexpr void __set_antialias(bool value) ;

constexpr bool __get_antialias() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 float_t __declspec(property(get=__get_alpha, put=__set_alpha))  alpha;

constexpr void __set_alpha(float_t value) ;

constexpr float_t __get_alpha() const;

 float_t __declspec(property(get=__get_uOffset, put=__set_uOffset))  uOffset;

constexpr void __set_uOffset(float_t value) ;

constexpr float_t __get_uOffset() const;

 float_t __declspec(property(get=__get_vOffset, put=__set_vOffset))  vOffset;

constexpr void __set_vOffset(float_t value) ;

constexpr float_t __get_vOffset() const;

 float_t __declspec(property(get=__get_uScale, put=__set_uScale))  uScale;

constexpr void __set_uScale(float_t value) ;

constexpr float_t __get_uScale() const;

 float_t __declspec(property(get=__get_vScale, put=__set_vScale))  vScale;

constexpr void __set_vScale(float_t value) ;

constexpr float_t __get_vScale() const;

 float_t __declspec(property(get=__get_gridDivs, put=__set_gridDivs))  gridDivs;

constexpr void __set_gridDivs(float_t value) ;

constexpr float_t __get_gridDivs() const;

 float_t __declspec(property(get=__get_gridWidth, put=__set_gridWidth))  gridWidth;

constexpr void __set_gridWidth(float_t value) ;

constexpr float_t __get_gridWidth() const;

 float_t __declspec(property(get=__get_gridScale, put=__set_gridScale))  gridScale;

constexpr void __set_gridScale(float_t value) ;

constexpr float_t __get_gridScale() const;

 ::OVR::OpenVR::HmdMatrix44_t __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::OVR::OpenVR::HmdMatrix44_t value) ;

constexpr ::OVR::OpenVR::HmdMatrix44_t __get_transform() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_OverlaySettings, "OVR.OpenVR", "Compositor_OverlaySettings");
