#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_Vertex_t;
}
// Type: OVR.OpenVR::RenderModel_Vertex_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9495))
// CS Name: OVR.OpenVR.RenderModel_Vertex_t
struct CORDL_TYPE RenderModel_Vertex_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vPosition", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "rfTextureCoord0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rfTextureCoord1", ty: "float_t", modifiers: "", def_value: None }]
constexpr RenderModel_Vertex_t(OVR::OpenVR::HmdVector3_t vPosition, OVR::OpenVR::HmdVector3_t vNormal, float_t rfTextureCoord0, float_t rfTextureCoord1) noexcept;


                    constexpr RenderModel_Vertex_t(RenderModel_Vertex_t const&) = default;
                    constexpr RenderModel_Vertex_t(RenderModel_Vertex_t&&) = default;
                    constexpr RenderModel_Vertex_t& operator=(RenderModel_Vertex_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderModel_Vertex_t& operator=(RenderModel_Vertex_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderModel_Vertex_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vPosition, put=__set_vPosition))  vPosition;

constexpr void __set_vPosition(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vPosition() const;

 OVR::OpenVR::HmdVector3_t __declspec(property(get=__get_vNormal, put=__set_vNormal))  vNormal;

constexpr void __set_vNormal(OVR::OpenVR::HmdVector3_t value) ;

constexpr OVR::OpenVR::HmdVector3_t __get_vNormal() const;

 float_t __declspec(property(get=__get_rfTextureCoord0, put=__set_rfTextureCoord0))  rfTextureCoord0;

constexpr void __set_rfTextureCoord0(float_t value) ;

constexpr float_t __get_rfTextureCoord0() const;

 float_t __declspec(property(get=__get_rfTextureCoord1, put=__set_rfTextureCoord1))  rfTextureCoord1;

constexpr void __set_rfTextureCoord1(float_t value) ;

constexpr float_t __get_rfTextureCoord1() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_Vertex_t, "OVR.OpenVR", "RenderModel_Vertex_t");
