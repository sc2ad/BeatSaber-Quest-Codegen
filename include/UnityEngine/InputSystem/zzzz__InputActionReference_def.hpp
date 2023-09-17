#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionReference;
}
// Type: UnityEngine.InputSystem::InputActionReference
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6248))
// CS Name: UnityEngine.InputSystem.InputActionReference
class CORDL_TYPE InputActionReference : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~InputActionReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: " const&", def_value: None }]
constexpr InputActionReference(InputActionReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputActionReference", modifiers: "&&", def_value: None }]
constexpr InputActionReference(InputActionReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputActionReference(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr InputActionReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputActionReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputActionReference& operator=(InputActionReference&& o) noexcept = default;
  constexpr InputActionReference& operator=(InputActionReference const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get_m_Asset, put=__set_m_Asset))  m_Asset;

constexpr void __set_m_Asset(::UnityEngine::InputSystem::InputActionAsset value) ;

constexpr ::UnityEngine::InputSystem::InputActionAsset __get_m_Asset() const;

 ::StringW __declspec(property(get=__get_m_ActionId, put=__set_m_ActionId))  m_ActionId;

constexpr void __set_m_ActionId(::StringW value) ;

constexpr ::StringW __get_m_ActionId() const;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(::UnityEngine::InputSystem::InputAction value) ;

constexpr ::UnityEngine::InputSystem::InputAction __get_m_Action() const;


// Properties

 ::UnityEngine::InputSystem::InputActionAsset __declspec(property(get=get_asset))  asset;

 ::UnityEngine::InputSystem::InputAction __declspec(property(get=get_action))  action;


// Methods

/// @brief Method get_asset addr 0x28b54c0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputActionAsset get_asset() ;

/// @brief Method get_action addr 0x28b50e8 size 0xac virtual false final false
 ::UnityEngine::InputSystem::InputAction get_action() ;

/// @brief Method Set addr 0x28b54c8 size 0x108 virtual false final false
 void Set(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method Set addr 0x28b5744 size 0x224 virtual false final false
 void Set(::UnityEngine::InputSystem::InputActionAsset asset, ::StringW mapName, ::StringW actionName) ;

/// @brief Method SetInternal addr 0x28b55d0 size 0x174 virtual false final false
 void SetInternal(::UnityEngine::InputSystem::InputActionAsset asset, ::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method ToString addr 0x28b5a28 size 0x320 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetDisplayName addr 0x28b5968 size 0xc0 virtual false final false
static ::StringW GetDisplayName(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method ToDisplayName addr 0x28b5d48 size 0x3c virtual false final false
 ::StringW ToDisplayName() ;

/// @brief Method op_Implicit addr 0x28b5d84 size 0xc virtual false final false
static ::UnityEngine::InputSystem::InputAction op_Implicit___UnityEngine__InputSystem__InputAction(::UnityEngine::InputSystem::InputActionReference reference) ;

/// @brief Method Create addr 0x28b5d90 size 0x6c virtual false final false
static ::UnityEngine::InputSystem::InputActionReference Create(::UnityEngine::InputSystem::InputAction action) ;

/// @brief Method ToInputAction addr 0x28b5dfc size 0x4 virtual false final false
 ::UnityEngine::InputSystem::InputAction ToInputAction() ;

// Ctor Parameters []
explicit InputActionReference() ;

/// @brief Method .ctor addr 0x28b5e00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionReference, "UnityEngine.InputSystem", "InputActionReference");
