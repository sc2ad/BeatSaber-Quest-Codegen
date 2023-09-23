#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UI {
class Shadow;
}
// Type: UnityEngine.UI::Shadow
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13082))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13087))
// CS Name: UnityEngine.UI.Shadow
class CORDL_TYPE Shadow : public UnityEngine::UI::BaseMeshEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Shadow() = default;

// Ctor Parameters [CppParam { name: "", ty: "Shadow", modifiers: " const&", def_value: None }]
constexpr Shadow(Shadow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Shadow", modifiers: "&&", def_value: None }]
constexpr Shadow(Shadow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Shadow(void* ptr) noexcept : UnityEngine::UI::BaseMeshEffect(ptr) {
}


  constexpr Shadow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Shadow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Shadow& operator=(Shadow&& o) noexcept = default;
  constexpr Shadow& operator=(Shadow const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_m_EffectColor, put=__set_m_EffectColor))  m_EffectColor;

constexpr void __set_m_EffectColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_EffectColor() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_EffectDistance, put=__set_m_EffectDistance))  m_EffectDistance;

constexpr void __set_m_EffectDistance(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_EffectDistance() const;

 bool __declspec(property(get=__get_m_UseGraphicAlpha, put=__set_m_UseGraphicAlpha))  m_UseGraphicAlpha;

constexpr void __set_m_UseGraphicAlpha(bool value) ;

constexpr bool __get_m_UseGraphicAlpha() const;

/// @brief Field kMaxEffectDistance offset 0
static constexpr float_t  kMaxEffectDistance{600};


// Properties

 UnityEngine::Color __declspec(property(get=get_effectColor, put=set_effectColor))  effectColor;

 UnityEngine::Vector2 __declspec(property(get=get_effectDistance, put=set_effectDistance))  effectDistance;

 bool __declspec(property(get=get_useGraphicAlpha, put=set_useGraphicAlpha))  useGraphicAlpha;


// Methods

// Ctor Parameters []
explicit Shadow() ;

/// @brief Method .ctor addr 0x2c18490 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method get_effectColor addr 0x2c184b8 size 0xc virtual false final false
 UnityEngine::Color get_effectColor() ;

/// @brief Method set_effectColor addr 0x2c184c4 size 0xd4 virtual false final false
 void set_effectColor(UnityEngine::Color value) ;

/// @brief Method get_effectDistance addr 0x2c18598 size 0x8 virtual false final false
 UnityEngine::Vector2 get_effectDistance() ;

/// @brief Method set_effectDistance addr 0x2c185a0 size 0x104 virtual false final false
 void set_effectDistance(UnityEngine::Vector2 value) ;

/// @brief Method get_useGraphicAlpha addr 0x2c186a4 size 0x8 virtual false final false
 bool get_useGraphicAlpha() ;

/// @brief Method set_useGraphicAlpha addr 0x2c186ac size 0xb8 virtual false final false
 void set_useGraphicAlpha(bool value) ;

/// @brief Method ApplyShadowZeroAlloc addr 0x2c18764 size 0x30c virtual false final false
 void ApplyShadowZeroAlloc(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, UnityEngine::Color32 color, int32_t start, int32_t end, float_t x, float_t y) ;

/// @brief Method ApplyShadow addr 0x2c18a70 size 0x8 virtual false final false
 void ApplyShadow(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, UnityEngine::Color32 color, int32_t start, int32_t end, float_t x, float_t y) ;

/// @brief Method ModifyMesh addr 0x2c18a78 size 0x3e0 virtual true final false
 void ModifyMesh(UnityEngine::UI::VertexHelper vh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Shadow);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Shadow, "UnityEngine.UI", "Shadow");
