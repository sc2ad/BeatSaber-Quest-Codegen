#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class OculusBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;
}
// Type: ::LevelDownloadingData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4616))
// CS Name: OculusBeatmapDataAssetFileModel::LevelDownloadingData
class CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData(GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData(GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData&& o) noexcept = default;
  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 ::StringW __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath))  assetBundlePath;

constexpr void __set_assetBundlePath(::StringW value) ;

constexpr ::StringW __get_assetBundlePath() const;

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_downloadAssetBundleFileTCS, put=__set_downloadAssetBundleFileTCS))  downloadAssetBundleFileTCS;

constexpr void __set_downloadAssetBundleFileTCS(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> __get_downloadAssetBundleFileTCS() const;


// Methods

static GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData New_ctor(::StringW levelId, ::StringW assetBundlePath) ;

/// @brief Method .ctor addr 0x2216a54 size 0x94 virtual false final false
 void _ctor(::StringW levelId, ::StringW assetBundlePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass13_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4617))
// CS Name: OculusBeatmapDataAssetFileModel::<>c__DisplayClass13_0
class CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_taskSource, put=__set_taskSource))  taskSource;

constexpr void __set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get_taskSource() const;


// Methods

static GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 New_ctor() ;

/// @brief Method .ctor addr 0x2216f4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0 addr 0x2216f54 size 0x15c virtual false final false
 void _TryDeleteAssetBundleFileForPreviewLevelAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult> msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4618))
// CS Name: OculusBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
struct CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0", modifiers: "", def_value: None }, CppParam { name: "_deleted_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Threading::CancellationToken cancellationToken, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 __8__1, bool _deleted_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 const&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13&&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0 __get___8__1() const;

 bool __declspec(property(get=__get__deleted_5__2, put=__set__deleted_5__2))  _deleted_5__2;

constexpr void __set__deleted_5__2(bool value) ;

constexpr bool __get__deleted_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22170b0 size 0x560 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22176a4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__14
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4619))
// CS Name: OculusBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__14
struct CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelId_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_assetFile_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW _levelId_5__2, ::StringW _assetFile_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__3) noexcept;


                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14 const&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14&&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get__levelId_5__2, put=__set__levelId_5__2))  _levelId_5__2;

constexpr void __set__levelId_5__2(::StringW value) ;

constexpr ::StringW __get__levelId_5__2() const;

 ::StringW __declspec(property(get=__get__assetFile_5__3, put=__set__assetFile_5__3))  _assetFile_5__3;

constexpr void __set__assetFile_5__3(::StringW value) ;

constexpr ::StringW __get__assetFile_5__3() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __get___u__3() const;


// Methods

/// @brief Method MoveNext addr 0x22176fc size 0xa1c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2218118 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass15_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4620))
// CS Name: OculusBeatmapDataAssetFileModel::<>c__DisplayClass15_0
class CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get_taskSource, put=__set_taskSource))  taskSource;

constexpr void __set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get_taskSource() const;

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0 New_ctor() ;

/// @brief Method .ctor addr 0x2218170 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ReloadAssetDetailsForAllLevelsAsync>b__0 addr 0x2218178 size 0x3fc virtual false final false
 void _ReloadAssetDetailsForAllLevelsAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetailsList> getListMsg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ReloadAssetDetailsForAllLevelsAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4621))
// CS Name: OculusBeatmapDataAssetFileModel::<ReloadAssetDetailsForAllLevelsAsync>d__15
struct CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Threading::CancellationToken cancellationToken, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 const&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15&&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2218574 size 0x318 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221888c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4622))
// CS Name: OculusBeatmapDataAssetFileModel::<>c__DisplayClass16_0
class CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_taskSource, put=__set_taskSource))  taskSource;

constexpr void __set_taskSource(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> __get_taskSource() const;

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 Oculus::Platform::Models::AssetDetails __declspec(property(get=__get_assetDetails, put=__set_assetDetails))  assetDetails;

constexpr void __set_assetDetails(Oculus::Platform::Models::AssetDetails value) ;

constexpr Oculus::Platform::Models::AssetDetails __get_assetDetails() const;


// Methods

static GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0 New_ctor() ;

/// @brief Method .ctor addr 0x22188e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetDownloadAssetBundleFileAsync>b__0 addr 0x22188ec size 0xcc virtual false final false
 void _GetDownloadAssetBundleFileAsync_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult> msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetDownloadAssetBundleFileAsync>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4623))
// CS Name: OculusBeatmapDataAssetFileModel::<GetDownloadAssetBundleFileAsync>d__16
struct CORDL_TYPE GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusBeatmapDataAssetFileModel", modifiers: "", def_value: None }, CppParam { name: "assetDetails", ty: "Oculus::Platform::Models::AssetDetails", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, GlobalNamespace::OculusBeatmapDataAssetFileModel __4__this, Oculus::Platform::Models::AssetDetails assetDetails, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 const&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16&&) = default;
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16& operator=(GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::OculusBeatmapDataAssetFileModel __get___4__this() const;

 Oculus::Platform::Models::AssetDetails __declspec(property(get=__get_assetDetails, put=__set_assetDetails))  assetDetails;

constexpr void __set_assetDetails(Oculus::Platform::Models::AssetDetails value) ;

constexpr Oculus::Platform::Models::AssetDetails __get_assetDetails() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22189b8 size 0x760 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2219118 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4624))
// CS Name: OculusBeatmapDataAssetFileModel
class CORDL_TYPE OculusBeatmapDataAssetFileModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetDownloadAssetBundleFileAsync_d__16 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16;

using __c__DisplayClass16_0 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0;

