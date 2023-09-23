#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerSongPackProvider;
}
// Type: ::IServerSongPackProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12757))
// CS Name: IServerSongPackProvider
class CORDL_TYPE IServerSongPackProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IServerSongPackProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServerSongPackProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DecomposeSongPackMask addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<GlobalNamespace::SongPackMask> DecomposeSongPackMask(GlobalNamespace::SongPackMask songPackMask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IServerSongPackProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerSongPackProvider, "", "IServerSongPackProvider");
