#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackColorAttribute;
}
// Type: UnityEngine.Timeline::TrackColorAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14075))
// CS Name: UnityEngine.Timeline.TrackColorAttribute
class CORDL_TYPE TrackColorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TrackColorAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: " const&", def_value: None }]
constexpr TrackColorAttribute(TrackColorAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: "&&", def_value: None }]
constexpr TrackColorAttribute(TrackColorAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackColorAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr TrackColorAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackColorAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackColorAttribute& operator=(TrackColorAttribute&& o) noexcept = default;
  constexpr TrackColorAttribute& operator=(TrackColorAttribute const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_Color() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x2ac90f4 size 0xc virtual false final false
 ::UnityEngine::Color get_color() ;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }]
explicit TrackColorAttribute(float_t r, float_t g, float_t b) ;

/// @brief Method .ctor addr 0x2ac9100 size 0x44 virtual false final false
 void _ctor(float_t r, float_t g, float_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::TrackColorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackColorAttribute, "UnityEngine.Timeline", "TrackColorAttribute");
