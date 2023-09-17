#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Coroutine;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class SafeAreaRectChecker;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15;
}
// Type: ::<DismissHealthAndSafety>d__15
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5739))
// CS Name: HealthWarningViewController::<DismissHealthAndSafety>d__15
class CORDL_TYPE ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15(____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15(____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15& operator=(____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15&& o) noexcept = default;
  constexpr ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15& operator=(____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::HealthWarningViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::HealthWarningViewController value) ;

constexpr ::GlobalNamespace::HealthWarningViewController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15(int32_t __1__state) ;

/// @brief Method .ctor addr 0x215f784 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x215f7d0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x215f7d4 size 0xc8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x215f89c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x215f8a4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x215f8e4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HealthWarningViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5740))
// CS Name: HealthWarningViewController
class CORDL_TYPE HealthWarningViewController : public ::HMUI::ViewController {
public:
// Declarations
using _DismissHealthAndSafety_d__15 = ::GlobalNamespace::____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~HealthWarningViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningViewController", modifiers: " const&", def_value: None }]
constexpr HealthWarningViewController(HealthWarningViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningViewController", modifiers: "&&", def_value: None }]
constexpr HealthWarningViewController(HealthWarningViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr HealthWarningViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningViewController& operator=(HealthWarningViewController&& o) noexcept = default;
  constexpr HealthWarningViewController& operator=(HealthWarningViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__continueButton() const;

 ::GlobalNamespace::SafeAreaRectChecker __declspec(property(get=__get__safeAreaRectChecker, put=__set__safeAreaRectChecker))  _safeAreaRectChecker;

constexpr void __set__safeAreaRectChecker(::GlobalNamespace::SafeAreaRectChecker value) ;

constexpr ::GlobalNamespace::SafeAreaRectChecker __get__safeAreaRectChecker() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__healthAndSafetyTextMesh, put=__set__healthAndSafetyTextMesh))  _healthAndSafetyTextMesh;

constexpr void __set__healthAndSafetyTextMesh(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__healthAndSafetyTextMesh() const;

 ::StringW __declspec(property(get=__get__healthAndSafetyLocalizationKey, put=__set__healthAndSafetyLocalizationKey))  _healthAndSafetyLocalizationKey;

constexpr void __set__healthAndSafetyLocalizationKey(::StringW value) ;

constexpr ::StringW __get__healthAndSafetyLocalizationKey() const;

 ::StringW __declspec(property(get=__get__healthAndSafetyPSLocalizationKey, put=__set__healthAndSafetyPSLocalizationKey))  _healthAndSafetyPSLocalizationKey;

constexpr void __set__healthAndSafetyPSLocalizationKey(::StringW value) ;

constexpr ::StringW __get__healthAndSafetyPSLocalizationKey() const;

 ::GlobalNamespace::ICoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(::GlobalNamespace::ICoroutineStarter value) ;

constexpr ::GlobalNamespace::ICoroutineStarter __get__coroutineStarter() const;

 ::System::Action __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action value) ;

constexpr ::System::Action __get_didFinishEvent() const;

 bool __declspec(property(get=__get__requiresInteraction, put=__set__requiresInteraction))  _requiresInteraction;

constexpr void __set__requiresInteraction(bool value) ;

constexpr bool __get__requiresInteraction() const;

 ::UnityEngine::Coroutine __declspec(property(get=__get__dismissCoroutine, put=__set__dismissCoroutine))  _dismissCoroutine;

constexpr void __set__dismissCoroutine(::UnityEngine::Coroutine value) ;

constexpr ::UnityEngine::Coroutine __get__dismissCoroutine() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215f370 size 0x9c virtual false final false
 void add_didFinishEvent(::System::Action value) ;

/// @brief Method remove_didFinishEvent addr 0x215f40c size 0x9c virtual false final false
 void remove_didFinishEvent(::System::Action value) ;

/// @brief Method DidActivate addr 0x215f4a8 size 0x1a4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x215f6b4 size 0xc4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method Init addr 0x215f778 size 0xc virtual false final false
 void Init(bool requiresInteraction) ;

/// @brief Method DismissHealthAndSafety addr 0x215f64c size 0x68 virtual false final false
 ::System::Collections::IEnumerator DismissHealthAndSafety() ;

// Ctor Parameters []
explicit HealthWarningViewController() ;

/// @brief Method .ctor addr 0x215f7ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__12_0 addr 0x215f7b4 size 0x1c virtual false final false
 void _DidActivate_b__12_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningViewController, "", "HealthWarningViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__HealthWarningViewController___DismissHealthAndSafety_d__15, "", "HealthWarningViewController/<DismissHealthAndSafety>d__15");
