#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
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
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelLoader;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;
}
// Type: ::LoadBeatmapLevelResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4355))
// CS Name: BeatmapLevelLoader::LoadBeatmapLevelResult
struct CORDL_TYPE GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "beatmapLevel", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult(GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult(GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult& operator=(GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult& operator=(GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isError, put=__set_isError))  isError;

constexpr void __set_isError(bool value) ;

constexpr bool __get_isError() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel))  beatmapLevel;

constexpr void __set_beatmapLevel(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get_beatmapLevel() const;


// Methods

/// @brief Method .ctor addr 0x21e18d4 size 0x10 virtual false final false
 void _ctor(bool isError, GlobalNamespace::IBeatmapLevel beatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4356))
// CS Name: BeatmapLevelLoader::<LoadBeatmapLevelAsync>d__4
struct CORDL_TYPE GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BeatmapLevelLoader", modifiers: "", def_value: None }, CppParam { name: "previewLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_level_5__2", ty: "GlobalNamespace::IBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __t__builder, GlobalNamespace::BeatmapLevelLoader __4__this, GlobalNamespace::IPreviewBeatmapLevel previewLevel, System::Threading::CancellationToken cancellationToken, GlobalNamespace::IBeatmapLevel _level_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __u__3) noexcept;


                    constexpr GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4 const&) = default;
                    constexpr GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4&&) = default;
                    constexpr GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4& operator=(GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4& operator=(GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get___t__builder() const;

 GlobalNamespace::BeatmapLevelLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BeatmapLevelLoader value) ;

constexpr GlobalNamespace::BeatmapLevelLoader __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewLevel, put=__set_previewLevel))  previewLevel;

constexpr void __set_previewLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewLevel() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__level_5__2, put=__set__level_5__2))  _level_5__2;

constexpr void __set__level_5__2(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__level_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevel> __get___u__3() const;


// Methods

/// @brief Method MoveNext addr 0x21e18e4 size 0x6d0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21e1fb4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4357))
// CS Name: BeatmapLevelLoader
class CORDL_TYPE BeatmapLevelLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _LoadBeatmapLevelAsync_d__4 = GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4;

using LoadBeatmapLevelResult = GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapLevelLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelLoader(BeatmapLevelLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelLoader", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelLoader(BeatmapLevelLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelLoader& operator=(BeatmapLevelLoader&& o) noexcept = default;
  constexpr BeatmapLevelLoader& operator=(BeatmapLevelLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelDataLoader __declspec(property(get=__get__beatmapLevelDataLoader, put=__set__beatmapLevelDataLoader))  _beatmapLevelDataLoader;

constexpr void __set__beatmapLevelDataLoader(GlobalNamespace::BeatmapLevelDataLoader value) ;

constexpr GlobalNamespace::BeatmapLevelDataLoader __get__beatmapLevelDataLoader() const;

 GlobalNamespace::IBeatmapDataAssetFileModel __declspec(property(get=__get__beatmapDataAssetFileModel, put=__set__beatmapDataAssetFileModel))  _beatmapDataAssetFileModel;

constexpr void __set__beatmapDataAssetFileModel(GlobalNamespace::IBeatmapDataAssetFileModel value) ;

constexpr GlobalNamespace::IBeatmapDataAssetFileModel __get__beatmapDataAssetFileModel() const;


// Methods

static GlobalNamespace::BeatmapLevelLoader New_ctor(GlobalNamespace::BeatmapLevelDataLoader beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel beatmapDataAssetFileModel) ;

/// @brief Method .ctor addr 0x21e1794 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::BeatmapLevelDataLoader beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel beatmapDataAssetFileModel) ;

/// @brief Method LoadBeatmapLevelAsync addr 0x21e17c0 size 0x114 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> LoadBeatmapLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewLevel, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelLoader, "", "BeatmapLevelLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult, "", "BeatmapLevelLoader/LoadBeatmapLevelResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapLevelLoader___LoadBeatmapLevelAsync_d__4, "", "BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4");
