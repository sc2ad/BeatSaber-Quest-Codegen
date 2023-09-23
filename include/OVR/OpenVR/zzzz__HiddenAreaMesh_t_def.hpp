#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
// Type: OVR.OpenVR::HiddenAreaMesh_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9477))
// CS Name: OVR.OpenVR.HiddenAreaMesh_t
struct CORDL_TYPE HiddenAreaMesh_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HiddenAreaMesh_t(::cordl_internals::intptr_t pVertexData, uint32_t unTriangleCount) noexcept;


                    constexpr HiddenAreaMesh_t(HiddenAreaMesh_t const&) = default;
                    constexpr HiddenAreaMesh_t(HiddenAreaMesh_t&&) = default;
                    constexpr HiddenAreaMesh_t& operator=(HiddenAreaMesh_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HiddenAreaMesh_t& operator=(HiddenAreaMesh_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HiddenAreaMesh_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_pVertexData, put=__set_pVertexData))  pVertexData;

constexpr void __set_pVertexData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pVertexData() const;

 uint32_t __declspec(property(get=__get_unTriangleCount, put=__set_unTriangleCount))  unTriangleCount;

constexpr void __set_unTriangleCount(uint32_t value) ;

constexpr uint32_t __get_unTriangleCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HiddenAreaMesh_t, "OVR.OpenVR", "HiddenAreaMesh_t");