using _ReloadAssetDetailsForAllLevelsAsync_d__15 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15;

using __c__DisplayClass15_0 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0;

using _GetAssetBundleFileForPreviewLevelAsync_d__14 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14;

using _TryDeleteAssetBundleFileForPreviewLevelAsync_d__13 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13;

using __c__DisplayClass13_0 = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0;

using LevelDownloadingData = GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData;

/// @brief Convert operator to GlobalNamespace::IBeatmapDataAssetFileModel
constexpr operator  GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OculusBeatmapDataAssetFileModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: " const&", def_value: None }]
constexpr OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
constexpr OculusBeatmapDataAssetFileModel(OculusBeatmapDataAssetFileModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusBeatmapDataAssetFileModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusBeatmapDataAssetFileModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusBeatmapDataAssetFileModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusBeatmapDataAssetFileModel& operator=(OculusBeatmapDataAssetFileModel&& o) noexcept = default;
  constexpr OculusBeatmapDataAssetFileModel& operator=(OculusBeatmapDataAssetFileModel const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent))  levelDataAssetDownloadUpdateEvent;

constexpr void __set_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

constexpr System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __get_levelDataAssetDownloadUpdateEvent() const;

 System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData> __declspec(property(get=__get__assetIdToDownloadinData, put=__set__assetIdToDownloadinData))  _assetIdToDownloadinData;

constexpr void __set__assetIdToDownloadinData(System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint64_t,GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData> __get__assetIdToDownloadinData() const;

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get__downloadedAssetBundleFiles, put=__set__downloadedAssetBundleFiles))  _downloadedAssetBundleFiles;

constexpr void __set__downloadedAssetBundleFiles(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get__downloadedAssetBundleFiles() const;

 System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate> __declspec(property(get=__get__lastAssetFileDownloadUpdateForAssetIds, put=__set__lastAssetFileDownloadUpdateForAssetIds))  _lastAssetFileDownloadUpdateForAssetIds;

constexpr void __set__lastAssetFileDownloadUpdateForAssetIds(System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint64_t,Oculus::Platform::Models::AssetFileDownloadUpdate> __get__lastAssetFileDownloadUpdateForAssetIds() const;

/// @brief Field kMaxTimeOutBeforeFail offset 0
static constexpr float_t  kMaxTimeOutBeforeFail{120};

 float_t __declspec(property(get=__get__lastAssetFileDownloadUpdateTime, put=__set__lastAssetFileDownloadUpdateTime))  _lastAssetFileDownloadUpdateTime;

constexpr void __set__lastAssetFileDownloadUpdateTime(float_t value) ;

constexpr float_t __get__lastAssetFileDownloadUpdateTime() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim))  _semaphoreSlim;

constexpr void __set__semaphoreSlim(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get__semaphoreSlim() const;

 System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails> __declspec(property(get=__get__assetFileToAssetDetails, put=__set__assetFileToAssetDetails))  _assetFileToAssetDetails;

constexpr void __set__assetFileToAssetDetails(System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,Oculus::Platform::Models::AssetDetails> __get__assetFileToAssetDetails() const;

 GlobalNamespace::OculusLevelProductsModelSO __declspec(property(get=__get__oculusLevelProductsModel, put=__set__oculusLevelProductsModel))  _oculusLevelProductsModel;

constexpr void __set__oculusLevelProductsModel(GlobalNamespace::OculusLevelProductsModelSO value) ;

constexpr GlobalNamespace::OculusLevelProductsModelSO __get__oculusLevelProductsModel() const;


// Methods

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x22161d0 size 0xb0 virtual true final true
 void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x2216280 size 0xb0 virtual true final true
 void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

static GlobalNamespace::OculusBeatmapDataAssetFileModel New_ctor(GlobalNamespace::OculusLevelProductsModelSO oculusLevelProductsModel) ;

/// @brief Method .ctor addr 0x2216330 size 0x1e4 virtual false final false
 void _ctor(GlobalNamespace::OculusLevelProductsModelSO oculusLevelProductsModel) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x2216514 size 0x110 virtual true final true
 System::Threading::Tasks::Task_1<bool> TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x2216624 size 0x110 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReloadAssetDetailsForAllLevelsAsync addr 0x2216734 size 0x104 virtual false final false
 System::Threading::Tasks::Task_1<bool> ReloadAssetDetailsForAllLevelsAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetDownloadAssetBundleFileAsync addr 0x2216838 size 0x10c virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GetDownloadAssetBundleFileAsync(::StringW levelId, Oculus::Platform::Models::AssetDetails assetDetails, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetTaskCompletionSourceForDownload addr 0x2216944 size 0x110 virtual false final false
 System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult> GetTaskCompletionSourceForDownload(::StringW levelId, Oculus::Platform::Models::AssetDetails assetDetail) ;

/// @brief Method HandleAssetFileDownloadUpdate addr 0x2216ae8 size 0x460 virtual false final false
 void HandleAssetFileDownloadUpdate(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate> msg) ;

/// @brief Method <.ctor>b__12_0 addr 0x2216f48 size 0x4 virtual false final false
 void __ctor_b__12_0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate> msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel__LevelDownloadingData, "", "OculusBeatmapDataAssetFileModel/LevelDownloadingData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass13_0, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass15_0, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel____c__DisplayClass16_0, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0");
NEED_NO_BOX(GlobalNamespace::OculusBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel, "", "OculusBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__14, "", "OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___GetDownloadAssetBundleFileAsync_d__16, "", "OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___ReloadAssetDetailsForAllLevelsAsync_d__15, "", "OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__13, "", "OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13");
