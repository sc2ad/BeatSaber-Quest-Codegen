#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace HMUI {
class Interactable;
}
// Type: HMUI::Interactable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13590))
// CS Name: HMUI.Interactable
class CORDL_TYPE Interactable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Interactable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: " const&", def_value: None }]
constexpr Interactable(Interactable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "&&", def_value: None }]
constexpr Interactable(Interactable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interactable(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Interactable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interactable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interactable& operator=(Interactable&& o) noexcept = default;
  constexpr Interactable& operator=(Interactable const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__interactable, put=__set__interactable))  _interactable;

constexpr void __set__interactable(bool value) ;

constexpr bool __get__interactable() const;

 ::System::Action_2<::HMUI::Interactable,bool> __declspec(property(get=__get_interactableChangeEvent, put=__set_interactableChangeEvent))  interactableChangeEvent;

constexpr void __set_interactableChangeEvent(::System::Action_2<::HMUI::Interactable,bool> value) ;

constexpr ::System::Action_2<::HMUI::Interactable,bool> __get_interactableChangeEvent() const;


// Properties

 bool __declspec(property(get=get_interactable, put=set_interactable))  interactable;


// Methods

/// @brief Method add_interactableChangeEvent addr 0x1faa864 size 0xb0 virtual false final false
 void add_interactableChangeEvent(::System::Action_2<::HMUI::Interactable,bool> value) ;

/// @brief Method remove_interactableChangeEvent addr 0x1faa914 size 0xb0 virtual false final false
 void remove_interactableChangeEvent(::System::Action_2<::HMUI::Interactable,bool> value) ;

/// @brief Method get_interactable addr 0x1faa9c4 size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x1faa9cc size 0x3c virtual false final false
 void set_interactable(bool value) ;

// Ctor Parameters []
explicit Interactable() ;

/// @brief Method .ctor addr 0x1fa50d0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Interactable, "HMUI", "Interactable");
