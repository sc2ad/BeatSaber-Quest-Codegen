#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class AudioClip;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class IReferenceCountingCache_2;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioClipAsyncLoader____c;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__AudioClipAsyncLoader___Unload_d__21;
}
// Type: ::LoadMethodDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5971))
// CS Name: AudioClipAsyncLoader::LoadMethodDelegate
class CORDL_TYPE GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate& operator=(GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate& operator=(GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21a12e8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21a13a4 size 0x14 virtual true final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Invoke() ;

/// @brief Method BeginInvoke addr 0x21a13b8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21a13d8 size 0xc virtual true final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass16_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5972))
// CS Name: AudioClipAsyncLoader::<>c__DisplayClass16_0
class CORDL_TYPE GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0& operator=(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0&& o) noexcept = default;
  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0& operator=(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get_audioClip, put=__set_audioClip))  audioClip;

constexpr void __set_audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get_audioClip() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0() ;

/// @brief Method .ctor addr 0x21a13e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Load>b__0 addr 0x21a13ec size 0x70 virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> _Load_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass17_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5973))
// CS Name: AudioClipAsyncLoader::<>c__DisplayClass17_0
class CORDL_TYPE GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0& operator=(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0&& o) noexcept = default;
  constexpr GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0& operator=(GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioClipAsyncLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AudioClipAsyncLoader value) ;

constexpr GlobalNamespace::AudioClipAsyncLoader __get___4__this() const;

 ::StringW __declspec(property(get=__get_audioClipFilePath, put=__set_audioClipFilePath))  audioClipFilePath;

constexpr void __set_audioClipFilePath(::StringW value) ;

constexpr ::StringW __get_audioClipFilePath() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0() ;

/// @brief Method .ctor addr 0x21a145c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Load>b__0 addr 0x21a1464 size 0xb0 virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> _Load_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5974))
// CS Name: AudioClipAsyncLoader::<>c
class CORDL_TYPE GlobalNamespace__AudioClipAsyncLoader____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__AudioClipAsyncLoader____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c(GlobalNamespace__AudioClipAsyncLoader____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioClipAsyncLoader____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader____c(GlobalNamespace__AudioClipAsyncLoader____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipAsyncLoader____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioClipAsyncLoader____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioClipAsyncLoader____c& operator=(GlobalNamespace__AudioClipAsyncLoader____c&& o) noexcept = default;
  constexpr GlobalNamespace__AudioClipAsyncLoader____c& operator=(GlobalNamespace__AudioClipAsyncLoader____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c value) ;

static GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c __get___9() ;

static System::Action_1<UnityEngine::AudioClip> __declspec(property(get=__get___9__19_0, put=__set___9__19_0))  __9__19_0;

static void __set___9__19_0(System::Action_1<UnityEngine::AudioClip> value) ;

static System::Action_1<UnityEngine::AudioClip> __get___9__19_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AudioClipAsyncLoader____c() ;

/// @brief Method .ctor addr 0x21a1578 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Unload>b__19_0 addr 0x21a1580 size 0x18 virtual false final false
 void _Unload_b__19_0(UnityEngine::AudioClip loadedAudioClip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Unload>d__21
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5975))
// CS Name: AudioClipAsyncLoader::<Unload>d__21
struct CORDL_TYPE GlobalNamespace__AudioClipAsyncLoader___Unload_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::AudioClipAsyncLoader", modifiers: "", def_value: None }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onDelete", ty: "System::Action_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::AudioClipAsyncLoader __4__this, int32_t cacheKey, System::Action_1<UnityEngine::AudioClip> onDelete, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept;


                    constexpr GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(GlobalNamespace__AudioClipAsyncLoader___Unload_d__21 const&) = default;
                    constexpr GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(GlobalNamespace__AudioClipAsyncLoader___Unload_d__21&&) = default;
                    constexpr GlobalNamespace__AudioClipAsyncLoader___Unload_d__21& operator=(GlobalNamespace__AudioClipAsyncLoader___Unload_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AudioClipAsyncLoader___Unload_d__21& operator=(GlobalNamespace__AudioClipAsyncLoader___Unload_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioClipAsyncLoader___Unload_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::AudioClipAsyncLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AudioClipAsyncLoader value) ;

constexpr GlobalNamespace::AudioClipAsyncLoader __get___4__this() const;

 int32_t __declspec(property(get=__get_cacheKey, put=__set_cacheKey))  cacheKey;

constexpr void __set_cacheKey(int32_t value) ;

constexpr int32_t __get_cacheKey() const;

 System::Action_1<UnityEngine::AudioClip> __declspec(property(get=__get_onDelete, put=__set_onDelete))  onDelete;

constexpr void __set_onDelete(System::Action_1<UnityEngine::AudioClip> value) ;

constexpr System::Action_1<UnityEngine::AudioClip> __get_onDelete() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a1598 size 0x388 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a1920 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioClipAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5976))
// CS Name: AudioClipAsyncLoader
class CORDL_TYPE AudioClipAsyncLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Unload_d__21 = GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21;

using __c = GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c;

using __c__DisplayClass17_0 = GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0;

using __c__DisplayClass16_0 = GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0;

using LoadMethodDelegate = GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioClipAsyncLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: " const&", def_value: None }]
constexpr AudioClipAsyncLoader(AudioClipAsyncLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: "&&", def_value: None }]
constexpr AudioClipAsyncLoader(AudioClipAsyncLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioClipAsyncLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioClipAsyncLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioClipAsyncLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioClipAsyncLoader& operator=(AudioClipAsyncLoader&& o) noexcept = default;
  constexpr AudioClipAsyncLoader& operator=(AudioClipAsyncLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> __declspec(property(get=__get__cache, put=__set__cache))  _cache;

constexpr void __set__cache(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> value) ;

constexpr GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> __get__cache() const;

 GlobalNamespace::IMediaAsyncLoader __declspec(property(get=__get__mediaAsyncLoader, put=__set__mediaAsyncLoader))  _mediaAsyncLoader;

constexpr void __set__mediaAsyncLoader(GlobalNamespace::IMediaAsyncLoader value) ;

constexpr GlobalNamespace::IMediaAsyncLoader __get__mediaAsyncLoader() const;


// Methods

// Ctor Parameters [CppParam { name: "cache", ty: "GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "mediaAsyncLoader", ty: "GlobalNamespace::IMediaAsyncLoader", modifiers: "", def_value: None }]
explicit AudioClipAsyncLoader(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> cache, GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader) ;

/// @brief Method .ctor addr 0x219ef9c size 0x2c virtual false final false
 void _ctor(GlobalNamespace::IReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>> cache, GlobalNamespace::IMediaAsyncLoader mediaAsyncLoader) ;

/// @brief Method LoadPreview addr 0x219efc8 size 0x1f4 virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> LoadPreview(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

/// @brief Method LoadSong addr 0x219f314 size 0x1f4 virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> LoadSong(GlobalNamespace::IBeatmapLevel beatmapLevel) ;

/// @brief Method UnloadPreview addr 0x219f660 size 0x1b4 virtual false final false
 void UnloadPreview(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

/// @brief Method UnloadSong addr 0x219f96c size 0x1b4 virtual false final false
 void UnloadSong(GlobalNamespace::IBeatmapLevel beatmapLevel) ;

/// @brief Method Load addr 0x219f1bc size 0xac virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(GlobalNamespace::IAssetSongPreviewAudioClipProvider source) ;

/// @brief Method Load addr 0x219f508 size 0xac virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(GlobalNamespace::IAssetSongAudioClipProvider source) ;

/// @brief Method Load addr 0x219f268 size 0xac virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(GlobalNamespace::IFilePathSongPreviewAudioClipProvider source) ;

/// @brief Method Load addr 0x219f5b4 size 0xac virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(GlobalNamespace::IFilePathSongAudioClipProvider source) ;

/// @brief Method Unload addr 0x219f814 size 0xac virtual false final false
 void Unload(GlobalNamespace::IAssetSongPreviewAudioClipProvider source) ;

/// @brief Method Unload addr 0x219fb20 size 0xac virtual false final false
 void Unload(GlobalNamespace::IAssetSongAudioClipProvider source) ;

/// @brief Method Unload addr 0x219f8c0 size 0xac virtual false final false
 void Unload(GlobalNamespace::IFilePathSongPreviewAudioClipProvider source) ;

/// @brief Method Unload addr 0x219fbcc size 0xac virtual false final false
 void Unload(GlobalNamespace::IFilePathSongAudioClipProvider source) ;

/// @brief Method Load addr 0x219fc78 size 0xdc virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(UnityEngine::AudioClip audioClip) ;

/// @brief Method Load addr 0x219fd54 size 0xdc virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(::StringW audioClipFilePath) ;

/// @brief Method Load addr 0x21a0000 size 0x1c4 virtual false final false
 System::Threading::Tasks::Task_1<UnityEngine::AudioClip> Load(int32_t cacheKey, GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate loadMethodDelegate) ;

/// @brief Method Unload addr 0x219fe30 size 0x10c virtual false final false
 void Unload(UnityEngine::AudioClip audioClip) ;

/// @brief Method Unload addr 0x219ff3c size 0xa4 virtual false final false
 void Unload(::StringW audioClipFilePath) ;

/// @brief Method Unload addr 0x21a01e4 size 0xac virtual false final false
 void Unload(int32_t cacheKey, System::Action_1<UnityEngine::AudioClip> onDelete) ;

/// @brief Method GetCacheKey addr 0x219ffe0 size 0x20 virtual false final false
 int32_t GetCacheKey(UnityEngine::AudioClip audioClip) ;

/// @brief Method GetCacheKey addr 0x21a01c4 size 0x20 virtual false final false
 int32_t GetCacheKey(::StringW audioClipFilePath) ;

/// @brief Method LogError addr 0x21a0290 size 0x1058 virtual false final false
static void LogError(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioClipAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipAsyncLoader, "", "AudioClipAsyncLoader");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader__LoadMethodDelegate, "", "AudioClipAsyncLoader/LoadMethodDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c, "", "AudioClipAsyncLoader/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass16_0, "", "AudioClipAsyncLoader/<>c__DisplayClass16_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader____c__DisplayClass17_0, "", "AudioClipAsyncLoader/<>c__DisplayClass17_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioClipAsyncLoader___Unload_d__21, "", "AudioClipAsyncLoader/<Unload>d__21");
