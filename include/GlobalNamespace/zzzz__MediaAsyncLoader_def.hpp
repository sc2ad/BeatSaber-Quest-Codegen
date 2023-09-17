#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class MediaAsyncLoader;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0;
}
// Type: ::<LoadWebpage>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5988))
// CS Name: MediaAsyncLoader::<LoadWebpage>d__0
struct CORDL_TYPE ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW uri, ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest _www_5__2, ::UnityEngine::AsyncOperation _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0(____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0 const&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0(____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0&&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0& operator=(____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0& operator=(____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(::StringW value) ;

constexpr ::StringW __get_uri() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__2, put=__set__www_5__2))  _www_5__2;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest __get__www_5__2() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get__request_5__3, put=__set__request_5__3))  _request_5__3;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get__request_5__3() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a21bc size 0x43c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a25f8 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadAudioClipFromFilePathAsync>d__1
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5989))
// CS Name: MediaAsyncLoader::<LoadAudioClipFromFilePathAsync>d__1
struct CORDL_TYPE ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> __t__builder, ::StringW filePath, ::UnityEngine::Networking::UnityWebRequest _www_5__2, ::UnityEngine::AsyncOperation _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1 const&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1&&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1& operator=(____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1& operator=(____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_filePath, put=__set_filePath))  filePath;

constexpr void __set_filePath(::StringW value) ;

constexpr ::StringW __get_filePath() const;

 ::UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__2, put=__set__www_5__2))  _www_5__2;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest __get__www_5__2() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get__request_5__3, put=__set__request_5__3))  _request_5__3;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get__request_5__3() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a2650 size 0x478 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a2ac8 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadTextureAsync>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5990))
// CS Name: MediaAsyncLoader::<LoadTextureAsync>d__2
struct CORDL_TYPE ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D> __t__builder, ::StringW path, ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest _www_5__2, ::UnityEngine::AsyncOperation _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2(____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2 const&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2(____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2&&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2& operator=(____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2& operator=(____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__2, put=__set__www_5__2))  _www_5__2;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest __get__www_5__2() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get__request_5__3, put=__set__request_5__3))  _request_5__3;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get__request_5__3() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a2b20 size 0x434 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a2f54 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<LoadSpriteAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5991))
// CS Name: MediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __t__builder, ::StringW path, ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest _www_5__2, ::UnityEngine::AsyncOperation _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3(____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3 const&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3(____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3&&) = default;
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3& operator=(____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3& operator=(____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get_cancellationToken() const;

 ::UnityEngine::Networking::UnityWebRequest __declspec(property(get=__get__www_5__2, put=__set__www_5__2))  _www_5__2;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest __get__www_5__2() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get__request_5__3, put=__set__request_5__3))  _request_5__3;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get__request_5__3() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a2fac size 0x5ec virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a3598 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MediaAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5992))
// CS Name: MediaAsyncLoader
class CORDL_TYPE MediaAsyncLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _LoadSpriteAsync_d__3 = ::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3;

using _LoadTextureAsync_d__2 = ::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2;

using _LoadAudioClipFromFilePathAsync_d__1 = ::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;

using _LoadWebpage_d__0 = ::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0;

/// @brief Convert operator to ::GlobalNamespace::IMediaAsyncLoader
constexpr operator  ::GlobalNamespace::IMediaAsyncLoader() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MediaAsyncLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: " const&", def_value: None }]
constexpr MediaAsyncLoader(MediaAsyncLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "&&", def_value: None }]
constexpr MediaAsyncLoader(MediaAsyncLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MediaAsyncLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MediaAsyncLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MediaAsyncLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MediaAsyncLoader& operator=(MediaAsyncLoader&& o) noexcept = default;
  constexpr MediaAsyncLoader& operator=(MediaAsyncLoader const& o) noexcept = default;
                


// Methods

/// @brief Method LoadWebpage addr 0x21a1d78 size 0xfc virtual false final false
static ::System::Threading::Tasks::Task_1<::StringW> LoadWebpage(::StringW uri, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LoadAudioClipFromFilePathAsync addr 0x21a1e74 size 0xf0 virtual true final true
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> LoadAudioClipFromFilePathAsync(::StringW filePath) ;

/// @brief Method LoadTextureAsync addr 0x21a1f64 size 0xfc virtual false final false
static ::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D> LoadTextureAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method LoadSpriteAsync addr 0x21a2060 size 0xfc virtual false final false
static ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite> LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Log addr 0x21a215c size 0x58 virtual false final false
static void Log(::StringW message) ;

// Ctor Parameters []
explicit MediaAsyncLoader() ;

/// @brief Method .ctor addr 0x21a21b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader, "", "MediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, "", "MediaAsyncLoader/<LoadAudioClipFromFilePathAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadSpriteAsync_d__3, "", "MediaAsyncLoader/<LoadSpriteAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadTextureAsync_d__2, "", "MediaAsyncLoader/<LoadTextureAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MediaAsyncLoader___LoadWebpage_d__0, "", "MediaAsyncLoader/<LoadWebpage>d__0");
