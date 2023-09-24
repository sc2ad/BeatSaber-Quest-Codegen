#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Action;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__OpenProductStoreResult;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace GlobalNamespace {
struct GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController__ContentType;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;
}
// Type: ::ContentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5760))
// CS Name: LevelPackDetailViewController::ContentType
struct CORDL_TYPE GlobalNamespace__LevelPackDetailViewController__ContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelPackDetailViewController__ContentType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LevelPackDetailViewController__ContentType(GlobalNamespace__LevelPackDetailViewController__ContentType const&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController__ContentType(GlobalNamespace__LevelPackDetailViewController__ContentType&&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController__ContentType& operator=(GlobalNamespace__LevelPackDetailViewController__ContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelPackDetailViewController__ContentType& operator=(GlobalNamespace__LevelPackDetailViewController__ContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelPackDetailViewController__ContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LevelPackDetailViewController__ContentType_Unwrapped : int32_t {
__Loading = 0,
__Owned = 1,
__Buy = 2,
__Error = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LevelPackDetailViewController__ContentType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LevelPackDetailViewController__ContentType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Loading offset 0
static GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType const Loading;

/// @brief Field Owned offset 0
static GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType const Owned;

/// @brief Field Buy offset 0
static GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType const Buy;

/// @brief Field Error offset 0
static GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5761))
// CS Name: LevelPackDetailViewController::<>c__DisplayClass16_0
class CORDL_TYPE GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0(GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0(GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0& operator=(GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0&& o) noexcept = default;
  constexpr GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0& operator=(GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_handleDidPressRefreshButton, put=__set_handleDidPressRefreshButton))  handleDidPressRefreshButton;

constexpr void __set_handleDidPressRefreshButton(System::Action value) ;

constexpr System::Action __get_handleDidPressRefreshButton() const;

 GlobalNamespace::LevelPackDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelPackDetailViewController value) ;

constexpr GlobalNamespace::LevelPackDetailViewController __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0 New_ctor() ;

/// @brief Method .ctor addr 0x2169bf8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__1 addr 0x216a294 size 0x2c virtual false final false
 void _DidActivate_b__1() ;

/// @brief Method <DidActivate>b__2 addr 0x216a2c0 size 0x2c virtual false final false
 void _DidActivate_b__2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<RefreshAvailabilityAsync>d__19
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5762))
// CS Name: LevelPackDetailViewController::<RefreshAvailabilityAsync>d__19
struct CORDL_TYPE GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelPackDetailViewController", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelPackDetailViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 const&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19&&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19& operator=(GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19& operator=(GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelPackDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelPackDetailViewController value) ;

constexpr GlobalNamespace::LevelPackDetailViewController __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216a2ec size 0x428 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216a714 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5763))
// CS Name: LevelPackDetailViewController::<OpenLevelPackProductStoreAsync>d__21
struct CORDL_TYPE GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelPackDetailViewController", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelPackDetailViewController __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 const&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21&&) = default;
                    constexpr GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21& operator=(GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21& operator=(GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelPackDetailViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelPackDetailViewController value) ;

constexpr GlobalNamespace::LevelPackDetailViewController __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x216a720 size 0x388 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x216aaa8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelPackDetailViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5764))
// CS Name: LevelPackDetailViewController
class CORDL_TYPE LevelPackDetailViewController : public HMUI::ViewController {
public:
// Declarations
using _OpenLevelPackProductStoreAsync_d__21 = GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21;

using _RefreshAvailabilityAsync_d__19 = GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19;

using __c__DisplayClass16_0 = GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0;

using ContentType = GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~LevelPackDetailViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: " const&", def_value: None }]
constexpr LevelPackDetailViewController(LevelPackDetailViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelPackDetailViewController", modifiers: "&&", def_value: None }]
constexpr LevelPackDetailViewController(LevelPackDetailViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelPackDetailViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr LevelPackDetailViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelPackDetailViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelPackDetailViewController& operator=(LevelPackDetailViewController&& o) noexcept = default;
  constexpr LevelPackDetailViewController& operator=(LevelPackDetailViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__detailWrapper, put=__set__detailWrapper))  _detailWrapper;

constexpr void __set__detailWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__detailWrapper() const;

 HMUI::ImageView __declspec(property(get=__get__packImage, put=__set__packImage))  _packImage;

constexpr void __set__packImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__packImage() const;

 UnityEngine::UI::Button __declspec(property(get=__get__buyButton, put=__set__buyButton))  _buyButton;

constexpr void __set__buyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__buyButton() const;

 UnityEngine::GameObject __declspec(property(get=__get__buyContainer, put=__set__buyContainer))  _buyContainer;

constexpr void __set__buyContainer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__buyContainer() const;

 GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(GlobalNamespace::LoadingControl value) ;

constexpr GlobalNamespace::LoadingControl __get__loadingControl() const;

 UnityEngine::GameObject __declspec(property(get=__get__requireInternetContainer, put=__set__requireInternetContainer))  _requireInternetContainer;

constexpr void __set__requireInternetContainer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__requireInternetContainer() const;

 GlobalNamespace::KawaseBlurRendererSO __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer))  _kawaseBlurRenderer;

