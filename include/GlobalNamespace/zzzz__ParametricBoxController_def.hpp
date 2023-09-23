#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxController;
}
// Type: ::ParametricBoxController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14647))
// CS Name: ParametricBoxController
class CORDL_TYPE ParametricBoxController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ParametricBoxController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: " const&", def_value: None }]
constexpr ParametricBoxController(ParametricBoxController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxController", modifiers: "&&", def_value: None }]
constexpr ParametricBoxController(ParametricBoxController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametricBoxController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParametricBoxController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametricBoxController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametricBoxController& operator=(ParametricBoxController&& o) noexcept = default;
  constexpr ParametricBoxController& operator=(ParametricBoxController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(float_t value) ;

constexpr float_t __get_width() const;

 float_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(float_t value) ;

constexpr float_t __get_height() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 float_t __declspec(property(get=__get_heightCenter, put=__set_heightCenter))  heightCenter;

constexpr void __set_heightCenter(float_t value) ;

constexpr float_t __get_heightCenter() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

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

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

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


// Methods

/// @brief Method Awake addr 0x1f96c70 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f96c90 size 0x28 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f96f10 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method Refresh addr 0x1f96cb8 size 0x258 virtual false final false
 void Refresh() ;

// Ctor Parameters []
explicit ParametricBoxController() ;

/// @brief Method .ctor addr 0x1f96f30 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParametricBoxController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxController, "", "ParametricBoxController");
