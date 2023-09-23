#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class ButtonSpriteSwapToggle;
}
namespace HMUI {
class ImageView;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;
}
// Type: ::<>c__DisplayClass29_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5518))
// CS Name: GameServerPlayerTableCell::<>c__DisplayClass29_0
class CORDL_TYPE GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0(GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0(GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0& operator=(GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0&& o) noexcept = default;
  constexpr GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0& operator=(GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get_modifiersList, put=__set_modifiersList))  modifiersList;

constexpr void __set_modifiersList(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __get_modifiersList() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0() ;

/// @brief Method .ctor addr 0x21246e8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetData>b__0 addr 0x212499c size 0x78 virtual false final false
 void _SetData_b__0(int32_t id, GlobalNamespace::GameplayModifierInfoListItem listItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SetBeatmapUseButtonEnabledAsync>d__35
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5519))
// CS Name: GameServerPlayerTableCell::<SetBeatmapUseButtonEnabledAsync>d__35
struct CORDL_TYPE GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameServerPlayerTableCell", modifiers: "", def_value: None }, CppParam { name: "getLevelEntitlementTask", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::GameServerPlayerTableCell __4__this, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35 const&) = default;
                    constexpr GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35&&) = default;
                    constexpr GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35& operator=(GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35& operator=(GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::GameServerPlayerTableCell __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameServerPlayerTableCell value) ;

constexpr GlobalNamespace::GameServerPlayerTableCell __get___4__this() const;

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get_getLevelEntitlementTask, put=__set_getLevelEntitlementTask))  getLevelEntitlementTask;

constexpr void __set_getLevelEntitlementTask(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get_getLevelEntitlementTask() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2124a14 size 0x438 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2124e4c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameServerPlayerTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5520))
// CS Name: GameServerPlayerTableCell
class CORDL_TYPE GameServerPlayerTableCell : public GlobalNamespace::TableCellWithSeparator {
public:
// Declarations
using _SetBeatmapUseButtonEnabledAsync_d__35 = GlobalNamespace::GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35;

using __c__DisplayClass29_0 = GlobalNamespace::GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~GameServerPlayerTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: " const&", def_value: None }]
constexpr GameServerPlayerTableCell(GameServerPlayerTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableCell", modifiers: "&&", def_value: None }]
constexpr GameServerPlayerTableCell(GameServerPlayerTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerPlayerTableCell(void* ptr) noexcept : GlobalNamespace::TableCellWithSeparator(ptr) {
}


  constexpr GameServerPlayerTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerPlayerTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerPlayerTableCell& operator=(GameServerPlayerTableCell&& o) noexcept = default;
  constexpr GameServerPlayerTableCell& operator=(GameServerPlayerTableCell const& o) noexcept = default;
                


// Fields

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__playerNameText, put=__set__playerNameText))  _playerNameText;

constexpr void __set__playerNameText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__playerNameText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__localPlayerBackgroundImage, put=__set__localPlayerBackgroundImage))  _localPlayerBackgroundImage;

constexpr void __set__localPlayerBackgroundImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__localPlayerBackgroundImage() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__suggestedLevelText, put=__set__suggestedLevelText))  _suggestedLevelText;

constexpr void __set__suggestedLevelText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__suggestedLevelText() const;

 HMUI::ImageView __declspec(property(get=__get__suggestedCharacteristicIcon, put=__set__suggestedCharacteristicIcon))  _suggestedCharacteristicIcon;

constexpr void __set__suggestedCharacteristicIcon(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__suggestedCharacteristicIcon() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__suggestedDifficultyText, put=__set__suggestedDifficultyText))  _suggestedDifficultyText;

constexpr void __set__suggestedDifficultyText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__suggestedDifficultyText() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__emptySuggestedLevelText, put=__set__emptySuggestedLevelText))  _emptySuggestedLevelText;

constexpr void __set__emptySuggestedLevelText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__emptySuggestedLevelText() const;

 GlobalNamespace::GameplayModifierInfoListItemsList __declspec(property(get=__get__suggestedModifiersList, put=__set__suggestedModifiersList))  _suggestedModifiersList;

constexpr void __set__suggestedModifiersList(GlobalNamespace::GameplayModifierInfoListItemsList value) ;

constexpr GlobalNamespace::GameplayModifierInfoListItemsList __get__suggestedModifiersList() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__emptySuggestedModifiersText, put=__set__emptySuggestedModifiersText))  _emptySuggestedModifiersText;

constexpr void __set__emptySuggestedModifiersText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__emptySuggestedModifiersText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__mutePlayerButton, put=__set__mutePlayerButton))  _mutePlayerButton;

constexpr void __set__mutePlayerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__mutePlayerButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__kickPlayerButton, put=__set__kickPlayerButton))  _kickPlayerButton;

