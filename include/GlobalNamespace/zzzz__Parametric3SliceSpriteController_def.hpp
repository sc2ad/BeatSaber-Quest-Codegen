#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
// Type: ::Parametric3SliceSpriteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14646))
// CS Name: Parametric3SliceSpriteController
class CORDL_TYPE Parametric3SliceSpriteController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Parametric3SliceSpriteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: " const&", def_value: None }]
constexpr Parametric3SliceSpriteController(Parametric3SliceSpriteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Parametric3SliceSpriteController", modifiers: "&&", def_value: None }]
constexpr Parametric3SliceSpriteController(Parametric3SliceSpriteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Parametric3SliceSpriteController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Parametric3SliceSpriteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Parametric3SliceSpriteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Parametric3SliceSpriteController& operator=(Parametric3SliceSpriteController&& o) noexcept = default;
  constexpr Parametric3SliceSpriteController& operator=(Parametric3SliceSpriteController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__widthMultiplier, put=__set__widthMultiplier))  _widthMultiplier;

constexpr void __set__widthMultiplier(float_t value) ;

constexpr float_t __get__widthMultiplier() const;

 float_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(float_t value) ;

constexpr float_t __get_width() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(float_t value) ;

constexpr float_t __get_center() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;

 float_t __declspec(property(get=__get_alphaMultiplier, put=__set_alphaMultiplier))  alphaMultiplier;

constexpr void __set_alphaMultiplier(float_t value) ;

constexpr float_t __get_alphaMultiplier() const;

 float_t __declspec(property(get=__get_minAlpha, put=__set_minAlpha))  minAlpha;

constexpr void __set_minAlpha(float_t value) ;

constexpr float_t __get_minAlpha() const;

 float_t __declspec(property(get=__get_alphaStart, put=__set_alphaStart))  alphaStart;

constexpr void __set_alphaStart(float_t value) ;

constexpr float_t __get_alphaStart() const;

 float_t __declspec(property(get=__get_alphaEnd, put=__set_alphaEnd))  alphaEnd;

constexpr void __set_alphaEnd(float_t value) ;

constexpr float_t __get_alphaEnd() const;

 float_t __declspec(property(get=__get_widthStart, put=__set_widthStart))  widthStart;

constexpr void __set_widthStart(float_t value) ;

constexpr float_t __get_widthStart() const;

 float_t __declspec(property(get=__get_widthEnd, put=__set_widthEnd))  widthEnd;

constexpr void __set_widthEnd(float_t value) ;

constexpr float_t __get_widthEnd() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__meshFilter() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

/// @brief Field kMaxWidth offset 0
static constexpr float_t  kMaxWidth{10};

/// @brief Field kMaxLength offset 0
static constexpr float_t  kMaxLength{2500};

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

static int32_t __declspec(property(get=__get__sizeParamsID, put=__set__sizeParamsID))  _sizeParamsID;

static void __set__sizeParamsID(int32_t value) ;

static int32_t __get__sizeParamsID() ;

static int32_t __declspec(property(get=__get__alphaStartID, put=__set__alphaStartID))  _alphaStartID;

static void __set__alphaStartID(int32_t value) ;

static int32_t __get__alphaStartID() ;

static int32_t __declspec(property(get=__get__alphaEndID, put=__set__alphaEndID))  _alphaEndID;

static void __set__alphaEndID(int32_t value) ;

static int32_t __get__alphaEndID() ;

static int32_t __declspec(property(get=__get__widthStartID, put=__set__widthStartID))  _widthStartID;

static void __set__widthStartID(int32_t value) ;

static int32_t __get__widthStartID() ;

static int32_t __declspec(property(get=__get__widthEndID, put=__set__widthEndID))  _widthEndID;

static void __set__widthEndID(int32_t value) ;

static int32_t __get__widthEndID() ;

static ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

static ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

static ::UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

static void __set__mesh(::UnityEngine::Mesh value) ;

static ::UnityEngine::Mesh __get__mesh() ;

static int32_t __declspec(property(get=__get__instanceCount, put=__set__instanceCount))  _instanceCount;

static void __set__instanceCount(int32_t value) ;

static int32_t __get__instanceCount() ;


// Methods

/// @brief Method Awake addr 0x1f96278 size 0x164 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1f96748 size 0x70 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x1f967b8 size 0x2c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f96a08 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x1f96a28 size 0xc4 virtual false final false
 void OnDestroy() ;

/// @brief Method Init addr 0x1f963dc size 0x84 virtual false final false
 void Init() ;

/// @brief Method CreateMesh addr 0x1f96460 size 0x2e8 virtual false final false
 ::UnityEngine::Mesh CreateMesh() ;

/// @brief Method Refresh addr 0x1f967e4 size 0x224 virtual false final false
 void Refresh() ;

// Ctor Parameters []
explicit Parametric3SliceSpriteController() ;

/// @brief Method .ctor addr 0x1f96aec size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Parametric3SliceSpriteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Parametric3SliceSpriteController, "", "Parametric3SliceSpriteController");
