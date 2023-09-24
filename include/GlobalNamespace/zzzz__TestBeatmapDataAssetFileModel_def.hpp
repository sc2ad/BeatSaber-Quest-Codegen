#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
struct CancellationToken;
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
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class TestBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;
}
namespace GlobalNamespace {
struct GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;
}
// Type: ::<GetAssetBundleFileForPreviewLevelAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4434))
// CS Name: TestBeatmapDataAssetFileModel::<GetAssetBundleFileForPreviewLevelAsync>d__4
struct CORDL_TYPE GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::TestBeatmapDataAssetFileModel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GetAssetBundleFileResult> __t__builder, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::TestBeatmapDataAssetFileModel __4__this, System::Threading::CancellationToken cancellationToken, ::StringW _path_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1, uint32_t _i_5__3, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__2) noexcept;


                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4 const&) = default;
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4&&) = default;
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4& operator=(GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4& operator=(GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::TestBeatmapDataAssetFileModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TestBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::TestBeatmapDataAssetFileModel __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 ::StringW __declspec(property(get=__get__path_5__2, put=__set__path_5__2))  _path_5__2;

constexpr void __set__path_5__2(::StringW value) ;

constexpr ::StringW __get__path_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 uint32_t __declspec(property(get=__get__i_5__3, put=__set__i_5__3))  _i_5__3;

constexpr void __set__i_5__3(uint32_t value) ;

constexpr uint32_t __get__i_5__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x21edd68 size 0x64c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21ee3b4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4435))
// CS Name: TestBeatmapDataAssetFileModel::<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5
struct CORDL_TYPE GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 const&) = default;
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5&&) = default;
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5& operator=(GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5& operator=(GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21ee40c size 0x20c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21ee618 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TestBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4436))
// CS Name: TestBeatmapDataAssetFileModel
class CORDL_TYPE TestBeatmapDataAssetFileModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _TryDeleteAssetBundleFileForPreviewLevelAsync_d__5 = GlobalNamespace::GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5;

using _GetAssetBundleFileForPreviewLevelAsync_d__4 = GlobalNamespace::GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4;

/// @brief Convert operator to GlobalNamespace::IBeatmapDataAssetFileModel
constexpr operator  GlobalNamespace::IBeatmapDataAssetFileModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TestBeatmapDataAssetFileModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestBeatmapDataAssetFileModel", modifiers: " const&", def_value: None }]
constexpr TestBeatmapDataAssetFileModel(TestBeatmapDataAssetFileModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestBeatmapDataAssetFileModel", modifiers: "&&", def_value: None }]
constexpr TestBeatmapDataAssetFileModel(TestBeatmapDataAssetFileModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestBeatmapDataAssetFileModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TestBeatmapDataAssetFileModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestBeatmapDataAssetFileModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestBeatmapDataAssetFileModel& operator=(TestBeatmapDataAssetFileModel&& o) noexcept = default;
  constexpr TestBeatmapDataAssetFileModel& operator=(TestBeatmapDataAssetFileModel const& o) noexcept = default;
                


// Fields

/// @brief Field kAssetsDir offset 0
static constexpr ::ConstString  kAssetsDir{u"BeatmapDataAssets"};

 System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __declspec(property(get=__get_levelDataAssetDownloadUpdateEvent, put=__set_levelDataAssetDownloadUpdateEvent))  levelDataAssetDownloadUpdateEvent;

constexpr void __set_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

constexpr System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> __get_levelDataAssetDownloadUpdateEvent() const;


// Methods

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x21eda00 size 0xb0 virtual true final true
 void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x21edab0 size 0xb0 virtual true final true
 void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x21edb60 size 0x114 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x21edc74 size 0xec virtual true final true
 System::Threading::Tasks::Task_1<bool> TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

static GlobalNamespace::TestBeatmapDataAssetFileModel New_ctor() ;

/// @brief Method .ctor addr 0x21edd60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TestBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestBeatmapDataAssetFileModel, "", "TestBeatmapDataAssetFileModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestBeatmapDataAssetFileModel___GetAssetBundleFileForPreviewLevelAsync_d__4, "", "TestBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TestBeatmapDataAssetFileModel___TryDeleteAssetBundleFileForPreviewLevelAsync_d__5, "", "TestBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__5");
