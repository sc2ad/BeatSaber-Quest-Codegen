#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class CancellationTokenSource;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
struct GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BlurredCoverImageView;
}
namespace GlobalNamespace {
struct GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6;
}
// Type: ::<SetTextureAsync>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5861))
// CS Name: BlurredCoverImageView::<SetTextureAsync>d__6
struct CORDL_TYPE GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::BlurredCoverImageView", modifiers: "", def_value: None }, CppParam { name: "level", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::BlurredCoverImageView __4__this, GlobalNamespace::IPreviewBeatmapLevel level, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6(GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6 const&) = default;
                    constexpr GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6(GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6&&) = default;
                    constexpr GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6& operator=(GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6& operator=(GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::BlurredCoverImageView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BlurredCoverImageView value) ;

constexpr GlobalNamespace::BlurredCoverImageView __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_level() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2185388 size 0x808 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2185b90 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BlurredCoverImageView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5862))
// CS Name: BlurredCoverImageView
class CORDL_TYPE BlurredCoverImageView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetTextureAsync_d__6 = GlobalNamespace::GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BlurredCoverImageView() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: " const&", def_value: None }]
constexpr BlurredCoverImageView(BlurredCoverImageView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlurredCoverImageView", modifiers: "&&", def_value: None }]
constexpr BlurredCoverImageView(BlurredCoverImageView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlurredCoverImageView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BlurredCoverImageView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlurredCoverImageView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlurredCoverImageView& operator=(BlurredCoverImageView&& o) noexcept = default;
  constexpr BlurredCoverImageView& operator=(BlurredCoverImageView const& o) noexcept = default;
                


// Fields

 HMUI::ImageView __declspec(property(get=__get__coverImage, put=__set__coverImage))  _coverImage;

constexpr void __set__coverImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__coverImage() const;

 GlobalNamespace::KawaseBlurRendererSO __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer))  _kawaseBlurRenderer;

constexpr void __set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value) ;

constexpr GlobalNamespace::KawaseBlurRendererSO __get__kawaseBlurRenderer() const;

 ::StringW __declspec(property(get=__get__settingTextureForLevelId, put=__set__settingTextureForLevelId))  _settingTextureForLevelId;

constexpr void __set__settingTextureForLevelId(::StringW value) ;

constexpr ::StringW __get__settingTextureForLevelId() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;

 UnityEngine::Texture2D __declspec(property(get=__get__blurredCoverTexture, put=__set__blurredCoverTexture))  _blurredCoverTexture;

constexpr void __set__blurredCoverTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__blurredCoverTexture() const;


// Methods

/// @brief Method OnDestroy addr 0x218523c size 0xa4 virtual false final false
 void OnDestroy() ;

/// @brief Method SetTextureAsync addr 0x21852e0 size 0xa0 virtual false final false
 void SetTextureAsync(GlobalNamespace::IPreviewBeatmapLevel level) ;

static GlobalNamespace::BlurredCoverImageView New_ctor() ;

/// @brief Method .ctor addr 0x2185380 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BlurredCoverImageView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlurredCoverImageView, "", "BlurredCoverImageView");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BlurredCoverImageView___SetTextureAsync_d__6, "", "BlurredCoverImageView/<SetTextureAsync>d__6");
