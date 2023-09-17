#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_t;
}
// Type: OVR.OpenVR::RenderModel_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9498))
// CS Name: OVR.OpenVR.RenderModel_t
struct CORDL_TYPE RenderModel_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "rIndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderModel_t(::cordl_internals::intptr_t rVertexData, uint32_t unVertexCount, ::cordl_internals::intptr_t rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept;


                    constexpr RenderModel_t(RenderModel_t const&) = default;
                    constexpr RenderModel_t(RenderModel_t&&) = default;
                    constexpr RenderModel_t& operator=(RenderModel_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderModel_t& operator=(RenderModel_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderModel_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_rVertexData, put=__set_rVertexData))  rVertexData;

constexpr void __set_rVertexData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_rVertexData() const;

 uint32_t __declspec(property(get=__get_unVertexCount, put=__set_unVertexCount))  unVertexCount;

constexpr void __set_unVertexCount(uint32_t value) ;

constexpr uint32_t __get_unVertexCount() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_rIndexData, put=__set_rIndexData))  rIndexData;

constexpr void __set_rIndexData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_rIndexData() const;

 uint32_t __declspec(property(get=__get_unTriangleCount, put=__set_unTriangleCount))  unTriangleCount;

constexpr void __set_unTriangleCount(uint32_t value) ;

constexpr uint32_t __get_unTriangleCount() const;

 int32_t __declspec(property(get=__get_diffuseTextureId, put=__set_diffuseTextureId))  diffuseTextureId;

constexpr void __set_diffuseTextureId(int32_t value) ;

constexpr int32_t __get_diffuseTextureId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_t, "OVR.OpenVR", "RenderModel_t");
