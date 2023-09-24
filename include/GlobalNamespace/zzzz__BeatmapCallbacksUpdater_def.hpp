#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
// Type: ::BeatmapCallbacksUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4825))
// CS Name: BeatmapCallbacksUpdater
class CORDL_TYPE BeatmapCallbacksUpdater : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapCallbacksUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: " const&", def_value: None }]
constexpr BeatmapCallbacksUpdater(BeatmapCallbacksUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksUpdater", modifiers: "&&", def_value: None }]
constexpr BeatmapCallbacksUpdater(BeatmapCallbacksUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCallbacksUpdater(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapCallbacksUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCallbacksUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCallbacksUpdater& operator=(BeatmapCallbacksUpdater&& o) noexcept = default;
  constexpr BeatmapCallbacksUpdater& operator=(BeatmapCallbacksUpdater const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;


// Methods

/// @brief Method LateUpdate addr 0x2231eb8 size 0x124 virtual false final false
 void LateUpdate() ;

/// @brief Method Pause addr 0x2231fdc size 0xc virtual false final false
 void Pause() ;

/// @brief Method Resume addr 0x2231fe8 size 0xc virtual false final false
 void Resume() ;

static GlobalNamespace::BeatmapCallbacksUpdater New_ctor() ;

/// @brief Method .ctor addr 0x2231ff4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCallbacksUpdater);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbacksUpdater, "", "BeatmapCallbacksUpdater");
