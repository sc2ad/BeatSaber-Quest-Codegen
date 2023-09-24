#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GlobalNamespace__EulaViewController__InitData;
}
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
struct GlobalNamespace__EulaViewController__ButtonType;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22;
}
namespace HMUI {
class TextPageScrollView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Collections {
class IEnumerator;
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
struct GlobalNamespace__EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class GlobalNamespace__EulaViewController__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22;
}
// Type: ::ButtonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5724))
// CS Name: EulaViewController::ButtonType
struct CORDL_TYPE GlobalNamespace__EulaViewController__ButtonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__EulaViewController__ButtonType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__EulaViewController__ButtonType(GlobalNamespace__EulaViewController__ButtonType const&) = default;
                    constexpr GlobalNamespace__EulaViewController__ButtonType(GlobalNamespace__EulaViewController__ButtonType&&) = default;
                    constexpr GlobalNamespace__EulaViewController__ButtonType& operator=(GlobalNamespace__EulaViewController__ButtonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__EulaViewController__ButtonType& operator=(GlobalNamespace__EulaViewController__ButtonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EulaViewController__ButtonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__EulaViewController__ButtonType_Unwrapped : int32_t {
__Agree = 0,
__DoNotAgree = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__EulaViewController__ButtonType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__EulaViewController__ButtonType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Agree offset 0
static GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType const Agree;

/// @brief Field DoNotAgree offset 0
static GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType const DoNotAgree;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5725))
// CS Name: EulaViewController::InitData
class CORDL_TYPE GlobalNamespace__EulaViewController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__EulaViewController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EulaViewController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EulaViewController__InitData(GlobalNamespace__EulaViewController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EulaViewController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EulaViewController__InitData(GlobalNamespace__EulaViewController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EulaViewController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EulaViewController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EulaViewController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EulaViewController__InitData& operator=(GlobalNamespace__EulaViewController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__EulaViewController__InitData& operator=(GlobalNamespace__EulaViewController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_showDoNotAgreeButton, put=__set_showDoNotAgreeButton))  showDoNotAgreeButton;

constexpr void __set_showDoNotAgreeButton(bool value) ;

constexpr bool __get_showDoNotAgreeButton() const;


// Methods

static GlobalNamespace::GlobalNamespace__EulaViewController__InitData New_ctor(bool showDoNotAgreeButton) ;

/// @brief Method .ctor addr 0x215b030 size 0x28 virtual false final false
 void _ctor(bool showDoNotAgreeButton) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<EnableButtonsCoroutine>d__22
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5726))
// CS Name: EulaViewController::<EnableButtonsCoroutine>d__22
class CORDL_TYPE GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22(GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22(GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22& operator=(GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22&& o) noexcept = default;
  constexpr GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22& operator=(GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::EulaViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::EulaViewController value) ;

constexpr GlobalNamespace::EulaViewController __get___4__this() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 float_t __declspec(property(get=__get__startProgressBarWidth_5__2, put=__set__startProgressBarWidth_5__2))  _startProgressBarWidth_5__2;

constexpr void __set__startProgressBarWidth_5__2(float_t value) ;

constexpr float_t __get__startProgressBarWidth_5__2() const;

 float_t __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3))  _elapsedTime_5__3;

constexpr void __set__elapsedTime_5__3(float_t value) ;

constexpr float_t __get__elapsedTime_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x215af98 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x215b058 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x215b05c size 0x17c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x215b1d8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x215b1e0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x215b220 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EulaViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5727))
// CS Name: EulaViewController
class CORDL_TYPE EulaViewController : public HMUI::ViewController {
public:
// Declarations
using _EnableButtonsCoroutine_d__22 = GlobalNamespace::GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22;

using InitData = GlobalNamespace::GlobalNamespace__EulaViewController__InitData;

using ButtonType = GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~EulaViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: " const&", def_value: None }]
constexpr EulaViewController(EulaViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EulaViewController", modifiers: "&&", def_value: None }]
constexpr EulaViewController(EulaViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EulaViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr EulaViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EulaViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EulaViewController& operator=(EulaViewController&& o) noexcept = default;
  constexpr EulaViewController& operator=(EulaViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__agreeButton, put=__set__agreeButton))  _agreeButton;

constexpr void __set__agreeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__agreeButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__doNotAgreeButton, put=__set__doNotAgreeButton))  _doNotAgreeButton;

