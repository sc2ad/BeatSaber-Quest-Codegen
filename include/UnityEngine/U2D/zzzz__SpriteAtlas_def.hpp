#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Type: UnityEngine.U2D::SpriteAtlas
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10232))
// CS Name: UnityEngine.U2D.SpriteAtlas
class CORDL_TYPE SpriteAtlas : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SpriteAtlas() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: " const&", def_value: None }]
constexpr SpriteAtlas(SpriteAtlas const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "&&", def_value: None }]
constexpr SpriteAtlas(SpriteAtlas&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteAtlas(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr SpriteAtlas& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteAtlas& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteAtlas& operator=(SpriteAtlas&& o) noexcept = default;
  constexpr SpriteAtlas& operator=(SpriteAtlas const& o) noexcept = default;
                


// Methods

/// @brief Method CanBindTo addr 0x2b6e98c size 0x44 virtual false final false
 bool CanBindTo(::UnityEngine::Sprite sprite) ;

/// @brief Method GetSprite addr 0x2b6e9d0 size 0x44 virtual false final false
 ::UnityEngine::Sprite GetSprite(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::U2D
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlas, "UnityEngine.U2D", "SpriteAtlas");
