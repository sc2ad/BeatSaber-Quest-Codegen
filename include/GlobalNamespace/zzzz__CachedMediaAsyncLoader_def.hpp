#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Sprite;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCachedLoader_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
class CachedMediaAsyncLoader;
}
namespace GlobalNamespace {
struct GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3;
}
// Type: ::<LoadSpriteAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5999))
// CS Name: CachedMediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::CachedMediaAsyncLoader", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __t__builder, GlobalNamespace::CachedMediaAsyncLoader __4__this, ::StringW path, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3 const&) = default;
                    constexpr GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3&&) = default;
                    constexpr GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3& operator=(GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3& operator=(GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<UnityEngine::Sprite> __get___t__builder() const;

 GlobalNamespace::CachedMediaAsyncLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::CachedMediaAsyncLoader value) ;

constexpr GlobalNamespace::CachedMediaAsyncLoader __get___4__this() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a375c size 0x2c0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a3a1c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CachedMediaAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6000))
// CS Name: CachedMediaAsyncLoader
class CORDL_TYPE CachedMediaAsyncLoader : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadSpriteAsync_d__3 = GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3;

/// @brief Convert operator to GlobalNamespace::ISpriteAsyncLoader
constexpr operator  GlobalNamespace::ISpriteAsyncLoader() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CachedMediaAsyncLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: " const&", def_value: None }]
constexpr CachedMediaAsyncLoader(CachedMediaAsyncLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "&&", def_value: None }]
constexpr CachedMediaAsyncLoader(CachedMediaAsyncLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedMediaAsyncLoader(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CachedMediaAsyncLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedMediaAsyncLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedMediaAsyncLoader& operator=(CachedMediaAsyncLoader&& o) noexcept = default;
  constexpr CachedMediaAsyncLoader& operator=(CachedMediaAsyncLoader const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__maxNumberOfSpriteCachedElements, put=__set__maxNumberOfSpriteCachedElements))  _maxNumberOfSpriteCachedElements;

constexpr void __set__maxNumberOfSpriteCachedElements(int32_t value) ;

constexpr int32_t __get__maxNumberOfSpriteCachedElements() const;

 GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite> __declspec(property(get=__get__spriteAsyncCachedLoader, put=__set__spriteAsyncCachedLoader))  _spriteAsyncCachedLoader;

constexpr void __set__spriteAsyncCachedLoader(GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite> value) ;

constexpr GlobalNamespace::AsyncCachedLoader_2<::StringW,UnityEngine::Sprite> __get__spriteAsyncCachedLoader() const;


// Methods

/// @brief Method ClearCache addr 0x21a35f0 size 0x58 virtual false final false
 void ClearCache() ;

/// @brief Method LoadSpriteAsync addr 0x21a3648 size 0x104 virtual true final true
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit CachedMediaAsyncLoader() ;

/// @brief Method .ctor addr 0x21a374c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CachedMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CachedMediaAsyncLoader, "", "CachedMediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, "", "CachedMediaAsyncLoader/<LoadSpriteAsync>d__3");
