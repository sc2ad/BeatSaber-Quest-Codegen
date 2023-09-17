#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LineLight;
}
// Type: ::LineLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14721))
// CS Name: LineLight
class CORDL_TYPE LineLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LineLight() = default;

// Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: " const&", def_value: None }]
constexpr LineLight(LineLight const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LineLight", modifiers: "&&", def_value: None }]
constexpr LineLight(LineLight&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LineLight(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LineLight& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LineLight& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LineLight& operator=(LineLight&& o) noexcept = default;
  constexpr LineLight& operator=(LineLight const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__p0, put=__set__p0))  _p0;

constexpr void __set__p0(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__p0() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__p1, put=__set__p1))  _p1;

constexpr void __set__p1(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__p1() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;

static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight> __declspec(property(get=__get__lineLights, put=__set__lineLights))  _lineLights;

static void __set__lineLights(::System::Collections::Generic::List_1<::GlobalNamespace::LineLight> value) ;

static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight> __get__lineLights() ;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_p0))  p0;

 ::UnityEngine::Vector3 __declspec(property(get=get_p1))  p1;

 ::UnityEngine::Color __declspec(property(get=get_color))  color;

static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight> __declspec(property(get=get_lineLights))  lineLights;


// Methods

/// @brief Method get_p0 addr 0x1fa17dc size 0xc virtual false final false
 ::UnityEngine::Vector3 get_p0() ;

/// @brief Method get_p1 addr 0x1fa17e8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_p1() ;

/// @brief Method get_color addr 0x1fa17f4 size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method get_lineLights addr 0x1fa1800 size 0x58 virtual false final false
static ::System::Collections::Generic::List_1<::GlobalNamespace::LineLight> get_lineLights() ;

/// @brief Method OnEnable addr 0x1fa1858 size 0xd0 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fa1928 size 0x80 virtual false final false
 void OnDisable() ;

/// @brief Method OnDrawGizmos addr 0x1fa19a8 size 0x88 virtual false final false
 void OnDrawGizmos() ;

// Ctor Parameters []
explicit LineLight() ;

/// @brief Method .ctor addr 0x1fa1a30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LineLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineLight, "", "LineLight");
