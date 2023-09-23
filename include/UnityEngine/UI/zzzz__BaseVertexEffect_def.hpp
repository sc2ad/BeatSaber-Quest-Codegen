#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
struct UIVertex;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class BaseVertexEffect;
}
// Type: UnityEngine.UI::BaseVertexEffect
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13081))
// CS Name: UnityEngine.UI.BaseVertexEffect
class CORDL_TYPE BaseVertexEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BaseVertexEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: " const&", def_value: None }]
constexpr BaseVertexEffect(BaseVertexEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseVertexEffect", modifiers: "&&", def_value: None }]
constexpr BaseVertexEffect(BaseVertexEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseVertexEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseVertexEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseVertexEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseVertexEffect& operator=(BaseVertexEffect&& o) noexcept = default;
  constexpr BaseVertexEffect& operator=(BaseVertexEffect const& o) noexcept = default;
                


// Methods

/// @brief Method ModifyVertices addr 0x0 size 0xffffffffffffffff virtual true final false
 void ModifyVertices(System::Collections::Generic::List_1<UnityEngine::UIVertex> vertices) ;

// Ctor Parameters []
explicit BaseVertexEffect() ;

/// @brief Method .ctor addr 0x2c17358 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::BaseVertexEffect);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::BaseVertexEffect, "UnityEngine.UI", "BaseVertexEffect");
