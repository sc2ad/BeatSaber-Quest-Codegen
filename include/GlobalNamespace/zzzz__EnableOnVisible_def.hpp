#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Behaviour;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableOnVisible;
}
// Type: ::EnableOnVisible
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13793))
// CS Name: EnableOnVisible
class CORDL_TYPE EnableOnVisible : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnableOnVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableOnVisible", modifiers: " const&", def_value: None }]
constexpr EnableOnVisible(EnableOnVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableOnVisible", modifiers: "&&", def_value: None }]
constexpr EnableOnVisible(EnableOnVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnableOnVisible(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnableOnVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnableOnVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnableOnVisible& operator=(EnableOnVisible&& o) noexcept = default;
  constexpr EnableOnVisible& operator=(EnableOnVisible const& o) noexcept = default;
                


// Fields

 System::Action_1<bool> __declspec(property(get=__get_VisibilityChangedEvent, put=__set_VisibilityChangedEvent))  VisibilityChangedEvent;

constexpr void __set_VisibilityChangedEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_VisibilityChangedEvent() const;

 ::ArrayW<UnityEngine::Behaviour> __declspec(property(get=__get__components, put=__set__components))  _components;

constexpr void __set__components(::ArrayW<UnityEngine::Behaviour> value) ;

constexpr ::ArrayW<UnityEngine::Behaviour> __get__components() const;


// Methods

/// @brief Method add_VisibilityChangedEvent addr 0x1f76c68 size 0xb0 virtual false final false
 void add_VisibilityChangedEvent(System::Action_1<bool> value) ;

/// @brief Method remove_VisibilityChangedEvent addr 0x1f76d18 size 0xb0 virtual false final false
 void remove_VisibilityChangedEvent(System::Action_1<bool> value) ;

/// @brief Method Awake addr 0x1f76dc8 size 0x64 virtual false final false
 void Awake() ;

/// @brief Method OnBecameVisible addr 0x1f76e2c size 0x88 virtual false final false
 void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x1f76eb4 size 0x88 virtual false final false
 void OnBecameInvisible() ;

static GlobalNamespace::EnableOnVisible New_ctor() ;

/// @brief Method .ctor addr 0x1f76f3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnableOnVisible);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableOnVisible, "", "EnableOnVisible");
