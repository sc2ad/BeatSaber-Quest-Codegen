#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class AudioPlayerBase;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPreviewPlayerPauseOnInputFocusLost;
}
// Type: ::SongPreviewPlayerPauseOnInputFocusLost
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4068))
// CS Name: SongPreviewPlayerPauseOnInputFocusLost
class CORDL_TYPE SongPreviewPlayerPauseOnInputFocusLost : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SongPreviewPlayerPauseOnInputFocusLost() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: " const&", def_value: None }]
constexpr SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayerPauseOnInputFocusLost", modifiers: "&&", def_value: None }]
constexpr SongPreviewPlayerPauseOnInputFocusLost(SongPreviewPlayerPauseOnInputFocusLost&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPreviewPlayerPauseOnInputFocusLost(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongPreviewPlayerPauseOnInputFocusLost& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPreviewPlayerPauseOnInputFocusLost& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPreviewPlayerPauseOnInputFocusLost& operator=(SongPreviewPlayerPauseOnInputFocusLost&& o) noexcept = default;
  constexpr SongPreviewPlayerPauseOnInputFocusLost& operator=(SongPreviewPlayerPauseOnInputFocusLost const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioPlayerBase __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::AudioPlayerBase value) ;

constexpr GlobalNamespace::AudioPlayerBase __get__songPreviewPlayer() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Methods

/// @brief Method Start addr 0x20bec88 size 0x210 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20beedc size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleInputFocusCaptured addr 0x20bee98 size 0x44 virtual false final false
 void HandleInputFocusCaptured() ;

/// @brief Method HandleInputFocusReleased addr 0x20bf080 size 0x44 virtual false final false
 void HandleInputFocusReleased() ;

// Ctor Parameters []
explicit SongPreviewPlayerPauseOnInputFocusLost() ;

/// @brief Method .ctor addr 0x20bf0c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost, "", "SongPreviewPlayerPauseOnInputFocusLost");
