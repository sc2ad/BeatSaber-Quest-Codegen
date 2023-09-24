#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class RectTransform;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class GlobalNamespace__CreditsController___ScrollCoroutine_d__13;
}
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsController;
}
namespace GlobalNamespace {
class GlobalNamespace__CreditsController___ScrollCoroutine_d__13;
}
// Type: ::<ScrollCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5573))
// CS Name: CreditsController::<ScrollCoroutine>d__13
class CORDL_TYPE GlobalNamespace__CreditsController___ScrollCoroutine_d__13 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__CreditsController___ScrollCoroutine_d__13() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CreditsController___ScrollCoroutine_d__13", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13(GlobalNamespace__CreditsController___ScrollCoroutine_d__13 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CreditsController___ScrollCoroutine_d__13", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13(GlobalNamespace__CreditsController___ScrollCoroutine_d__13&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CreditsController___ScrollCoroutine_d__13(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13& operator=(GlobalNamespace__CreditsController___ScrollCoroutine_d__13&& o) noexcept = default;
  constexpr GlobalNamespace__CreditsController___ScrollCoroutine_d__13& operator=(GlobalNamespace__CreditsController___ScrollCoroutine_d__13 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::CreditsController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::CreditsController value) ;

constexpr GlobalNamespace::CreditsController __get___4__this() const;

 float_t __declspec(property(get=__get__contentHeight_5__2, put=__set__contentHeight_5__2))  _contentHeight_5__2;

constexpr void __set__contentHeight_5__2(float_t value) ;

constexpr float_t __get__contentHeight_5__2() const;

 float_t __declspec(property(get=__get__contentWrapperHeight_5__3, put=__set__contentWrapperHeight_5__3))  _contentWrapperHeight_5__3;

constexpr void __set__contentWrapperHeight_5__3(float_t value) ;

constexpr float_t __get__contentWrapperHeight_5__3() const;

 float_t __declspec(property(get=__get__posY_5__4, put=__set__posY_5__4))  _posY_5__4;

constexpr void __set__posY_5__4(float_t value) ;

constexpr float_t __get__posY_5__4() const;

 float_t __declspec(property(get=__get__scrollingSpeed_5__5, put=__set__scrollingSpeed_5__5))  _scrollingSpeed_5__5;

constexpr void __set__scrollingSpeed_5__5(float_t value) ;

constexpr float_t __get__scrollingSpeed_5__5() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__CreditsController___ScrollCoroutine_d__13 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x212f2bc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212f320 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212f324 size 0x26c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212f590 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212f598 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212f5d8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CreditsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5574))
// CS Name: CreditsController
class CORDL_TYPE CreditsController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _ScrollCoroutine_d__13 = GlobalNamespace::GlobalNamespace__CreditsController___ScrollCoroutine_d__13;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~CreditsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: " const&", def_value: None }]
constexpr CreditsController(CreditsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsController", modifiers: "&&", def_value: None }]
constexpr CreditsController(CreditsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreditsController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CreditsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreditsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreditsController& operator=(CreditsController&& o) noexcept = default;
  constexpr CreditsController& operator=(CreditsController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CreditsScenesTransitionSetupDataSO __declspec(property(get=__get__creditsSceneSetupDataSO, put=__set__creditsSceneSetupDataSO))  _creditsSceneSetupDataSO;

constexpr void __set__creditsSceneSetupDataSO(GlobalNamespace::CreditsScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::CreditsScenesTransitionSetupDataSO __get__creditsSceneSetupDataSO() const;

 GlobalNamespace::AudioPlayerBase __declspec(property(get=__get__audioPlayer, put=__set__audioPlayer))  _audioPlayer;

constexpr void __set__audioPlayer(GlobalNamespace::AudioPlayerBase value) ;

constexpr GlobalNamespace::AudioPlayerBase __get__audioPlayer() const;

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentRectTransform, put=__set__contentRectTransform))  _contentRectTransform;

constexpr void __set__contentRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentRectTransform() const;

 float_t __declspec(property(get=__get__overflowHeight, put=__set__overflowHeight))  _overflowHeight;

constexpr void __set__overflowHeight(float_t value) ;

constexpr float_t __get__overflowHeight() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentWrapper, put=__set__contentWrapper))  _contentWrapper;

constexpr void __set__contentWrapper(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentWrapper() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 bool __declspec(property(get=__get__didFinish, put=__set__didFinish))  _didFinish;

constexpr void __set__didFinish(bool value) ;

constexpr bool __get__didFinish() const;

 bool __declspec(property(get=__get__isPaused, put=__set__isPaused))  _isPaused;

constexpr void __set__isPaused(bool value) ;

constexpr bool __get__isPaused() const;


// Methods

/// @brief Method Start addr 0x212ec10 size 0x29c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x212ef44 size 0x1b4 virtual false final false
 void OnDestroy() ;

/// @brief Method Finish addr 0x212f0f8 size 0x1c4 virtual false final false
 void Finish() ;

/// @brief Method ScrollCoroutine addr 0x212eedc size 0x68 virtual false final false
 System::Collections::IEnumerator ScrollCoroutine() ;

/// @brief Method HandleInputFocusCaptured addr 0x212eeac size 0x30 virtual false final false
 void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x212f2e4 size 0x2c virtual false final false
 void HandleInputFocusReleased() ;

static GlobalNamespace::CreditsController New_ctor() ;

/// @brief Method .ctor addr 0x212f310 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CreditsController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreditsController, "", "CreditsController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__CreditsController___ScrollCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CreditsController___ScrollCoroutine_d__13, "", "CreditsController/<ScrollCoroutine>d__13");
