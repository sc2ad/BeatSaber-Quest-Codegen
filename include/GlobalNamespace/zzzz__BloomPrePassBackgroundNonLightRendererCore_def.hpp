#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRendererCore;
}
// Type: ::BloomPrePassBackgroundNonLightRendererCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14626))
// CS Name: BloomPrePassBackgroundNonLightRendererCore
class CORDL_TYPE BloomPrePassBackgroundNonLightRendererCore : public GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BloomPrePassBackgroundNonLightRendererCore() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRendererCore", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightRendererCore(BloomPrePassBackgroundNonLightRendererCore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundNonLightRendererCore(void* ptr) noexcept : GlobalNamespace::BloomPrePassNonLightPass(ptr) {
}


  constexpr BloomPrePassBackgroundNonLightRendererCore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightRendererCore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightRendererCore& operator=(BloomPrePassBackgroundNonLightRendererCore&& o) noexcept = default;
  constexpr BloomPrePassBackgroundNonLightRendererCore& operator=(BloomPrePassBackgroundNonLightRendererCore const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__keepDefaultRendering, put=__set__keepDefaultRendering))  _keepDefaultRendering;

constexpr void __set__keepDefaultRendering(bool value) ;

constexpr bool __get__keepDefaultRendering() const;

 bool __declspec(property(get=__get__useCustomMaterial, put=__set__useCustomMaterial))  _useCustomMaterial;

constexpr void __set__useCustomMaterial(bool value) ;

constexpr bool __get__useCustomMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__customMaterial, put=__set__customMaterial))  _customMaterial;

constexpr void __set__customMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__customMaterial() const;

static int32_t __declspec(property(get=__get__worldSpaceCameraPosID, put=__set__worldSpaceCameraPosID))  _worldSpaceCameraPosID;

static void __set__worldSpaceCameraPosID(int32_t value) ;

static int32_t __get__worldSpaceCameraPosID() ;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__commandBuffer, put=__set__commandBuffer))  _commandBuffer;

constexpr void __set__commandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__commandBuffer() const;


// Properties

 UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;

 bool __declspec(property(get=get_useCustomMaterial))  useCustomMaterial;

 UnityEngine::Material __declspec(property(get=get_customMaterial))  customMaterial;


// Methods

/// @brief Method get_renderer addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Renderer get_renderer() ;

/// @brief Method get_useCustomMaterial addr 0x1f93bbc size 0x8 virtual false final false
 bool get_useCustomMaterial() ;

/// @brief Method get_customMaterial addr 0x1f93bc4 size 0x8 virtual false final false
 UnityEngine::Material get_customMaterial() ;

/// @brief Method InitIfNeeded addr 0x1f93a5c size 0xb4 virtual true final false
 void InitIfNeeded() ;

/// @brief Method Awake addr 0x1f93940 size 0xc virtual true final false
 void Awake() ;

/// @brief Method Render addr 0x1f93bcc size 0x238 virtual true final false
 void Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix) ;

static GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore New_ctor() ;

/// @brief Method .ctor addr 0x1f93b64 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore, "", "BloomPrePassBackgroundNonLightRendererCore");
