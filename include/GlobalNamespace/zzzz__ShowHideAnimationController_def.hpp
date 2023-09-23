#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9;
}
namespace GlobalNamespace {
class ShowHideAnimationController;
}
// Type: ::<DeactivateSelfAfterDelayCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13829))
// CS Name: ShowHideAnimationController::<DeactivateSelfAfterDelayCoroutine>d__9
class CORDL_TYPE GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9& operator=(GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9&& o) noexcept = default;
  constexpr GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9& operator=(GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::ShowHideAnimationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ShowHideAnimationController value) ;

constexpr GlobalNamespace::ShowHideAnimationController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f7aec4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f7aefc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f7af00 size 0xc0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f7afc0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f7afc8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f7b008 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ShowHideAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13830))
// CS Name: ShowHideAnimationController
class CORDL_TYPE ShowHideAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DeactivateSelfAfterDelayCoroutine_d__9 = GlobalNamespace::GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ShowHideAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShowHideAnimationController", modifiers: " const&", def_value: None }]
constexpr ShowHideAnimationController(ShowHideAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShowHideAnimationController", modifiers: "&&", def_value: None }]
constexpr ShowHideAnimationController(ShowHideAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShowHideAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShowHideAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShowHideAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShowHideAnimationController& operator=(ShowHideAnimationController&& o) noexcept = default;
  constexpr ShowHideAnimationController& operator=(ShowHideAnimationController const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 bool __declspec(property(get=__get__deactivateSelfAfterDelay, put=__set__deactivateSelfAfterDelay))  _deactivateSelfAfterDelay;

constexpr void __set__deactivateSelfAfterDelay(bool value) ;

constexpr bool __get__deactivateSelfAfterDelay() const;

 float_t __declspec(property(get=__get__deactivationDelay, put=__set__deactivationDelay))  _deactivationDelay;

constexpr void __set__deactivationDelay(float_t value) ;

constexpr float_t __get__deactivationDelay() const;

 bool __declspec(property(get=__get__show, put=__set__show))  _show;

constexpr void __set__show(bool value) ;

constexpr bool __get__show() const;

 int32_t __declspec(property(get=__get__showAnimatorParam, put=__set__showAnimatorParam))  _showAnimatorParam;

constexpr void __set__showAnimatorParam(int32_t value) ;

constexpr int32_t __get__showAnimatorParam() const;


// Properties

 bool __declspec(property(get=get_Show, put=set_Show))  Show;


// Methods

/// @brief Method set_Show addr 0x1f7ac70 size 0x160 virtual false final false
 void set_Show(bool value) ;

/// @brief Method get_Show addr 0x1f7add0 size 0x8 virtual false final false
 bool get_Show() ;

/// @brief Method Awake addr 0x1f7add8 size 0x74 virtual false final false
 void Awake() ;

/// @brief Method DeactivateSelfAfterDelayCoroutine addr 0x1f7ae4c size 0x78 virtual false final false
 System::Collections::IEnumerator DeactivateSelfAfterDelayCoroutine(float_t delay) ;

// Ctor Parameters []
explicit ShowHideAnimationController() ;

/// @brief Method .ctor addr 0x1f7aeec size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ShowHideAnimationController___DeactivateSelfAfterDelayCoroutine_d__9, "", "ShowHideAnimationController/<DeactivateSelfAfterDelayCoroutine>d__9");
NEED_NO_BOX(GlobalNamespace::ShowHideAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowHideAnimationController, "", "ShowHideAnimationController");
