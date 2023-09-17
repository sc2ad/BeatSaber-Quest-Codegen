#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
// Type: ::IFilePathSongAudioClipProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5981))
// CS Name: IFilePathSongAudioClipProvider
class CORDL_TYPE IFilePathSongAudioClipProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFilePathSongAudioClipProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFilePathSongAudioClipProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_songAudioClipPath))  songAudioClipPath;


// Methods

/// @brief Method get_songAudioClipPath addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_songAudioClipPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IFilePathSongAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFilePathSongAudioClipProvider, "", "IFilePathSongAudioClipProvider");