constexpr void __set__doNotAgreeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__doNotAgreeButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 UnityEngine::UI::Image __declspec(property(get=__get__disableButtonsProgress, put=__set__disableButtonsProgress))  _disableButtonsProgress;

constexpr void __set__disableButtonsProgress(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__disableButtonsProgress() const;

 float_t __declspec(property(get=__get__disabledButtonDelay, put=__set__disabledButtonDelay))  _disabledButtonDelay;

constexpr void __set__disabledButtonDelay(float_t value) ;

constexpr float_t __get__disabledButtonDelay() const;

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 GlobalNamespace::LocalizedTextAsset __declspec(property(get=__get__eulaLocalizedTextAsset, put=__set__eulaLocalizedTextAsset))  _eulaLocalizedTextAsset;

constexpr void __set__eulaLocalizedTextAsset(GlobalNamespace::LocalizedTextAsset value) ;

constexpr GlobalNamespace::LocalizedTextAsset __get__eulaLocalizedTextAsset() const;

 ::StringW __declspec(property(get=__get__defaultEulaHeaderLocalizationKey, put=__set__defaultEulaHeaderLocalizationKey))  _defaultEulaHeaderLocalizationKey;

constexpr void __set__defaultEulaHeaderLocalizationKey(::StringW value) ;

constexpr ::StringW __get__defaultEulaHeaderLocalizationKey() const;

 ::StringW __declspec(property(get=__get__updateNoticeLocalizationKey, put=__set__updateNoticeLocalizationKey))  _updateNoticeLocalizationKey;

constexpr void __set__updateNoticeLocalizationKey(::StringW value) ;

constexpr ::StringW __get__updateNoticeLocalizationKey() const;

 GlobalNamespace::GlobalNamespace__EulaViewController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__EulaViewController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__EulaViewController__InitData __get__initData() const;

 GlobalNamespace::ICoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(GlobalNamespace::ICoroutineStarter value) ;

constexpr GlobalNamespace::ICoroutineStarter __get__coroutineStarter() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType> __get_didFinishEvent() const;

 bool __declspec(property(get=__get__showUpdate, put=__set__showUpdate))  _showUpdate;

constexpr void __set__showUpdate(bool value) ;

constexpr bool __get__showUpdate() const;

 bool __declspec(property(get=__get__showOnlyContinueButton, put=__set__showOnlyContinueButton))  _showOnlyContinueButton;

constexpr void __set__showOnlyContinueButton(bool value) ;

constexpr bool __get__showOnlyContinueButton() const;

 UnityEngine::Coroutine __declspec(property(get=__get__buttonsCoroutine, put=__set__buttonsCoroutine))  _buttonsCoroutine;

constexpr void __set__buttonsCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__buttonsCoroutine() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215a9b8 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType> value) ;

/// @brief Method remove_didFinishEvent addr 0x215aa68 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType> value) ;

/// @brief Method DidActivate addr 0x215ab18 size 0x334 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x215aec4 size 0xc0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method Init addr 0x215af84 size 0x14 virtual false final false
 void Init(bool showUpdate, bool showOnlyContinueButton) ;

/// @brief Method EnableButtonsCoroutine addr 0x215ae4c size 0x78 virtual false final false
 System::Collections::IEnumerator EnableButtonsCoroutine(float_t delay) ;

static GlobalNamespace::EulaViewController New_ctor() ;

/// @brief Method .ctor addr 0x215afc0 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__19_0 addr 0x215afd0 size 0x20 virtual false final false
 void _DidActivate_b__19_0() ;

/// @brief Method <DidActivate>b__19_1 addr 0x215aff0 size 0x20 virtual false final false
 void _DidActivate_b__19_1() ;

/// @brief Method <DidActivate>b__19_2 addr 0x215b010 size 0x20 virtual false final false
 void _DidActivate_b__19_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EulaViewController__ButtonType, "", "EulaViewController/ButtonType");
NEED_NO_BOX(GlobalNamespace::EulaViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EulaViewController, "", "EulaViewController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EulaViewController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EulaViewController__InitData, "", "EulaViewController/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EulaViewController___EnableButtonsCoroutine_d__22, "", "EulaViewController/<EnableButtonsCoroutine>d__22");
