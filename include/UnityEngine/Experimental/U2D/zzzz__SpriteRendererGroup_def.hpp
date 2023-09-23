#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::Experimental::U2D {
class SpriteRendererGroup;
}
// Type: UnityEngine.Experimental.U2D::SpriteRendererGroup
namespace UnityEngine::Experimental::U2D {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10321))
// CS Name: UnityEngine.Experimental.U2D.SpriteRendererGroup
class CORDL_TYPE SpriteRendererGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SpriteRendererGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRendererGroup", modifiers: " const&", def_value: None }]
constexpr SpriteRendererGroup(SpriteRendererGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteRendererGroup", modifiers: "&&", def_value: None }]
constexpr SpriteRendererGroup(SpriteRendererGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteRendererGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SpriteRendererGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteRendererGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteRendererGroup& operator=(SpriteRendererGroup&& o) noexcept = default;
  constexpr SpriteRendererGroup& operator=(SpriteRendererGroup const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::U2D
NEED_NO_BOX(UnityEngine::Experimental::U2D::SpriteRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::U2D::SpriteRendererGroup, "UnityEngine.Experimental.U2D", "SpriteRendererGroup");
