#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::UI {
class IMeshModifier;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseMeshEffect;
}
// Type: UnityEngine.UI::BaseMeshEffect
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13082))
// CS Name: UnityEngine.UI.BaseMeshEffect
class CORDL_TYPE BaseMeshEffect : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::IMeshModifier
constexpr operator  UnityEngine::UI::IMeshModifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseMeshEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: " const&", def_value: None }]
constexpr BaseMeshEffect(BaseMeshEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMeshEffect", modifiers: "&&", def_value: None }]
constexpr BaseMeshEffect(BaseMeshEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseMeshEffect(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr BaseMeshEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseMeshEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseMeshEffect& operator=(BaseMeshEffect&& o) noexcept = default;
  constexpr BaseMeshEffect& operator=(BaseMeshEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Graphic __declspec(property(get=__get_m_Graphic, put=__set_m_Graphic))  m_Graphic;

constexpr void __set_m_Graphic(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_m_Graphic() const;


// Properties

 UnityEngine::UI::Graphic __declspec(property(get=get_graphic))  graphic;


// Methods

/// @brief Method get_graphic addr 0x2c17360 size 0x94 virtual false final false
 UnityEngine::UI::Graphic get_graphic() ;

/// @brief Method OnEnable addr 0x2c173f4 size 0xa8 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c1749c size 0x9c virtual true final false
 void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c17538 size 0x9c virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method ModifyMesh addr 0x2c175d4 size 0x1a8 virtual true final false
 void ModifyMesh(UnityEngine::Mesh mesh) ;

/// @brief Method ModifyMesh addr 0x0 size 0xffffffffffffffff virtual true final false
 void ModifyMesh(UnityEngine::UI::VertexHelper vh) ;

// Ctor Parameters []
explicit BaseMeshEffect() ;

/// @brief Method .ctor addr 0x2c1777c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::BaseMeshEffect);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::BaseMeshEffect, "UnityEngine.UI", "BaseMeshEffect");
