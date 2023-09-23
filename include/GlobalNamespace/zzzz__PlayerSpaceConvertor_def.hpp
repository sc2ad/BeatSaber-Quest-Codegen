#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpaceConvertor;
}
// Type: ::PlayerSpaceConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5366))
// CS Name: PlayerSpaceConvertor
class CORDL_TYPE PlayerSpaceConvertor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayerSpaceConvertor() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: " const&", def_value: None }]
constexpr PlayerSpaceConvertor(PlayerSpaceConvertor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSpaceConvertor", modifiers: "&&", def_value: None }]
constexpr PlayerSpaceConvertor(PlayerSpaceConvertor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSpaceConvertor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerSpaceConvertor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSpaceConvertor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSpaceConvertor& operator=(PlayerSpaceConvertor&& o) noexcept = default;
  constexpr PlayerSpaceConvertor& operator=(PlayerSpaceConvertor const& o) noexcept = default;
                


// Fields

 UnityEngine::Quaternion __declspec(property(get=__get__worldToPlayerSpaceRotation, put=__set__worldToPlayerSpaceRotation))  _worldToPlayerSpaceRotation;

constexpr void __set__worldToPlayerSpaceRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__worldToPlayerSpaceRotation() const;


// Properties

 UnityEngine::Quaternion __declspec(property(get=get_worldToPlayerSpaceRotation))  worldToPlayerSpaceRotation;


// Methods

/// @brief Method get_worldToPlayerSpaceRotation addr 0x2108f58 size 0xc virtual false final false
 UnityEngine::Quaternion get_worldToPlayerSpaceRotation() ;

/// @brief Method Start addr 0x2108f64 size 0x38 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit PlayerSpaceConvertor() ;

/// @brief Method .ctor addr 0x2108f9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerSpaceConvertor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpaceConvertor, "", "PlayerSpaceConvertor");
