#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class PlaybackRenderer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaybackScreenshotRecorder;
}
// Type: ::PlaybackScreenshotRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6015))
// CS Name: PlaybackScreenshotRecorder
class CORDL_TYPE PlaybackScreenshotRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlaybackScreenshotRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: " const&", def_value: None }]
constexpr PlaybackScreenshotRecorder(PlaybackScreenshotRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackScreenshotRecorder", modifiers: "&&", def_value: None }]
constexpr PlaybackScreenshotRecorder(PlaybackScreenshotRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlaybackScreenshotRecorder(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlaybackScreenshotRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlaybackScreenshotRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlaybackScreenshotRecorder& operator=(PlaybackScreenshotRecorder&& o) noexcept = default;
  constexpr PlaybackScreenshotRecorder& operator=(PlaybackScreenshotRecorder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__directory, put=__set__directory))  _directory;

constexpr void __set__directory(::StringW value) ;

constexpr ::StringW __get__directory() const;

 ::GlobalNamespace::PlaybackRenderer __declspec(property(get=__get__playbackRenderer, put=__set__playbackRenderer))  _playbackRenderer;

constexpr void __set__playbackRenderer(::GlobalNamespace::PlaybackRenderer value) ;

constexpr ::GlobalNamespace::PlaybackRenderer __get__playbackRenderer() const;

 int32_t __declspec(property(get=__get__frameNumber, put=__set__frameNumber))  _frameNumber;

constexpr void __set__frameNumber(int32_t value) ;

constexpr int32_t __get__frameNumber() const;


// Properties

 ::StringW __declspec(property(get=get_directory))  directory;


// Methods

/// @brief Method get_directory addr 0x21a6080 size 0x8 virtual false final false
 ::StringW get_directory() ;

/// @brief Method OnEnable addr 0x21a6088 size 0x88 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x21a6110 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method Init addr 0x21a49b8 size 0xf4 virtual false final false
 void Init(::StringW directory, int32_t framerate, ::GlobalNamespace::PlaybackRenderer playbackRenderer) ;

/// @brief Method HandleTexturesReady addr 0x21a6198 size 0x7c virtual false final false
 void HandleTexturesReady() ;

/// @brief Method SaveScreenshot addr 0x21a6214 size 0x134 virtual false final false
 void SaveScreenshot(::UnityEngine::RenderTexture renderTexture, ::StringW directory) ;

/// @brief Method ConvertRenderTexture addr 0x21a6348 size 0x11c virtual false final false
static ::UnityEngine::Texture2D ConvertRenderTexture(::UnityEngine::RenderTexture renderTexture) ;

// Ctor Parameters []
explicit PlaybackScreenshotRecorder() ;

/// @brief Method .ctor addr 0x21a6464 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlaybackScreenshotRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaybackScreenshotRecorder, "", "PlaybackScreenshotRecorder");
