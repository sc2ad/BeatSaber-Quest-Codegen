#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlow;
}
// Type: ::RectangleFakeGlow
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5090))
// CS Name: RectangleFakeGlow
class CORDL_TYPE RectangleFakeGlow : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RectangleFakeGlow() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: " const&", def_value: None }]
constexpr RectangleFakeGlow(RectangleFakeGlow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlow", modifiers: "&&", def_value: None }]
constexpr RectangleFakeGlow(RectangleFakeGlow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectangleFakeGlow(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RectangleFakeGlow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectangleFakeGlow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectangleFakeGlow& operator=(RectangleFakeGlow&& o) noexcept = default;
  constexpr RectangleFakeGlow& operator=(RectangleFakeGlow const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__size() const;

 float_t __declspec(property(get=__get__edgeSize, put=__set__edgeSize))  _edgeSize;

constexpr void __set__edgeSize(float_t value) ;

constexpr float_t __get__edgeSize() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

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

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method set_color addr 0x2269e54 size 0xc4 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_color addr 0x2269f18 size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method Awake addr 0x2269f24 size 0x6c virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2269f90 size 0x74 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x226a118 size 0x6c virtual false final false
 void OnDisable() ;

/// @brief Method Refresh addr 0x226a004 size 0x114 virtual false final false
 void Refresh() ;

static GlobalNamespace::RectangleFakeGlow New_ctor() ;

/// @brief Method .ctor addr 0x226a184 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RectangleFakeGlow);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RectangleFakeGlow, "", "RectangleFakeGlow");
