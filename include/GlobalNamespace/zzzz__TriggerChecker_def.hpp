#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Collider;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerChecker;
}
// Type: ::TriggerChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13842))
// CS Name: TriggerChecker
class CORDL_TYPE TriggerChecker : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TriggerChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerChecker", modifiers: " const&", def_value: None }]
constexpr TriggerChecker(TriggerChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerChecker", modifiers: "&&", def_value: None }]
constexpr TriggerChecker(TriggerChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriggerChecker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TriggerChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriggerChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriggerChecker& operator=(TriggerChecker&& o) noexcept = default;
  constexpr TriggerChecker& operator=(TriggerChecker const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_TriggerCheckerOnEnterEvent, put=__set_TriggerCheckerOnEnterEvent))  TriggerCheckerOnEnterEvent;

constexpr void __set_TriggerCheckerOnEnterEvent(System::Action value) ;

constexpr System::Action __get_TriggerCheckerOnEnterEvent() const;

 System::Action __declspec(property(get=__get_TriggerCheckerOnExitEvent, put=__set_TriggerCheckerOnExitEvent))  TriggerCheckerOnExitEvent;

constexpr void __set_TriggerCheckerOnExitEvent(System::Action value) ;

constexpr System::Action __get_TriggerCheckerOnExitEvent() const;

 System::Action __declspec(property(get=__get_TriggerCheckerOnStayEvent, put=__set_TriggerCheckerOnStayEvent))  TriggerCheckerOnStayEvent;

constexpr void __set_TriggerCheckerOnStayEvent(System::Action value) ;

constexpr System::Action __get_TriggerCheckerOnStayEvent() const;


// Methods

/// @brief Method OnTriggerEnter addr 0x1f7c5f0 size 0x1c virtual false final false
 void OnTriggerEnter(UnityEngine::Collider other) ;

/// @brief Method OnTriggerExit addr 0x1f7c60c size 0x1c virtual false final false
 void OnTriggerExit(UnityEngine::Collider other) ;

/// @brief Method OnTriggerStay addr 0x1f7c628 size 0x1c virtual false final false
 void OnTriggerStay(UnityEngine::Collider other) ;

static GlobalNamespace::TriggerChecker New_ctor() ;

/// @brief Method .ctor addr 0x1f7c644 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TriggerChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TriggerChecker, "", "TriggerChecker");
