#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
// Type: ::IAssetSongPreviewAudioClipProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5980))
// CS Name: IAssetSongPreviewAudioClipProvider
class CORDL_TYPE IAssetSongPreviewAudioClipProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAssetSongPreviewAudioClipProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAssetSongPreviewAudioClipProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::AudioClip __declspec(property(get=get_songPreviewAudioClip))  songPreviewAudioClip;


// Methods

/// @brief Method get_songPreviewAudioClip addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::AudioClip get_songPreviewAudioClip() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongPreviewAudioClipProvider, "", "IAssetSongPreviewAudioClipProvider");