constexpr void __set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value) ;

constexpr GlobalNamespace::KawaseBlurRendererSO __get__kawaseBlurRenderer() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel))  _dlcPromoPanelModel;

constexpr void __set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value) ;

constexpr GlobalNamespace::DlcPromoPanelModel __get__dlcPromoPanelModel() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 GlobalNamespace::EventBinder __declspec(property(get=__get__eventBinder, put=__set__eventBinder))  _eventBinder;

constexpr void __set__eventBinder(GlobalNamespace::EventBinder value) ;

constexpr GlobalNamespace::EventBinder __get__eventBinder() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get__pack, put=__set__pack))  _pack;

constexpr void __set__pack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get__pack() const;

 UnityEngine::Sprite __declspec(property(get=__get__blurredPackArtwork, put=__set__blurredPackArtwork))  _blurredPackArtwork;

constexpr void __set__blurredPackArtwork(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__blurredPackArtwork() const;


// Methods

/// @brief Method SetData addr 0x2165240 size 0x3cc virtual false final false
 void SetData(GlobalNamespace::IBeatmapLevelPack pack) ;

/// @brief Method DidActivate addr 0x2169a0c size 0x1ec virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2169c00 size 0xa8 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x2169ca8 size 0x108 virtual true final false
 void OnDestroy() ;

/// @brief Method RefreshAvailabilityAsync addr 0x2169978 size 0x94 virtual false final false
 void RefreshAvailabilityAsync() ;

/// @brief Method BuyPackButtonWasPressed addr 0x2169db0 size 0x10c virtual false final false
 void BuyPackButtonWasPressed() ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x2169ebc size 0x94 virtual false final false
 void OpenLevelPackProductStoreAsync() ;

/// @brief Method ShowContent addr 0x2169f50 size 0x2d4 virtual false final false
 void ShowContent(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType contentType, ::StringW errorText) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x216a224 size 0x4 virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

static GlobalNamespace::LevelPackDetailViewController New_ctor() ;

/// @brief Method .ctor addr 0x216a228 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__16_0 addr 0x216a290 size 0x4 virtual false final false
 void _DidActivate_b__16_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController__ContentType, "", "LevelPackDetailViewController/ContentType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController____c__DisplayClass16_0, "", "LevelPackDetailViewController/<>c__DisplayClass16_0");
NEED_NO_BOX(GlobalNamespace::LevelPackDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController, "", "LevelPackDetailViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___OpenLevelPackProductStoreAsync_d__21, "", "LevelPackDetailViewController/<OpenLevelPackProductStoreAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelPackDetailViewController___RefreshAvailabilityAsync_d__19, "", "LevelPackDetailViewController/<RefreshAvailabilityAsync>d__19");
