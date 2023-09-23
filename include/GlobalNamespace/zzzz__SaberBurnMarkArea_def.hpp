#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class LineRenderer;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
struct Plane;
}
namespace GlobalNamespace {
class SaberManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkArea;
}
// Type: ::SaberBurnMarkArea
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4987))
// CS Name: SaberBurnMarkArea
class CORDL_TYPE SaberBurnMarkArea : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x138};

virtual ~SaberBurnMarkArea() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: " const&", def_value: None }]
constexpr SaberBurnMarkArea(SaberBurnMarkArea const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkArea", modifiers: "&&", def_value: None }]
constexpr SaberBurnMarkArea(SaberBurnMarkArea&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberBurnMarkArea(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberBurnMarkArea& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberBurnMarkArea& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberBurnMarkArea& operator=(SaberBurnMarkArea&& o) noexcept = default;
  constexpr SaberBurnMarkArea& operator=(SaberBurnMarkArea const& o) noexcept = default;
                


// Fields

 UnityEngine::LineRenderer __declspec(property(get=__get__saberBurnMarkLinePrefab, put=__set__saberBurnMarkLinePrefab))  _saberBurnMarkLinePrefab;

constexpr void __set__saberBurnMarkLinePrefab(UnityEngine::LineRenderer value) ;

constexpr UnityEngine::LineRenderer __get__saberBurnMarkLinePrefab() const;

 float_t __declspec(property(get=__get__blackMarkLineRandomOffset, put=__set__blackMarkLineRandomOffset))  _blackMarkLineRandomOffset;

constexpr void __set__blackMarkLineRandomOffset(float_t value) ;

constexpr float_t __get__blackMarkLineRandomOffset() const;

 int32_t __declspec(property(get=__get__textureWidth, put=__set__textureWidth))  _textureWidth;

constexpr void __set__textureWidth(int32_t value) ;

constexpr int32_t __get__textureWidth() const;

 int32_t __declspec(property(get=__get__textureHeight, put=__set__textureHeight))  _textureHeight;

constexpr void __set__textureHeight(int32_t value) ;

constexpr int32_t __get__textureHeight() const;

 float_t __declspec(property(get=__get__burnMarksFadeOutStrength, put=__set__burnMarksFadeOutStrength))  _burnMarksFadeOutStrength;

constexpr void __set__burnMarksFadeOutStrength(float_t value) ;

constexpr float_t __get__burnMarksFadeOutStrength() const;

 UnityEngine::Shader __declspec(property(get=__get__fadeOutShader, put=__set__fadeOutShader))  _fadeOutShader;

constexpr void __set__fadeOutShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__fadeOutShader() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;

 int32_t __declspec(property(get=__get__fadeOutStrengthShaderPropertyID, put=__set__fadeOutStrengthShaderPropertyID))  _fadeOutStrengthShaderPropertyID;

constexpr void __set__fadeOutStrengthShaderPropertyID(int32_t value) ;

constexpr int32_t __get__fadeOutStrengthShaderPropertyID() const;

 ::ArrayW<GlobalNamespace::Saber> __declspec(property(get=__get__sabers, put=__set__sabers))  _sabers;

constexpr void __set__sabers(::ArrayW<GlobalNamespace::Saber> value) ;

constexpr ::ArrayW<GlobalNamespace::Saber> __get__sabers() const;

 UnityEngine::Plane __declspec(property(get=__get__plane, put=__set__plane))  _plane;

constexpr void __set__plane(UnityEngine::Plane value) ;

constexpr UnityEngine::Plane __get__plane() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__prevBurnMarkPos, put=__set__prevBurnMarkPos))  _prevBurnMarkPos;

constexpr void __set__prevBurnMarkPos(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__prevBurnMarkPos() const;

 ::ArrayW<bool> __declspec(property(get=__get__prevBurnMarkPosValid, put=__set__prevBurnMarkPosValid))  _prevBurnMarkPosValid;

constexpr void __set__prevBurnMarkPosValid(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__prevBurnMarkPosValid() const;

 ::ArrayW<UnityEngine::LineRenderer> __declspec(property(get=__get__lineRenderers, put=__set__lineRenderers))  _lineRenderers;

constexpr void __set__lineRenderers(::ArrayW<UnityEngine::LineRenderer> value) ;

constexpr ::ArrayW<UnityEngine::LineRenderer> __get__lineRenderers() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__linePoints, put=__set__linePoints))  _linePoints;

constexpr void __set__linePoints(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__linePoints() const;

 ::ArrayW<UnityEngine::RenderTexture> __declspec(property(get=__get__renderTextures, put=__set__renderTextures))  _renderTextures;

constexpr void __set__renderTextures(::ArrayW<UnityEngine::RenderTexture> value) ;

constexpr ::ArrayW<UnityEngine::RenderTexture> __get__renderTextures() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__emitParams, put=__set__emitParams))  _emitParams;

constexpr void __set__emitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__emitParams() const;

 UnityEngine::Material __declspec(property(get=__get__fadeOutMaterial, put=__set__fadeOutMaterial))  _fadeOutMaterial;

constexpr void __set__fadeOutMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__fadeOutMaterial() const;


// Methods

/// @brief Method Start addr 0x2252f24 size 0x8b8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22537dc size 0x224 virtual false final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2253a00 size 0x120 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2253b20 size 0x120 virtual false final false
 void OnDisable() ;

/// @brief Method GetBurnMarkPos addr 0x2253c40 size 0x244 virtual false final false
 bool GetBurnMarkPos(UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, ByRef<UnityEngine::Vector3> burnMarkPos) ;

/// @brief Method WorldToCameraBurnMarkPos addr 0x2253e84 size 0x100 virtual false final false
 UnityEngine::Vector3 WorldToCameraBurnMarkPos(UnityEngine::Vector3 pos) ;

/// @brief Method LateUpdate addr 0x2253f84 size 0x6c0 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit SaberBurnMarkArea() ;

/// @brief Method .ctor addr 0x2254644 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberBurnMarkArea);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberBurnMarkArea, "", "SaberBurnMarkArea");
