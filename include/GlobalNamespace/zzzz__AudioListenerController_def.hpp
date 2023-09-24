#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class AudioListenerController;
}
// Type: ::AudioListenerController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4031))
// CS Name: AudioListenerController
class CORDL_TYPE AudioListenerController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AudioListenerController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: " const&", def_value: None }]
constexpr AudioListenerController(AudioListenerController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioListenerController", modifiers: "&&", def_value: None }]
constexpr AudioListenerController(AudioListenerController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioListenerController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioListenerController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioListenerController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioListenerController& operator=(AudioListenerController&& o) noexcept = default;
  constexpr AudioListenerController& operator=(AudioListenerController const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__startAudioListenerPauseState, put=__set__startAudioListenerPauseState))  _startAudioListenerPauseState;

constexpr void __set__startAudioListenerPauseState(bool value) ;

constexpr bool __get__startAudioListenerPauseState() const;


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x20b89dc size 0x8 virtual false final false
 bool get_isPaused() ;

/// @brief Method Awake addr 0x20b89e4 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20b8a04 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method Pause addr 0x20b8a10 size 0xc virtual false final false
 void Pause() ;

/// @brief Method Resume addr 0x20b8a1c size 0xc virtual false final false
 void Resume() ;

static GlobalNamespace::AudioListenerController New_ctor() ;

/// @brief Method .ctor addr 0x20b8a28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioListenerController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioListenerController, "", "AudioListenerController");
