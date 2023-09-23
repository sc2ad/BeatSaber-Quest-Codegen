#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace Zenject {
class ITickable;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;
}
namespace GlobalNamespace {
class MultiplayerLevelLoader;
}
// Type: ::MultiplayerBeatmapLoaderState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5668))
// CS Name: MultiplayerLevelLoader::MultiplayerBeatmapLoaderState
struct CORDL_TYPE GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState&&) = default;
                    constexpr GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& operator=(GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& operator=(GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped : int32_t {
__NotLoading = 0,
__LoadingBeatmap = 1,
__WaitingForCountdown = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotLoading offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const NotLoading;

/// @brief Field LoadingBeatmap offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const LoadingBeatmap;

/// @brief Field WaitingForCountdown offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const WaitingForCountdown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5669))
// CS Name: MultiplayerLevelLoader
class CORDL_TYPE MultiplayerLevelLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MultiplayerBeatmapLoaderState = GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState;

/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MultiplayerLevelLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelLoader(MultiplayerLevelLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelLoader", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelLoader(MultiplayerLevelLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerLevelLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelLoader& operator=(MultiplayerLevelLoader&& o) noexcept = default;
  constexpr MultiplayerLevelLoader& operator=(MultiplayerLevelLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;

 System::Action __declspec(property(get=__get_stillDownloadingSongEvent, put=__set_stillDownloadingSongEvent))  stillDownloadingSongEvent;

constexpr void __set_stillDownloadingSongEvent(System::Action value) ;

constexpr System::Action __get_stillDownloadingSongEvent() const;

 System::Action_2<GlobalNamespace::ILevelGameplaySetupData,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_countdownFinishedEvent, put=__set_countdownFinishedEvent))  countdownFinishedEvent;

constexpr void __set_countdownFinishedEvent(System::Action_2<GlobalNamespace::ILevelGameplaySetupData,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::ILevelGameplaySetupData,GlobalNamespace::IDifficultyBeatmap> __get_countdownFinishedEvent() const;

 GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState __declspec(property(get=__get__loaderState, put=__set__loaderState))  _loaderState;

constexpr void __set__loaderState(GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState __get__loaderState() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__getBeatmapCancellationTokenSource, put=__set__getBeatmapCancellationTokenSource))  _getBeatmapCancellationTokenSource;

constexpr void __set__getBeatmapCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__getBeatmapCancellationTokenSource() const;

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get__getBeatmapLevelResultTask, put=__set__getBeatmapLevelResultTask))  _getBeatmapLevelResultTask;

constexpr void __set__getBeatmapLevelResultTask(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get__getBeatmapLevelResultTask() const;

 GlobalNamespace::ILevelGameplaySetupData __declspec(property(get=__get__gameplaySetupData, put=__set__gameplaySetupData))  _gameplaySetupData;

constexpr void __set__gameplaySetupData(GlobalNamespace::ILevelGameplaySetupData value) ;

constexpr GlobalNamespace::ILevelGameplaySetupData __get__gameplaySetupData() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 bool __declspec(property(get=__get__stillDownloadingCalled, put=__set__stillDownloadingCalled))  _stillDownloadingCalled;

constexpr void __set__stillDownloadingCalled(bool value) ;

constexpr bool __get__stillDownloadingCalled() const;


// Methods

/// @brief Method add_stillDownloadingSongEvent addr 0x214f0f4 size 0x9c virtual false final false
 void add_stillDownloadingSongEvent(System::Action value) ;

/// @brief Method remove_stillDownloadingSongEvent addr 0x214f190 size 0x9c virtual false final false
 void remove_stillDownloadingSongEvent(System::Action value) ;

/// @brief Method add_countdownFinishedEvent addr 0x214f22c size 0xb0 virtual false final false
 void add_countdownFinishedEvent(System::Action_2<GlobalNamespace::ILevelGameplaySetupData,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_countdownFinishedEvent addr 0x214f2dc size 0xb0 virtual false final false
 void remove_countdownFinishedEvent(System::Action_2<GlobalNamespace::ILevelGameplaySetupData,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method LoadLevel addr 0x214f38c size 0x1a8 virtual false final false
 void LoadLevel(GlobalNamespace::ILevelGameplaySetupData gameplaySetupData, float_t initialStartTime) ;

/// @brief Method SetNewStartTime addr 0x214f534 size 0x8 virtual false final false
 void SetNewStartTime(float_t newStartTime) ;

/// @brief Method ClearLoading addr 0x214f53c size 0x34 virtual false final false
 void ClearLoading() ;

/// @brief Method Tick addr 0x214f570 size 0x2ec virtual true final true
 void Tick() ;

// Ctor Parameters []
explicit MultiplayerLevelLoader() ;

/// @brief Method .ctor addr 0x214f85c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState, "", "MultiplayerLevelLoader/MultiplayerBeatmapLoaderState");
NEED_NO_BOX(GlobalNamespace::MultiplayerLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelLoader, "", "MultiplayerLevelLoader");
