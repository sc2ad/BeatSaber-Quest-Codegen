#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4;
}
// Type: ::<GetBeatmapData>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5908))
// CS Name: BeatmapDataCache::<GetBeatmapData>d__4
struct CORDL_TYPE GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapDataCache", modifiers: "", def_value: None }, CppParam { name: "environmentInfo", ty: "GlobalNamespace::EnvironmentInfoSO", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::IReadonlyBeatmapData> __t__builder, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::BeatmapDataCache __4__this, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4(GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4 const&) = default;
                    constexpr GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4(GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4&&) = default;
                    constexpr GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4& operator=(GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4& operator=(GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;

 GlobalNamespace::BeatmapDataCache __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapDataCache value) ;

constexpr GlobalNamespace::BeatmapDataCache __get___4__this() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2190de8 size 0x474 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x219125c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5909))
// CS Name: BeatmapDataCache
class CORDL_TYPE BeatmapDataCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetBeatmapData_d__4 = GlobalNamespace::GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapDataCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: " const&", def_value: None }]
constexpr BeatmapDataCache(BeatmapDataCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCache", modifiers: "&&", def_value: None }]
constexpr BeatmapDataCache(BeatmapDataCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataCache& operator=(BeatmapDataCache&& o) noexcept = default;
  constexpr BeatmapDataCache& operator=(BeatmapDataCache const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get_environmentInfo, put=__set_environmentInfo))  environmentInfo;

constexpr void __set_environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get_environmentInfo() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get_playerSpecificSettings, put=__set_playerSpecificSettings))  playerSpecificSettings;

constexpr void __set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get_playerSpecificSettings() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_cachedMap, put=__set_cachedMap))  cachedMap;

constexpr void __set_cachedMap(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get_cachedMap() const;


// Methods

/// @brief Method GetBeatmapData addr 0x2190cd0 size 0x110 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::IReadonlyBeatmapData> GetBeatmapData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::EnvironmentInfoSO environmentInfo, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

// Ctor Parameters []
explicit BeatmapDataCache() ;

/// @brief Method .ctor addr 0x2190de0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataCache);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataCache, "", "BeatmapDataCache");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataCache___GetBeatmapData_d__4, "", "BeatmapDataCache/<GetBeatmapData>d__4");
