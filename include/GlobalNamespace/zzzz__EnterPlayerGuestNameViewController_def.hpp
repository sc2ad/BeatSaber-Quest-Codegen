#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class UIKeyboard;
}
namespace GlobalNamespace {
class StringSignal;
}
namespace HMUI {
class InputFieldView;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
// Forward declare root types
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1;
}
// Type: ::FinishDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5718))
// CS Name: EnterPlayerGuestNameViewController::FinishDelegate
class CORDL_TYPE ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate(____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate(____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x215a3a4 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x215a4d4 size 0x14 virtual true final false
 void Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController viewController, ::StringW playerName) ;

/// @brief Method BeginInvoke addr 0x215a4e8 size 0x28 virtual true final false
 ::System::IAsyncResult BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController viewController, ::StringW playerName, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x215a510 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5719))
// CS Name: EnterPlayerGuestNameViewController::<>c__DisplayClass10_0
class CORDL_TYPE ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::EnterPlayerGuestNameViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::EnterPlayerGuestNameViewController value) ;

constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController __get___4__this() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_guestPlayerNames, put=__set_guestPlayerNames))  guestPlayerNames;

constexpr void __set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_guestPlayerNames() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x215a204 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x215a51c size 0x10c virtual false final false
 void _DidActivate_b__0(int32_t idx, ::GlobalNamespace::GuestNameButtonsListItem item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass10_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5720))
// CS Name: EnterPlayerGuestNameViewController::<>c__DisplayClass10_1
class CORDL_TYPE ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1& operator=(____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_guestPlayerName, put=__set_guestPlayerName))  guestPlayerName;

constexpr void __set_guestPlayerName(::StringW value) ;

constexpr ::StringW __get_guestPlayerName() const;

 ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1() ;

/// @brief Method .ctor addr 0x215a628 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__1 addr 0x215a630 size 0x34 virtual false final false
 void _DidActivate_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnterPlayerGuestNameViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5721))
// CS Name: EnterPlayerGuestNameViewController
class CORDL_TYPE EnterPlayerGuestNameViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass10_1 = ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1;

using __c__DisplayClass10_0 = ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0;

using FinishDelegate = ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~EnterPlayerGuestNameViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: " const&", def_value: None }]
constexpr EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnterPlayerGuestNameViewController", modifiers: "&&", def_value: None }]
constexpr EnterPlayerGuestNameViewController(EnterPlayerGuestNameViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnterPlayerGuestNameViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr EnterPlayerGuestNameViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnterPlayerGuestNameViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnterPlayerGuestNameViewController& operator=(EnterPlayerGuestNameViewController&& o) noexcept = default;
  constexpr EnterPlayerGuestNameViewController& operator=(EnterPlayerGuestNameViewController const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxPlayerNameCompoundLength offset 0
static constexpr int32_t  kMaxPlayerNameCompoundLength{40};

/// @brief Field kMaxShowPlayer offset 0
static constexpr int32_t  kMaxShowPlayer{5};

 ::GlobalNamespace::StringSignal __declspec(property(get=__get__playerNameWasEnteredSignal, put=__set__playerNameWasEnteredSignal))  _playerNameWasEnteredSignal;

constexpr void __set__playerNameWasEnteredSignal(::GlobalNamespace::StringSignal value) ;

constexpr ::GlobalNamespace::StringSignal __get__playerNameWasEnteredSignal() const;

 ::HMUI::UIKeyboard __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard))  _uiKeyboard;

constexpr void __set__uiKeyboard(::HMUI::UIKeyboard value) ;

constexpr ::HMUI::UIKeyboard __get__uiKeyboard() const;

 ::HMUI::InputFieldView __declspec(property(get=__get__nameInputFieldView, put=__set__nameInputFieldView))  _nameInputFieldView;

constexpr void __set__nameInputFieldView(::HMUI::InputFieldView value) ;

constexpr ::HMUI::InputFieldView __get__nameInputFieldView() const;

 ::GlobalNamespace::GuestNameButtonsListItemsList __declspec(property(get=__get__guestNameButtonsListItemsList, put=__set__guestNameButtonsListItemsList))  _guestNameButtonsListItemsList;

constexpr void __set__guestNameButtonsListItemsList(::GlobalNamespace::GuestNameButtonsListItemsList value) ;

constexpr ::GlobalNamespace::GuestNameButtonsListItemsList __get__guestNameButtonsListItemsList() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate __declspec(property(get=__get__didFinishCallback, put=__set__didFinishCallback))  _didFinishCallback;

constexpr void __set__didFinishCallback(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate __get__didFinishCallback() const;


// Methods

/// @brief Method Init addr 0x2159fc8 size 0x8 virtual false final false
 void Init(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate didFinishCallback) ;

/// @brief Method DidActivate addr 0x2159fd0 size 0x234 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x215a20c size 0xb0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OkButtonPressed addr 0x215a2bc size 0xe0 virtual false final false
 void OkButtonPressed() ;

// Ctor Parameters []
explicit EnterPlayerGuestNameViewController() ;

/// @brief Method .ctor addr 0x215a39c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnterPlayerGuestNameViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnterPlayerGuestNameViewController, "", "EnterPlayerGuestNameViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController__FinishDelegate, "", "EnterPlayerGuestNameViewController/FinishDelegate");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_0, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnterPlayerGuestNameViewController____c__DisplayClass10_1, "", "EnterPlayerGuestNameViewController/<>c__DisplayClass10_1");
