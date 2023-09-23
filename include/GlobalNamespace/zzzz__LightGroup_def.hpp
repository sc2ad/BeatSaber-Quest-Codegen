#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class LightGroupSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroup;
}
// Type: ::LightGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14669))
// CS Name: LightGroup
class CORDL_TYPE LightGroup : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LightGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: " const&", def_value: None }]
constexpr LightGroup(LightGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroup", modifiers: "&&", def_value: None }]
constexpr LightGroup(LightGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroup& operator=(LightGroup&& o) noexcept = default;
  constexpr LightGroup& operator=(LightGroup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightGroupSO __declspec(property(get=__get__lightGroupSO, put=__set__lightGroupSO))  _lightGroupSO;

constexpr void __set__lightGroupSO(GlobalNamespace::LightGroupSO value) ;

constexpr GlobalNamespace::LightGroupSO __get__lightGroupSO() const;

 System::Action_1<UnityEngine::GameObject> __declspec(property(get=__get_respawnEvent, put=__set_respawnEvent))  respawnEvent;

constexpr void __set_respawnEvent(System::Action_1<UnityEngine::GameObject> value) ;

constexpr System::Action_1<UnityEngine::GameObject> __get_respawnEvent() const;

 System::Action_1<UnityEngine::GameObject> __declspec(property(get=__get_didRefreshContentEvent, put=__set_didRefreshContentEvent))  didRefreshContentEvent;

constexpr void __set_didRefreshContentEvent(System::Action_1<UnityEngine::GameObject> value) ;

constexpr System::Action_1<UnityEngine::GameObject> __get_didRefreshContentEvent() const;


// Properties

 GlobalNamespace::LightGroupSO __declspec(property(get=get_lightGroupSO))  lightGroupSO;

 int32_t __declspec(property(get=get_numberOfElements))  numberOfElements;

 int32_t __declspec(property(get=get_startLightId))  startLightId;

 int32_t __declspec(property(get=get_groupId))  groupId;

 int32_t __declspec(property(get=get_sameIdElements))  sameIdElements;

 bool __declspec(property(get=get_ignoreLightGroupEffectManager))  ignoreLightGroupEffectManager;


// Methods

/// @brief Method get_lightGroupSO addr 0x1f9ba2c size 0x8 virtual false final false
 GlobalNamespace::LightGroupSO get_lightGroupSO() ;

/// @brief Method get_numberOfElements addr 0x1f9ba34 size 0x7c virtual false final false
 int32_t get_numberOfElements() ;

/// @brief Method get_startLightId addr 0x1f9bab0 size 0x7c virtual false final false
 int32_t get_startLightId() ;

/// @brief Method get_groupId addr 0x1f9bb2c size 0x7c virtual false final false
 int32_t get_groupId() ;

/// @brief Method get_sameIdElements addr 0x1f9bba8 size 0x7c virtual false final false
 int32_t get_sameIdElements() ;

/// @brief Method get_ignoreLightGroupEffectManager addr 0x1f9bc24 size 0x84 virtual false final false
 bool get_ignoreLightGroupEffectManager() ;

/// @brief Method add_respawnEvent addr 0x1f9bca8 size 0xb0 virtual false final false
 void add_respawnEvent(System::Action_1<UnityEngine::GameObject> value) ;

/// @brief Method remove_respawnEvent addr 0x1f9bd58 size 0xb0 virtual false final false
 void remove_respawnEvent(System::Action_1<UnityEngine::GameObject> value) ;

/// @brief Method add_didRefreshContentEvent addr 0x1f9be08 size 0xb0 virtual false final false
 void add_didRefreshContentEvent(System::Action_1<UnityEngine::GameObject> value) ;

/// @brief Method remove_didRefreshContentEvent addr 0x1f9beb8 size 0xb0 virtual false final false
 void remove_didRefreshContentEvent(System::Action_1<UnityEngine::GameObject> value) ;

// Ctor Parameters []
explicit LightGroup() ;

/// @brief Method .ctor addr 0x1f9bf68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroup, "", "LightGroup");
