#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
// Type: ::IAssetSongAudioClipProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5979))
// CS Name: IAssetSongAudioClipProvider
class CORDL_TYPE IAssetSongAudioClipProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAssetSongAudioClipProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAssetSongAudioClipProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::AudioClip __declspec(property(get=get_songAudioClip))  songAudioClip;


// Methods

/// @brief Method get_songAudioClip addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::AudioClip get_songAudioClip() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IAssetSongAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongAudioClipProvider, "", "IAssetSongAudioClipProvider");
