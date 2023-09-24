#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelBar___Setup_d__17;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelBar___Setup_d__17;
}
// Type: ::<Setup>d__17
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5877))
// CS Name: LevelBar::<Setup>d__17
struct CORDL_TYPE GlobalNamespace__LevelBar___Setup_d__17 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LevelBar", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelBar___Setup_d__17(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LevelBar __4__this, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __u__1) noexcept;


                    constexpr GlobalNamespace__LevelBar___Setup_d__17(GlobalNamespace__LevelBar___Setup_d__17 const&) = default;
                    constexpr GlobalNamespace__LevelBar___Setup_d__17(GlobalNamespace__LevelBar___Setup_d__17&&) = default;
                    constexpr GlobalNamespace__LevelBar___Setup_d__17& operator=(GlobalNamespace__LevelBar___Setup_d__17 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelBar___Setup_d__17& operator=(GlobalNamespace__LevelBar___Setup_d__17&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelBar___Setup_d__17(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LevelBar __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::Sprite> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2189634 size 0x940 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2189f74 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelBar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5878))
// CS Name: LevelBar
class CORDL_TYPE LevelBar : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Setup_d__17 = GlobalNamespace::GlobalNamespace__LevelBar___Setup_d__17;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~LevelBar() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: " const&", def_value: None }]
constexpr LevelBar(LevelBar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelBar", modifiers: "&&", def_value: None }]
constexpr LevelBar(LevelBar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelBar(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LevelBar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelBar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelBar& operator=(LevelBar&& o) noexcept = default;
  constexpr LevelBar& operator=(LevelBar const& o) noexcept = default;
                


// Fields

 HMUI::ImageView __declspec(property(get=__get__songArtworkImageView, put=__set__songArtworkImageView))  _songArtworkImageView;

constexpr void __set__songArtworkImageView(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__songArtworkImageView() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__songNameText, put=__set__songNameText))  _songNameText;

constexpr void __set__songNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__songNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__authorNameText, put=__set__authorNameText))  _authorNameText;

constexpr void __set__authorNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__authorNameText() const;

 bool __declspec(property(get=__get__showSongSubName, put=__set__showSongSubName))  _showSongSubName;

constexpr void __set__showSongSubName(bool value) ;

constexpr bool __get__showSongSubName() const;

 UnityEngine::GameObject __declspec(property(get=__get__singleLineSongInfoContainer, put=__set__singleLineSongInfoContainer))  _singleLineSongInfoContainer;

constexpr void __set__singleLineSongInfoContainer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__singleLineSongInfoContainer() const;

 UnityEngine::GameObject __declspec(property(get=__get__multiLineSongInfoContainer, put=__set__multiLineSongInfoContainer))  _multiLineSongInfoContainer;

constexpr void __set__multiLineSongInfoContainer(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__multiLineSongInfoContainer() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__multiLineSongNameText, put=__set__multiLineSongNameText))  _multiLineSongNameText;

constexpr void __set__multiLineSongNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__multiLineSongNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__multiLineAuthorNameText, put=__set__multiLineAuthorNameText))  _multiLineAuthorNameText;

constexpr void __set__multiLineAuthorNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__multiLineAuthorNameText() const;

 bool __declspec(property(get=__get__showDifficultyAndCharacteristic, put=__set__showDifficultyAndCharacteristic))  _showDifficultyAndCharacteristic;

constexpr void __set__showDifficultyAndCharacteristic(bool value) ;

constexpr bool __get__showDifficultyAndCharacteristic() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__difficultyText, put=__set__difficultyText))  _difficultyText;

constexpr void __set__difficultyText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__difficultyText() const;

 HMUI::ImageView __declspec(property(get=__get__characteristicIconImageView, put=__set__characteristicIconImageView))  _characteristicIconImageView;

constexpr void __set__characteristicIconImageView(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__characteristicIconImageView() const;

 bool __declspec(property(get=__get__useArtworkBackground, put=__set__useArtworkBackground))  _useArtworkBackground;

constexpr void __set__useArtworkBackground(bool value) ;

constexpr bool __get__useArtworkBackground() const;

 HMUI::ImageView __declspec(property(get=__get__artworkBackgroundImage, put=__set__artworkBackgroundImage))  _artworkBackgroundImage;

constexpr void __set__artworkBackgroundImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__artworkBackgroundImage() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;


// Methods

/// @brief Method set_hide addr 0x2189524 size 0x2c virtual false final false
 void set_hide(bool value) ;

/// @brief Method Setup addr 0x2189550 size 0xc virtual false final false
 void Setup(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method Setup addr 0x218955c size 0xbc virtual false final false
 void Setup(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) ;

/// @brief Method OnDestroy addr 0x2189618 size 0x14 virtual false final false
 void OnDestroy() ;

static GlobalNamespace::LevelBar New_ctor() ;

/// @brief Method .ctor addr 0x218962c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelBar);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelBar, "", "LevelBar");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelBar___Setup_d__17, "", "LevelBar/<Setup>d__17");
