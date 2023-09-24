#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GlobalNamespace__BlocksBlade__Element;
}
// Forward declare root types
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class GlobalNamespace__BlocksBlade__Element;
}
// Type: ::Element
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5372))
// CS Name: BlocksBlade::Element
class CORDL_TYPE GlobalNamespace__BlocksBlade__Element : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BlocksBlade__Element() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BlocksBlade__Element", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BlocksBlade__Element(GlobalNamespace__BlocksBlade__Element const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BlocksBlade__Element", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BlocksBlade__Element(GlobalNamespace__BlocksBlade__Element&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BlocksBlade__Element(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BlocksBlade__Element& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BlocksBlade__Element& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BlocksBlade__Element& operator=(GlobalNamespace__BlocksBlade__Element&& o) noexcept = default;
  constexpr GlobalNamespace__BlocksBlade__Element& operator=(GlobalNamespace__BlocksBlade__Element const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_idx, put=__set_idx))  idx;

constexpr void __set_idx(int32_t value) ;

constexpr int32_t __get_idx() const;

 float_t __declspec(property(get=__get_velocity, put=__set_velocity))  velocity;

constexpr void __set_velocity(float_t value) ;

constexpr float_t __get_velocity() const;


// Methods

static GlobalNamespace::GlobalNamespace__BlocksBlade__Element New_ctor() ;

/// @brief Method .ctor addr 0x2109cfc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BlocksBlade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5373))
// CS Name: BlocksBlade
class CORDL_TYPE BlocksBlade : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Element = GlobalNamespace::GlobalNamespace__BlocksBlade__Element;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BlocksBlade() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: " const&", def_value: None }]
constexpr BlocksBlade(BlocksBlade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: "&&", def_value: None }]
constexpr BlocksBlade(BlocksBlade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlocksBlade(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BlocksBlade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlocksBlade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlocksBlade& operator=(BlocksBlade&& o) noexcept = default;
  constexpr BlocksBlade& operator=(BlocksBlade const& o) noexcept = default;
                


// Fields

 UnityEngine::Mesh __declspec(property(get=__get__elementMesh, put=__set__elementMesh))  _elementMesh;

constexpr void __set__elementMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__elementMesh() const;

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;

 int32_t __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements))  _numberOfElements;

constexpr void __set__numberOfElements(int32_t value) ;

constexpr int32_t __get__numberOfElements() const;

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;

 float_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(float_t value) ;

constexpr float_t __get__length() const;

 float_t __declspec(property(get=__get__minVelocity, put=__set__minVelocity))  _minVelocity;

constexpr void __set__minVelocity(float_t value) ;

constexpr float_t __get__minVelocity() const;

 float_t __declspec(property(get=__get__maxVelocity, put=__set__maxVelocity))  _maxVelocity;

constexpr void __set__maxVelocity(float_t value) ;

constexpr float_t __get__maxVelocity() const;

 float_t __declspec(property(get=__get__elementWidth, put=__set__elementWidth))  _elementWidth;

constexpr void __set__elementWidth(float_t value) ;

constexpr float_t __get__elementWidth() const;

 float_t __declspec(property(get=__get__minElementLength, put=__set__minElementLength))  _minElementLength;

constexpr void __set__minElementLength(float_t value) ;

constexpr float_t __get__minElementLength() const;

 float_t __declspec(property(get=__get__maxElementLength, put=__set__maxElementLength))  _maxElementLength;

constexpr void __set__maxElementLength(float_t value) ;

constexpr float_t __get__maxElementLength() const;

 UnityEngine::Color __declspec(property(get=__get__color_k__BackingField, put=__set__color_k__BackingField))  _color_k__BackingField;

constexpr void __set__color_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color_k__BackingField() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BlocksBlade__Element> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BlocksBlade__Element> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__BlocksBlade__Element> __get__elements() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__positions, put=__set__positions))  _positions;

constexpr void __set__positions(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__positions() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__sizes, put=__set__sizes))  _sizes;

constexpr void __set__sizes(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__sizes() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get__colors() const;

 ::ArrayW<UnityEngine::Matrix4x4> __declspec(property(get=__get__matrices, put=__set__matrices))  _matrices;

constexpr void __set__matrices(::ArrayW<UnityEngine::Matrix4x4> value) ;

constexpr ::ArrayW<UnityEngine::Matrix4x4> __get__matrices() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

constexpr void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() const;

static int32_t __declspec(property(get=__get__positionPropertyID, put=__set__positionPropertyID))  _positionPropertyID;

static void __set__positionPropertyID(int32_t value) ;

static int32_t __get__positionPropertyID() ;

static int32_t __declspec(property(get=__get__sizePropertyID, put=__set__sizePropertyID))  _sizePropertyID;

static void __set__sizePropertyID(int32_t value) ;

static int32_t __get__sizePropertyID() ;

static int32_t __declspec(property(get=__get__colorPropertyID, put=__set__colorPropertyID))  _colorPropertyID;

static void __set__colorPropertyID(int32_t value) ;

static int32_t __get__colorPropertyID() ;

static int32_t __declspec(property(get=__get__zClipPropertyID, put=__set__zClipPropertyID))  _zClipPropertyID;

static void __set__zClipPropertyID(int32_t value) ;

static int32_t __get__zClipPropertyID() ;

 int32_t __declspec(property(get=__get__layer, put=__set__layer))  _layer;

constexpr void __set__layer(int32_t value) ;

constexpr int32_t __get__layer() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method get_color addr 0x2109aac size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2109ab8 size 0xc virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method Start addr 0x2109ac4 size 0x238 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2109e68 size 0x458 virtual false final false
 void Update() ;

/// @brief Method SetUpElement addr 0x2109d04 size 0x164 virtual false final false
 void SetUpElement(GlobalNamespace::GlobalNamespace__BlocksBlade__Element element, float_t velocity, UnityEngine::Color color) ;

/// @brief Method RandomPointOnCircle addr 0x210a2c0 size 0x4c virtual false final false
 UnityEngine::Vector2 RandomPointOnCircle(float_t radius) ;

static GlobalNamespace::BlocksBlade New_ctor() ;

/// @brief Method .ctor addr 0x210a30c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BlocksBlade);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlocksBlade, "", "BlocksBlade");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BlocksBlade__Element);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BlocksBlade__Element, "", "BlocksBlade/Element");
