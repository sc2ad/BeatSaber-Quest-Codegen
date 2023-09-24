#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
// Type: ::IServerBeatmapProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12755))
// CS Name: IServerBeatmapProvider
class CORDL_TYPE IServerBeatmapProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IServerBeatmapProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServerBeatmapProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method VerifyBeatmapForSelectionMask addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifyBeatmapForSelectionMask(GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask) ;

/// @brief Method SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapIdentifierNetSerializable SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t playerCount, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable> beatmapsSuggestedByPlayers, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> playerOwnedSongPacks) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IServerBeatmapProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerBeatmapProvider, "", "IServerBeatmapProvider");
