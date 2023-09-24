#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19;
}
// Type: ::<SetDataFromLevelAsync>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5524))
// CS Name: LevelListTableCell::<SetDataFromLevelAsync>d__19
struct CORDL_TYPE GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelListTableCell", modifiers: "", def_value: None }, CppParam { name: "level", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "isFavorite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelListTableCell __4__this, GlobalNamespace::IPreviewBeatmapLevel level, bool isFavorite, bool isPromoted, bool isUpdated, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19(GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19 const&) = default;
                    constexpr GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19(GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19&&) = default;
                    constexpr GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19& operator=(GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19& operator=(GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelListTableCell __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelListTableCell value) ;

constexpr GlobalNamespace::LevelListTableCell __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_level() const;

 bool __declspec(property(get=__get_isFavorite, put=__set_isFavorite))  isFavorite;

constexpr void __set_isFavorite(bool value) ;

constexpr bool __get_isFavorite() const;

 bool __declspec(property(get=__get_isPromoted, put=__set_isPromoted))  isPromoted;

constexpr void __set_isPromoted(bool value) ;

constexpr bool __get_isPromoted() const;

 bool __declspec(property(get=__get_isUpdated, put=__set_isUpdated))  isUpdated;

constexpr void __set_isUpdated(bool value) ;

constexpr bool __get_isUpdated() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21255ac size 0xa50 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2125ffc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5525))
// CS Name: LevelListTableCell::<RefreshAvailabilityAsync>d__24
struct CORDL_TYPE GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelListTableCell", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "contentModel", ty: "GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelListTableCell __4__this, ::StringW levelID, GlobalNamespace::AdditionalContentModel contentModel, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24(GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24 const&) = default;
                    constexpr GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24(GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24&&) = default;
                    constexpr GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24& operator=(GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24& operator=(GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelListTableCell __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelListTableCell value) ;

constexpr GlobalNamespace::LevelListTableCell __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get_contentModel, put=__set_contentModel))  contentModel;

constexpr void __set_contentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get_contentModel() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2126008 size 0x3f8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2126400 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelListTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5526))
// CS Name: LevelListTableCell
class CORDL_TYPE LevelListTableCell : public HMUI::TableCell {
public:
// Declarations
using _RefreshAvailabilityAsync_d__24 = GlobalNamespace::GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24;

using _SetDataFromLevelAsync_d__19 = GlobalNamespace::GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~LevelListTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: " const&", def_value: None }]
constexpr LevelListTableCell(LevelListTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelListTableCell", modifiers: "&&", def_value: None }]
constexpr LevelListTableCell(LevelListTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelListTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr LevelListTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelListTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelListTableCell& operator=(LevelListTableCell&& o) noexcept = default;
  constexpr LevelListTableCell& operator=(LevelListTableCell const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Image __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__backgroundImage() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;

 UnityEngine::UI::Image __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__coverImage() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songNameText, put=__set__songNameText))  _songNameText;

constexpr void __set__songNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songAuthorText, put=__set__songAuthorText))  _songAuthorText;

constexpr void __set__songAuthorText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songAuthorText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__favoritesBadgeImage, put=__set__favoritesBadgeImage))  _favoritesBadgeImage;

constexpr void __set__favoritesBadgeImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__favoritesBadgeImage() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songDurationText, put=__set__songDurationText))  _songDurationText;

constexpr void __set__songDurationText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songDurationText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songBpmText, put=__set__songBpmText))  _songBpmText;

constexpr void __set__songBpmText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songBpmText() const;

 UnityEngine::Color __declspec(property(get=__get__highlightBackgroundColor, put=__set__highlightBackgroundColor))  _highlightBackgroundColor;

constexpr void __set__highlightBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__highlightBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__selectedBackgroundColor, put=__set__selectedBackgroundColor))  _selectedBackgroundColor;

constexpr void __set__selectedBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__selectedAndHighlightedBackgroundColor, put=__set__selectedAndHighlightedBackgroundColor))  _selectedAndHighlightedBackgroundColor;

constexpr void __set__selectedAndHighlightedBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__selectedAndHighlightedBackgroundColor() const;

 float_t __declspec(property(get=__get__notOwnedAlpha, put=__set__notOwnedAlpha))  _notOwnedAlpha;

constexpr void __set__notOwnedAlpha(float_t value) ;

constexpr float_t __get__notOwnedAlpha() const;

 UnityEngine::GameObject __declspec(property(get=__get__promoBadgeGo, put=__set__promoBadgeGo))  _promoBadgeGo;

constexpr void __set__promoBadgeGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__promoBadgeGo() const;

 UnityEngine::GameObject __declspec(property(get=__get__updatedBadgeGo, put=__set__updatedBadgeGo))  _updatedBadgeGo;

constexpr void __set__updatedBadgeGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__updatedBadgeGo() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__refreshingAvailabilityCancellationTokenSource, put=__set__refreshingAvailabilityCancellationTokenSource))  _refreshingAvailabilityCancellationTokenSource;

constexpr void __set__refreshingAvailabilityCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__refreshingAvailabilityCancellationTokenSource() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__settingDataCancellationTokenSource, put=__set__settingDataCancellationTokenSource))  _settingDataCancellationTokenSource;

constexpr void __set__settingDataCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__settingDataCancellationTokenSource() const;

 bool __declspec(property(get=__get__notOwned, put=__set__notOwned))  _notOwned;

constexpr void __set__notOwned(bool value) ;

constexpr bool __get__notOwned() const;

 ::StringW __declspec(property(get=__get__refreshingAvailabilityLevelID, put=__set__refreshingAvailabilityLevelID))  _refreshingAvailabilityLevelID;

constexpr void __set__refreshingAvailabilityLevelID(::StringW value) ;

constexpr ::StringW __get__refreshingAvailabilityLevelID() const;

 ::StringW __declspec(property(get=__get__settingDataFromLevelId, put=__set__settingDataFromLevelId))  _settingDataFromLevelId;

constexpr void __set__settingDataFromLevelId(::StringW value) ;

constexpr ::StringW __get__settingDataFromLevelId() const;


// Methods

/// @brief Method SetDataFromLevelAsync addr 0x212532c size 0xc0 virtual false final false
 void SetDataFromLevelAsync(GlobalNamespace::IPreviewBeatmapLevel level, bool isFavorite, bool isPromoted, bool isUpdated) ;

/// @brief Method SelectionDidChange addr 0x21253ec size 0x4 virtual true final false
 void SelectionDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x21254b4 size 0x4 virtual true final false
 void HighlightDidChange(HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x21253f0 size 0xc4 virtual false final false
 void RefreshVisuals() ;

/// @brief Method WasPreparedForReuse addr 0x21254b8 size 0x4 virtual true final false
 void WasPreparedForReuse() ;

/// @brief Method RefreshAvailabilityAsync addr 0x21254f4 size 0xa8 virtual false final false
 void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel contentModel, ::StringW levelID) ;

/// @brief Method CancelAsyncOperations addr 0x21254bc size 0x38 virtual false final false
 void CancelAsyncOperations() ;

static GlobalNamespace::LevelListTableCell New_ctor() ;

/// @brief Method .ctor addr 0x212559c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelListTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelListTableCell, "", "LevelListTableCell");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24, "", "LevelListTableCell/<RefreshAvailabilityAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19, "", "LevelListTableCell/<SetDataFromLevelAsync>d__19");
