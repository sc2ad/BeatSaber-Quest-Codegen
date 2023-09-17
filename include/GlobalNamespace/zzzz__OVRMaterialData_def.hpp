#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct OVRTextureData;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMaterialData;
}
// Type: ::OVRMaterialData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8482))
// CS Name: OVRMaterialData
struct CORDL_TYPE OVRMaterialData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "shader", ty: "::UnityEngine::Shader", modifiers: "", def_value: None }, CppParam { name: "textureId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::GlobalNamespace::OVRTextureData", modifiers: "", def_value: None }]
constexpr OVRMaterialData(::UnityEngine::Shader shader, int32_t textureId, ::GlobalNamespace::OVRTextureData texture) noexcept;


                    constexpr OVRMaterialData(OVRMaterialData const&) = default;
                    constexpr OVRMaterialData(OVRMaterialData&&) = default;
                    constexpr OVRMaterialData& operator=(OVRMaterialData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRMaterialData& operator=(OVRMaterialData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRMaterialData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Shader __declspec(property(get=__get_shader, put=__set_shader))  shader;

constexpr void __set_shader(::UnityEngine::Shader value) ;

constexpr ::UnityEngine::Shader __get_shader() const;

 int32_t __declspec(property(get=__get_textureId, put=__set_textureId))  textureId;

constexpr void __set_textureId(int32_t value) ;

constexpr int32_t __get_textureId() const;

 ::GlobalNamespace::OVRTextureData __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(::GlobalNamespace::OVRTextureData value) ;

constexpr ::GlobalNamespace::OVRTextureData __get_texture() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMaterialData, "", "OVRMaterialData");
