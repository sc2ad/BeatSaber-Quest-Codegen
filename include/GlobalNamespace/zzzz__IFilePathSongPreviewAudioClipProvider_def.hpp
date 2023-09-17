#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
// Type: ::IFilePathSongPreviewAudioClipProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5982))
// CS Name: IFilePathSongPreviewAudioClipProvider
class CORDL_TYPE IFilePathSongPreviewAudioClipProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFilePathSongPreviewAudioClipProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFilePathSongPreviewAudioClipProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_songPreviewAudioClipPath))  songPreviewAudioClipPath;


// Methods

/// @brief Method get_songPreviewAudioClipPath addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_songPreviewAudioClipPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider, "", "IFilePathSongPreviewAudioClipProvider");