constexpr void __set__kickPlayerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__kickPlayerButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__useBeatmapButton, put=__set__useBeatmapButton))  _useBeatmapButton;

constexpr void __set__useBeatmapButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__useBeatmapButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__useModifiersButton, put=__set__useModifiersButton))  _useModifiersButton;

constexpr void __set__useModifiersButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__useModifiersButton() const;

 HMUI::HoverHint __declspec(property(get=__get__useBeatmapButtonHoverHint, put=__set__useBeatmapButtonHoverHint))  _useBeatmapButtonHoverHint;

constexpr void __set__useBeatmapButtonHoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__useBeatmapButtonHoverHint() const;

 HMUI::ButtonSpriteSwapToggle __declspec(property(get=__get__muteToggle, put=__set__muteToggle))  _muteToggle;

constexpr void __set__muteToggle(HMUI::ButtonSpriteSwapToggle value) ;

constexpr HMUI::ButtonSpriteSwapToggle __get__muteToggle() const;

 HMUI::ImageView __declspec(property(get=__get__statusImageView, put=__set__statusImageView))  _statusImageView;

constexpr void __set__statusImageView(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__statusImageView() const;

 UnityEngine::Sprite __declspec(property(get=__get__readyIcon, put=__set__readyIcon))  _readyIcon;

constexpr void __set__readyIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__readyIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__spectatingIcon, put=__set__spectatingIcon))  _spectatingIcon;

constexpr void __set__spectatingIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__spectatingIcon() const;

 UnityEngine::Sprite __declspec(property(get=__get__hostIcon, put=__set__hostIcon))  _hostIcon;

constexpr void __set__hostIcon(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__hostIcon() const;

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiers() const;

 System::Action_1<int32_t> __declspec(property(get=__get_kickPlayerEvent, put=__set_kickPlayerEvent))  kickPlayerEvent;

constexpr void __set_kickPlayerEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_kickPlayerEvent() const;

 System::Action_1<int32_t> __declspec(property(get=__get_useBeatmapEvent, put=__set_useBeatmapEvent))  useBeatmapEvent;

constexpr void __set_useBeatmapEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_useBeatmapEvent() const;

 System::Action_1<int32_t> __declspec(property(get=__get_useModifiersEvent, put=__set_useModifiersEvent))  useModifiersEvent;

constexpr void __set_useModifiersEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_useModifiersEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__getLevelEntitlementCancellationTokenSource, put=__set__getLevelEntitlementCancellationTokenSource))  _getLevelEntitlementCancellationTokenSource;

constexpr void __set__getLevelEntitlementCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__getLevelEntitlementCancellationTokenSource() const;


// Methods

/// @brief Method add_kickPlayerEvent addr 0x2123794 size 0xb0 virtual false final false
 void add_kickPlayerEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_kickPlayerEvent addr 0x2123844 size 0xb0 virtual false final false
 void remove_kickPlayerEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_useBeatmapEvent addr 0x21238f4 size 0xb4 virtual false final false
 void add_useBeatmapEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_useBeatmapEvent addr 0x21239a8 size 0xb4 virtual false final false
 void remove_useBeatmapEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_useModifiersEvent addr 0x2123a5c size 0xb4 virtual false final false
 void add_useModifiersEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_useModifiersEvent addr 0x2123b10 size 0xb4 virtual false final false
 void remove_useModifiersEvent(System::Action_1<int32_t> value) ;

/// @brief Method SetData addr 0x2123bc4 size 0xb24 virtual false final false
 void SetData(GlobalNamespace::IConnectedPlayer connectedPlayer, GlobalNamespace::ILobbyPlayerData playerData, bool hasKickPermissions, bool allowSelection, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask) ;

/// @brief Method Awake addr 0x2124790 size 0x144 virtual false final false
 void Awake() ;

/// @brief Method HandleKickPlayerButtonPressed addr 0x21248d4 size 0x20 virtual false final false
 void HandleKickPlayerButtonPressed() ;

/// @brief Method HandleUseBeatmapButtonPressed addr 0x21248f4 size 0x20 virtual false final false
 void HandleUseBeatmapButtonPressed() ;

/// @brief Method HandleUseModifiersButtonPressed addr 0x2124914 size 0x20 virtual false final false
 void HandleUseModifiersButtonPressed() ;

/// @brief Method SetBeatmapUseButtonEnabledAsync addr 0x21246f0 size 0xa0 virtual false final false
 void SetBeatmapUseButtonEnabledAsync(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask) ;

// Ctor Parameters []
explicit GameServerPlayerTableCell() ;

/// @brief Method .ctor addr 0x2124934 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableCell, "", "GameServerPlayerTableCell");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0, "", "GameServerPlayerTableCell/<>c__DisplayClass29_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35, "", "GameServerPlayerTableCell/<SetBeatmapUseButtonEnabledAsync>d__35");
