#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace HMUI {
class TextPageScrollView;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__PrivacyPolicyViewController__ButtonType;
}
namespace GlobalNamespace {
class PrivacyPolicyViewController;
}
// Type: ::ButtonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5829))
// CS Name: PrivacyPolicyViewController::ButtonType
struct CORDL_TYPE ____GlobalNamespace__PrivacyPolicyViewController__ButtonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PrivacyPolicyViewController__ButtonType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__PrivacyPolicyViewController__ButtonType(____GlobalNamespace__PrivacyPolicyViewController__ButtonType const&) = default;
                    constexpr ____GlobalNamespace__PrivacyPolicyViewController__ButtonType(____GlobalNamespace__PrivacyPolicyViewController__ButtonType&&) = default;
                    constexpr ____GlobalNamespace__PrivacyPolicyViewController__ButtonType& operator=(____GlobalNamespace__PrivacyPolicyViewController__ButtonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PrivacyPolicyViewController__ButtonType& operator=(____GlobalNamespace__PrivacyPolicyViewController__ButtonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PrivacyPolicyViewController__ButtonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__PrivacyPolicyViewController__ButtonType_Unwrapped : int32_t {
__Ok = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__PrivacyPolicyViewController__ButtonType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__PrivacyPolicyViewController__ButtonType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ok offset 0
static ::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType const Ok;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PrivacyPolicyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5830))
// CS Name: PrivacyPolicyViewController
class CORDL_TYPE PrivacyPolicyViewController : public ::HMUI::ViewController {
public:
// Declarations
using ButtonType = ::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~PrivacyPolicyViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: " const&", def_value: None }]
constexpr PrivacyPolicyViewController(PrivacyPolicyViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyViewController", modifiers: "&&", def_value: None }]
constexpr PrivacyPolicyViewController(PrivacyPolicyViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivacyPolicyViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr PrivacyPolicyViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivacyPolicyViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivacyPolicyViewController& operator=(PrivacyPolicyViewController&& o) noexcept = default;
  constexpr PrivacyPolicyViewController& operator=(PrivacyPolicyViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__okButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__iAcceptButton, put=__set__iAcceptButton))  _iAcceptButton;

constexpr void __set__iAcceptButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__iAcceptButton() const;

 ::HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(::HMUI::TextPageScrollView value) ;

constexpr ::HMUI::TextPageScrollView __get__textPageScrollView() const;

 ::GlobalNamespace::LocalizedTextAsset __declspec(property(get=__get__privacyPolicyLocalizedTextAsset, put=__set__privacyPolicyLocalizedTextAsset))  _privacyPolicyLocalizedTextAsset;

constexpr void __set__privacyPolicyLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset value) ;

constexpr ::GlobalNamespace::LocalizedTextAsset __get__privacyPolicyLocalizedTextAsset() const;

 ::StringW __declspec(property(get=__get__defaultPrivacyPolicyHeaderLocalizationKey, put=__set__defaultPrivacyPolicyHeaderLocalizationKey))  _defaultPrivacyPolicyHeaderLocalizationKey;

constexpr void __set__defaultPrivacyPolicyHeaderLocalizationKey(::StringW value) ;

constexpr ::StringW __get__defaultPrivacyPolicyHeaderLocalizationKey() const;

 ::StringW __declspec(property(get=__get__updateNoticeLocalizationKey, put=__set__updateNoticeLocalizationKey))  _updateNoticeLocalizationKey;

constexpr void __set__updateNoticeLocalizationKey(::StringW value) ;

constexpr ::StringW __get__updateNoticeLocalizationKey() const;

 ::System::Action_1<::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType> value) ;

constexpr ::System::Action_1<::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType> __get_didFinishEvent() const;

 bool __declspec(property(get=__get__showUpdate, put=__set__showUpdate))  _showUpdate;

constexpr void __set__showUpdate(bool value) ;

constexpr bool __get__showUpdate() const;

 bool __declspec(property(get=__get__showIAcceptPrompt, put=__set__showIAcceptPrompt))  _showIAcceptPrompt;

constexpr void __set__showIAcceptPrompt(bool value) ;

constexpr bool __get__showIAcceptPrompt() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x217e63c size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType> value) ;

/// @brief Method remove_didFinishEvent addr 0x217e6ec size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType> value) ;

/// @brief Method DidActivate addr 0x217e79c size 0x1dc virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method Init addr 0x217e978 size 0x14 virtual false final false
 void Init(bool showUpdate, bool showIAcceptPrompt) ;

// Ctor Parameters []
explicit PrivacyPolicyViewController() ;

/// @brief Method .ctor addr 0x217e98c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__12_0 addr 0x217e994 size 0x20 virtual false final false
 void _DidActivate_b__12_0() ;

/// @brief Method <DidActivate>b__12_1 addr 0x217e9b4 size 0x20 virtual false final false
 void _DidActivate_b__12_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType, "", "PrivacyPolicyViewController/ButtonType");
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyViewController, "", "PrivacyPolicyViewController");
