#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class CubemapTest;
}
// Type: ::CubemapTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5944))
// CS Name: CubemapTest
class CORDL_TYPE CubemapTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CubemapTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: " const&", def_value: None }]
constexpr CubemapTest(CubemapTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapTest", modifiers: "&&", def_value: None }]
constexpr CubemapTest(CubemapTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CubemapTest(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CubemapTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CubemapTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CubemapTest& operator=(CubemapTest&& o) noexcept = default;
  constexpr CubemapTest& operator=(CubemapTest const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get__camera() const;

 ::UnityEngine::Material __declspec(property(get=__get__cubemapMaterial, put=__set__cubemapMaterial))  _cubemapMaterial;

constexpr void __set__cubemapMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__cubemapMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__flatMaterial, put=__set__flatMaterial))  _flatMaterial;

constexpr void __set__flatMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__flatMaterial() const;

 ::UnityEngine::RenderTexture __declspec(property(get=__get__cubemapRenderTexture, put=__set__cubemapRenderTexture))  _cubemapRenderTexture;

constexpr void __set__cubemapRenderTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__cubemapRenderTexture() const;

 ::UnityEngine::RenderTexture __declspec(property(get=__get__downsampledCubemapRenderTexture, put=__set__downsampledCubemapRenderTexture))  _downsampledCubemapRenderTexture;

constexpr void __set__downsampledCubemapRenderTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__downsampledCubemapRenderTexture() const;

 ::UnityEngine::RenderTexture __declspec(property(get=__get__cubemapFlatTexture, put=__set__cubemapFlatTexture))  _cubemapFlatTexture;

constexpr void __set__cubemapFlatTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__cubemapFlatTexture() const;

static int32_t __declspec(property(get=__get__cubePropertyId, put=__set__cubePropertyId))  _cubePropertyId;

static void __set__cubePropertyId(int32_t value) ;

static int32_t __get__cubePropertyId() ;


// Methods

/// @brief Method Start addr 0x219bf78 size 0x7c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x219bff4 size 0x210 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit CubemapTest() ;

/// @brief Method .ctor addr 0x219c204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CubemapTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapTest, "", "CubemapTest");
