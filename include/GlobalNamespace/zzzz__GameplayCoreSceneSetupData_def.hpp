#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14;
}
// Type: ::<LoadTransformedBeatmapDataAsync>d__14
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6103))
// CS Name: GameplayCoreSceneSetupData::<LoadTransformedBeatmapDataAsync>d__14
struct CORDL_TYPE GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameplayCoreSceneSetupData", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GameplayCoreSceneSetupData __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14(GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14 const&) = default;
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14(GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14&&) = default;
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14& operator=(GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14& operator=(GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b6d3c size 0x1c8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b6f04 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetTransformedBeatmapDataAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6104))
// CS Name: GameplayCoreSceneSetupData::<GetTransformedBeatmapDataAsync>d__15
struct CORDL_TYPE GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameplayCoreSceneSetupData", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::GameplayCoreSceneSetupData __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15(GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15 const&) = default;
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15(GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15&&) = default;
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15& operator=(GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15& operator=(GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __get___t__builder() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b6f10 size 0x410 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b7320 size 0x1058 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayCoreSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6105))
// CS Name: GameplayCoreSceneSetupData
class CORDL_TYPE GameplayCoreSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
using _GetTransformedBeatmapDataAsync_d__15 = GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15;

using _LoadTransformedBeatmapDataAsync_d__14 = GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~GameplayCoreSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: " const&", def_value: None }]
constexpr GameplayCoreSceneSetupData(GameplayCoreSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreSceneSetupData", modifiers: "&&", def_value: None }]
constexpr GameplayCoreSceneSetupData(GameplayCoreSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayCoreSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr GameplayCoreSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayCoreSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayCoreSceneSetupData& operator=(GameplayCoreSceneSetupData&& o) noexcept = default;
  constexpr GameplayCoreSceneSetupData& operator=(GameplayCoreSceneSetupData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get_gameplayModifiers() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 GlobalNamespace::PracticeSettings __declspec(property(get=__get_practiceSettings, put=__set_practiceSettings))  practiceSettings;

constexpr void __set_practiceSettings(GlobalNamespace::PracticeSettings value) ;

constexpr GlobalNamespace::PracticeSettings __get_practiceSettings() const;

 bool __declspec(property(get=__get_useTestNoteCutSoundEffects, put=__set_useTestNoteCutSoundEffects))  useTestNoteCutSoundEffects;

constexpr void __set_useTestNoteCutSoundEffects(bool value) ;

constexpr bool __get_useTestNoteCutSoundEffects() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::ColorScheme __declspec(property(get=__get_colorScheme, put=__set_colorScheme))  colorScheme;

constexpr void __set_colorScheme(GlobalNamespace::ColorScheme value) ;

constexpr GlobalNamespace::ColorScheme __get_colorScheme() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get_mainSettingsModel, put=__set_mainSettingsModel))  mainSettingsModel;

constexpr void __set_mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get_mainSettingsModel() const;

 GlobalNamespace::BeatmapDataCache __declspec(property(get=__get_beatmapDataCache, put=__set_beatmapDataCache))  beatmapDataCache;

constexpr void __set_beatmapDataCache(GlobalNamespace::BeatmapDataCache value) ;

constexpr GlobalNamespace::BeatmapDataCache __get_beatmapDataCache() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get__transformedBeatmapData, put=__set__transformedBeatmapData))  _transformedBeatmapData;

constexpr void __set__transformedBeatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get__transformedBeatmapData() const;


// Properties

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=get_transformedBeatmapData))  transformedBeatmapData;


// Methods

/// @brief Method get_transformedBeatmapData addr 0x21b6af4 size 0x8 virtual false final false
 GlobalNamespace::IReadonlyBeatmapData get_transformedBeatmapData() ;

static GlobalNamespace::GameplayCoreSceneSetupData New_ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::ColorScheme colorScheme, GlobalNamespace::MainSettingsModelSO mainSettingsModel, GlobalNamespace::BeatmapDataCache beatmapDataCache) ;

/// @brief Method .ctor addr 0x21b6afc size 0x88 virtual false final false
 void _ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, bool useTestNoteCutSoundEffects, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::ColorScheme colorScheme, GlobalNamespace::MainSettingsModelSO mainSettingsModel, GlobalNamespace::BeatmapDataCache beatmapDataCache) ;

/// @brief Method LoadTransformedBeatmapDataAsync addr 0x21b6b84 size 0xc8 virtual false final false
 System::Threading::Tasks::Task LoadTransformedBeatmapDataAsync() ;

/// @brief Method GetTransformedBeatmapDataAsync addr 0x21b6c4c size 0xf0 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetTransformedBeatmapDataAsync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreSceneSetupData, "", "GameplayCoreSceneSetupData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___GetTransformedBeatmapDataAsync_d__15, "", "GameplayCoreSceneSetupData/<GetTransformedBeatmapDataAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayCoreSceneSetupData___LoadTransformedBeatmapDataAsync_d__14, "", "GameplayCoreSceneSetupData/<LoadTransformedBeatmapDataAsync>d__14");
