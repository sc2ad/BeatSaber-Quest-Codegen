#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SongController;
}
// Type: ::SongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5424))
// CS Name: SongController
class CORDL_TYPE SongController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SongController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: " const&", def_value: None }]
constexpr SongController(SongController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongController", modifiers: "&&", def_value: None }]
constexpr SongController(SongController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongController& operator=(SongController&& o) noexcept = default;
  constexpr SongController& operator=(SongController const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_songDidFinishEvent, put=__set_songDidFinishEvent))  songDidFinishEvent;

constexpr void __set_songDidFinishEvent(System::Action value) ;

constexpr System::Action __get_songDidFinishEvent() const;


// Methods

/// @brief Method add_songDidFinishEvent addr 0x2110c84 size 0x9c virtual false final false
 void add_songDidFinishEvent(System::Action value) ;

/// @brief Method remove_songDidFinishEvent addr 0x2110d20 size 0x9c virtual false final false
 void remove_songDidFinishEvent(System::Action value) ;

/// @brief Method SendSongDidFinishEvent addr 0x2110a54 size 0x1c virtual false final false
 void SendSongDidFinishEvent() ;

/// @brief Method StopSong addr 0x0 size 0xffffffffffffffff virtual true final false
 void StopSong() ;

/// @brief Method PauseSong addr 0x0 size 0xffffffffffffffff virtual true final false
 void PauseSong() ;

/// @brief Method ResumeSong addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResumeSong() ;

static GlobalNamespace::SongController New_ctor() ;

/// @brief Method .ctor addr 0x2110c60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongController, "", "SongController");
