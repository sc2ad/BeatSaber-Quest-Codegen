#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class VisibilityChecker;
}
// Type: ::VisibilityChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13851))
// CS Name: VisibilityChecker
class CORDL_TYPE VisibilityChecker : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VisibilityChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisibilityChecker", modifiers: " const&", def_value: None }]
constexpr VisibilityChecker(VisibilityChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisibilityChecker", modifiers: "&&", def_value: None }]
constexpr VisibilityChecker(VisibilityChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisibilityChecker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VisibilityChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisibilityChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisibilityChecker& operator=(VisibilityChecker&& o) noexcept = default;
  constexpr VisibilityChecker& operator=(VisibilityChecker const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_OnBecameVisibleEvent, put=__set_OnBecameVisibleEvent))  OnBecameVisibleEvent;

constexpr void __set_OnBecameVisibleEvent(System::Action value) ;

constexpr System::Action __get_OnBecameVisibleEvent() const;

 System::Action __declspec(property(get=__get_OnBecameInvisibleEvent, put=__set_OnBecameInvisibleEvent))  OnBecameInvisibleEvent;

constexpr void __set_OnBecameInvisibleEvent(System::Action value) ;

constexpr System::Action __get_OnBecameInvisibleEvent() const;


// Methods

/// @brief Method add_OnBecameVisibleEvent addr 0x1f7d83c size 0x9c virtual false final false
 void add_OnBecameVisibleEvent(System::Action value) ;

/// @brief Method remove_OnBecameVisibleEvent addr 0x1f7d8d8 size 0x9c virtual false final false
 void remove_OnBecameVisibleEvent(System::Action value) ;

/// @brief Method add_OnBecameInvisibleEvent addr 0x1f7d974 size 0x9c virtual false final false
 void add_OnBecameInvisibleEvent(System::Action value) ;

/// @brief Method remove_OnBecameInvisibleEvent addr 0x1f7da10 size 0x9c virtual false final false
 void remove_OnBecameInvisibleEvent(System::Action value) ;

/// @brief Method OnBecameVisible addr 0x1f7daac size 0x1c virtual false final false
 void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x1f7dac8 size 0x1c virtual false final false
 void OnBecameInvisible() ;

// Ctor Parameters []
explicit VisibilityChecker() ;

/// @brief Method .ctor addr 0x1f7dae4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VisibilityChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisibilityChecker, "", "VisibilityChecker");
