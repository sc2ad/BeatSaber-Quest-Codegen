#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ParametricBoxFrameController;
}
// Type: ::ParametricBoxFrameController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14649))
// CS Name: ParametricBoxFrameController
class CORDL_TYPE ParametricBoxFrameController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ParametricBoxFrameController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFrameController", modifiers: " const&", def_value: None }]
constexpr ParametricBoxFrameController(ParametricBoxFrameController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametricBoxFrameController", modifiers: "&&", def_value: None }]
constexpr ParametricBoxFrameController(ParametricBoxFrameController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametricBoxFrameController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParametricBoxFrameController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametricBoxFrameController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametricBoxFrameController& operator=(ParametricBoxFrameController&& o) noexcept = default;
  constexpr ParametricBoxFrameController& operator=(ParametricBoxFrameController const& o) noexcept = default;
                


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

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

static int32_t __declspec(property(get=__get__sizeParamsID, put=__set__sizeParamsID))  _sizeParamsID;

static void __set__sizeParamsID(int32_t value) ;

static int32_t __get__sizeParamsID() ;


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_localPosition))  localPosition;


// Methods

/// @brief Method set_localPosition addr 0x1f97308 size 0x48 virtual false final false
 void set_localPosition(UnityEngine::Vector3 value) ;

/// @brief Method Awake addr 0x1f97350 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f97370 size 0x28 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f974b4 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method Refresh addr 0x1f97398 size 0x11c virtual false final false
 void Refresh() ;

static GlobalNamespace::ParametricBoxFrameController New_ctor() ;

/// @brief Method .ctor addr 0x1f974d4 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParametricBoxFrameController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxFrameController, "", "ParametricBoxFrameController");
