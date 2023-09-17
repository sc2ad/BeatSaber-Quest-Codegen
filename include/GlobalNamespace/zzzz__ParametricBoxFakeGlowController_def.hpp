#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxFakeGlowController;
}
// Type: ::ParametricBoxFakeGlowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14648))
// CS Name: ParametricBoxFakeGlowController
class CORDL_TYPE ParametricBoxFakeGlowController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ParametricBoxFakeGlowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: " const&", def_value: None }]
constexpr ParametricBoxFakeGlowController(ParametricBoxFakeGlowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFakeGlowController", modifiers: "&&", def_value: None }]
constexpr ParametricBoxFakeGlowController(ParametricBoxFakeGlowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametricBoxFakeGlowController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParametricBoxFakeGlowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametricBoxFakeGlowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametricBoxFakeGlowController& operator=(ParametricBoxFakeGlowController&& o) noexcept = default;
  constexpr ParametricBoxFakeGlowController& operator=(ParametricBoxFakeGlowController const& o) noexcept = default;
                


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

 float_t __declspec(property(get=__get_edgeSize, put=__set_edgeSize))  edgeSize;

constexpr void __set_edgeSize(float_t value) ;

constexpr float_t __get_edgeSize() const;

 float_t __declspec(property(get=__get_edgeSizeMultiplier, put=__set_edgeSizeMultiplier))  edgeSizeMultiplier;

constexpr void __set_edgeSizeMultiplier(float_t value) ;

constexpr float_t __get_edgeSizeMultiplier() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

static int32_t __declspec(property(get=__get__sizeParamsID, put=__set__sizeParamsID))  _sizeParamsID;

static void __set__sizeParamsID(int32_t value) ;

static int32_t __get__sizeParamsID() ;


// Properties

 ::UnityEngine::Vector3 __declspec(property(put=set_localPosition))  localPosition;


// Methods

/// @brief Method set_localPosition addr 0x1f9707c size 0x48 virtual false final false
 void set_localPosition(::UnityEngine::Vector3 value) ;

/// @brief Method Awake addr 0x1f970c4 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f970e4 size 0x28 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f97230 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method Refresh addr 0x1f9710c size 0x124 virtual false final false
 void Refresh() ;

// Ctor Parameters []
explicit ParametricBoxFakeGlowController() ;

/// @brief Method .ctor addr 0x1f97250 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ParametricBoxFakeGlowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParametricBoxFakeGlowController, "", "ParametricBoxFakeGlowController");
