#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element;
}
// Type: ::Element
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14619))
// CS Name: BloomPrePassBackgroundColorsGradient::Element
class CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element(GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element(GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element& operator=(GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 float_t __declspec(property(get=__get_startT, put=__set_startT))  startT;

constexpr void __set_startT(float_t value) ;

constexpr float_t __get_startT() const;

 float_t __declspec(property(get=__get_exp, put=__set_exp))  exp;

constexpr void __set_exp(float_t value) ;

constexpr float_t __get_exp() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element() ;

/// @brief Method .ctor addr 0x1f925dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundColorsGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14629))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14620))
// CS Name: BloomPrePassBackgroundColorsGradient
class CORDL_TYPE BloomPrePassBackgroundColorsGradient : public GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
// Declarations
using Element = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BloomPrePassBackgroundColorsGradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradient", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradient(BloomPrePassBackgroundColorsGradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColorsGradient(void* ptr) noexcept : GlobalNamespace::BloomPrePassBackgroundTextureGradient(ptr) {
}


  constexpr BloomPrePassBackgroundColorsGradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradient& operator=(BloomPrePassBackgroundColorsGradient&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColorsGradient& operator=(BloomPrePassBackgroundColorsGradient const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> __get__elements() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> __declspec(property(get=get_elements))  elements;


// Methods

/// @brief Method get_elements addr 0x1f92134 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element> get_elements() ;

/// @brief Method UpdatePixels addr 0x1f9213c size 0x30c virtual true final false
 void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int32_t numberOfPixels) ;

/// @brief Method EvaluateColor addr 0x1f92448 size 0xe0 virtual false final false
 UnityEngine::Color EvaluateColor(float_t t) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundColorsGradient() ;

/// @brief Method .ctor addr 0x1f92528 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundColorsGradient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradient, "", "BloomPrePassBackgroundColorsGradient");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundColorsGradient__Element, "", "BloomPrePassBackgroundColorsGradient/Element");
