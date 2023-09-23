#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3;
}
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4669))
// CS Name: SonyBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__3
struct CORDL_TYPE GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;


                    constexpr GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3 const&) = default;
                    constexpr GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3&&) = default;
                    constexpr GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3& operator=(GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3& operator=(GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __get___t__builder() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x221b738 size 0x238 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221b970 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4670))
// CS Name: SonyBeatmapDataAssetFileModel
class CORDL_TYPE SonyBeatmapDataAssetFileModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetAssetBundleFileForPreviewLevelAsync_d__3 = GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3;

/// @brief Convert operator to GlobalNamespace::IBeatmapDataAssetFileModel
constexpr operator  GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SonyBeatmapDataAssetFileModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: " const&", def_value: None }]
constexpr SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
constexpr SonyBeatmapDataAssetFileModel(SonyBeatmapDataAssetFileModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyBeatmapDataAssetFileModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SonyBeatmapDataAssetFileModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyBeatmapDataAssetFileModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyBeatmapDataAssetFileModel& operator=(SonyBeatmapDataAssetFileModel&& o) noexcept = default;
  constexpr SonyBeatmapDataAssetFileModel& operator=(SonyBeatmapDataAssetFileModel const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent))  levelDataAssetDownloadUpdateEvent;

constexpr void __set_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

constexpr System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __get_levelDataAssetDownloadUpdateEvent() const;


// Methods

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x221b47c size 0xb0 virtual true final true
 void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x221b52c size 0xb0 virtual true final true
 void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x221b5dc size 0xec virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x221b6c8 size 0x68 virtual true final true
 System::Threading::Tasks::Task_1<bool> TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit SonyBeatmapDataAssetFileModel() ;

/// @brief Method .ctor addr 0x221b730 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SonyBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyBeatmapDataAssetFileModel, "", "SonyBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__3, "", "SonyBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__3");
