#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ShowTextOnGameEventController__EventTextBinding;
}
namespace GlobalNamespace {
class ShowTextOnGameEventController;
}
// Type: ::EventTextBinding
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5364))
// CS Name: ShowTextOnGameEventController::EventTextBinding
class CORDL_TYPE GlobalNamespace__ShowTextOnGameEventController__EventTextBinding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__ShowTextOnGameEventController__EventTextBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShowTextOnGameEventController__EventTextBinding", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding(GlobalNamespace__ShowTextOnGameEventController__EventTextBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShowTextOnGameEventController__EventTextBinding", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding(GlobalNamespace__ShowTextOnGameEventController__EventTextBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ShowTextOnGameEventController__EventTextBinding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding& operator=(GlobalNamespace__ShowTextOnGameEventController__EventTextBinding&& o) noexcept = default;
  constexpr GlobalNamespace__ShowTextOnGameEventController__EventTextBinding& operator=(GlobalNamespace__ShowTextOnGameEventController__EventTextBinding const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Signal __declspec(property(get=__get__signal, put=__set__signal))  _signal;

constexpr void __set__signal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__signal() const;

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;

 GlobalNamespace::TextFadeTransitions __declspec(property(get=__get__textFadeTransitions, put=__set__textFadeTransitions))  _textFadeTransitions;

constexpr void __set__textFadeTransitions(GlobalNamespace::TextFadeTransitions value) ;

constexpr GlobalNamespace::TextFadeTransitions __get__textFadeTransitions() const;


// Methods

/// @brief Method Init addr 0x2108d24 size 0x9c virtual false final false
 void Init(GlobalNamespace::TextFadeTransitions textFadeTransitions) ;

/// @brief Method Deinit addr 0x2108e1c size 0x8c virtual false final false
 void Deinit() ;

/// @brief Method HandleGameEvent addr 0x2108eb0 size 0x2c virtual false final false
 void HandleGameEvent() ;

// Ctor Parameters []
explicit GlobalNamespace__ShowTextOnGameEventController__EventTextBinding() ;

/// @brief Method .ctor addr 0x2108f50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ShowTextOnGameEventController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5365))
// CS Name: ShowTextOnGameEventController
class CORDL_TYPE ShowTextOnGameEventController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using EventTextBinding = GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ShowTextOnGameEventController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: " const&", def_value: None }]
constexpr ShowTextOnGameEventController(ShowTextOnGameEventController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShowTextOnGameEventController", modifiers: "&&", def_value: None }]
constexpr ShowTextOnGameEventController(ShowTextOnGameEventController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShowTextOnGameEventController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShowTextOnGameEventController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShowTextOnGameEventController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShowTextOnGameEventController& operator=(ShowTextOnGameEventController&& o) noexcept = default;
  constexpr ShowTextOnGameEventController& operator=(ShowTextOnGameEventController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TextFadeTransitions __declspec(property(get=__get__textFadeTransitions, put=__set__textFadeTransitions))  _textFadeTransitions;

constexpr void __set__textFadeTransitions(GlobalNamespace::TextFadeTransitions value) ;

constexpr GlobalNamespace::TextFadeTransitions __get__textFadeTransitions() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding> __declspec(property(get=__get__eventTextBindings, put=__set__eventTextBindings))  _eventTextBindings;

constexpr void __set__eventTextBindings(::ArrayW<GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding> __get__eventTextBindings() const;


// Methods

/// @brief Method Awake addr 0x2108cc0 size 0x64 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2108dc0 size 0x5c virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit ShowTextOnGameEventController() ;

/// @brief Method .ctor addr 0x2108ea8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ShowTextOnGameEventController__EventTextBinding, "", "ShowTextOnGameEventController/EventTextBinding");
NEED_NO_BOX(GlobalNamespace::ShowTextOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowTextOnGameEventController, "", "ShowTextOnGameEventController");
