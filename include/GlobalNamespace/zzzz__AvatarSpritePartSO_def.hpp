#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarSpritePartSO;
}
// Type: ::AvatarSpritePartSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4773), inst: 752 }), TypeDefinitionIndex(TypeDefinitionIndex(10227)), TypeDefinitionIndex(TypeDefinitionIndex(4773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4775))
// CS Name: AvatarSpritePartSO
class CORDL_TYPE AvatarSpritePartSO : public GlobalNamespace::AvatarPartSO_1<UnityEngine::Sprite> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarSpritePartSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: " const&", def_value: None }]
constexpr AvatarSpritePartSO(AvatarSpritePartSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarSpritePartSO", modifiers: "&&", def_value: None }]
constexpr AvatarSpritePartSO(AvatarSpritePartSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarSpritePartSO(void* ptr) noexcept : GlobalNamespace::AvatarPartSO_1<UnityEngine::Sprite>(ptr) {
}


  constexpr AvatarSpritePartSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarSpritePartSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarSpritePartSO& operator=(AvatarSpritePartSO&& o) noexcept = default;
  constexpr AvatarSpritePartSO& operator=(AvatarSpritePartSO const& o) noexcept = default;
                


// Properties

 UnityEngine::Sprite __declspec(property(get=get_sprite))  sprite;


// Methods

/// @brief Method get_sprite addr 0x2229974 size 0x3c virtual false final false
 UnityEngine::Sprite get_sprite() ;

static GlobalNamespace::AvatarSpritePartSO New_ctor() ;

/// @brief Method .ctor addr 0x22299b0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarSpritePartSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarSpritePartSO, "", "AvatarSpritePartSO");
