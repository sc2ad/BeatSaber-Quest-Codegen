#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData;
}
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData;
}
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData;
}
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__TutorialObjectSpawnData;
}
namespace GlobalNamespace {
class GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData;
}
namespace GlobalNamespace {
class TutorialSongController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5434))
// CS Name: TutorialSongController::InitData
class CORDL_TYPE GlobalNamespace__TutorialSongController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__TutorialSongController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__InitData(GlobalNamespace__TutorialSongController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__InitData(GlobalNamespace__TutorialSongController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__InitData& operator=(GlobalNamespace__TutorialSongController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__InitData& operator=(GlobalNamespace__TutorialSongController__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_songBpm, put=__set_songBpm))  songBpm;

constexpr void __set_songBpm(float_t value) ;

constexpr float_t __get_songBpm() const;

 GlobalNamespace::BeatmapData __declspec(property(get=__get_beatmapData, put=__set_beatmapData))  beatmapData;

constexpr void __set_beatmapData(GlobalNamespace::BeatmapData value) ;

constexpr GlobalNamespace::BeatmapData __get_beatmapData() const;


// Methods

// Ctor Parameters [CppParam { name: "songBpm", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapData", ty: "GlobalNamespace::BeatmapData", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__InitData(float_t songBpm, GlobalNamespace::BeatmapData beatmapData) ;

/// @brief Method .ctor addr 0x211402c size 0x38 virtual false final false
 void _ctor(float_t songBpm, GlobalNamespace::BeatmapData beatmapData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialObjectSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5435))
// CS Name: TutorialSongController::TutorialObjectSpawnData
class CORDL_TYPE GlobalNamespace__TutorialSongController__TutorialObjectSpawnData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__TutorialSongController__TutorialObjectSpawnData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialObjectSpawnData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(GlobalNamespace__TutorialSongController__TutorialObjectSpawnData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialObjectSpawnData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(GlobalNamespace__TutorialSongController__TutorialObjectSpawnData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialObjectSpawnData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__TutorialObjectSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialObjectSpawnData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Signal __declspec(property(get=__get_signal, put=__set_signal))  signal;

constexpr void __set_signal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get_signal() const;

 int32_t __declspec(property(get=__get_beatOffset, put=__set_beatOffset))  beatOffset;

constexpr void __set_beatOffset(int32_t value) ;

constexpr int32_t __get_beatOffset() const;

 int32_t __declspec(property(get=__get_firstTimeBeatOffset, put=__set_firstTimeBeatOffset))  firstTimeBeatOffset;

constexpr void __set_firstTimeBeatOffset(int32_t value) ;

constexpr int32_t __get_firstTimeBeatOffset() const;

 int32_t __declspec(property(get=__get_lineIndex, put=__set_lineIndex))  lineIndex;

constexpr void __set_lineIndex(int32_t value) ;

constexpr int32_t __get_lineIndex() const;


// Methods

// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) ;

/// @brief Method .ctor addr 0x2114064 size 0x44 virtual false final false
 void _ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialJumpingNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5436))
// CS Name: TutorialSongController::TutorialJumpingNoteSpawnData
class CORDL_TYPE GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData : public GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_noteLineLayer, put=__set_noteLineLayer))  noteLineLayer;

constexpr void __set_noteLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_noteLineLayer() const;


// Methods

// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method .ctor addr 0x21140a8 size 0x50 virtual false final false
 void _ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialBasicNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5436))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5437))
// CS Name: TutorialSongController::TutorialBasicNoteSpawnData
class CORDL_TYPE GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData : public GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NoteCutDirection __declspec(property(get=__get_cutDirection, put=__set_cutDirection))  cutDirection;

constexpr void __set_cutDirection(GlobalNamespace::NoteCutDirection value) ;

constexpr GlobalNamespace::NoteCutDirection __get_cutDirection() const;

 GlobalNamespace::ColorType __declspec(property(get=__get_colorType, put=__set_colorType))  colorType;

constexpr void __set_colorType(GlobalNamespace::ColorType value) ;

constexpr GlobalNamespace::ColorType __get_colorType() const;


// Methods

// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "colorType", ty: "GlobalNamespace::ColorType", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::ColorType colorType) ;

/// @brief Method .ctor addr 0x21136a0 size 0x64 virtual false final false
 void _ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::ColorType colorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialBombNoteSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5436))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5438))
// CS Name: TutorialSongController::TutorialBombNoteSpawnData
class CORDL_TYPE GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData : public GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData(GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method .ctor addr 0x2113704 size 0x50 virtual false final false
 void _ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialObstacleSpawnData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5439))
// CS Name: TutorialSongController::TutorialObstacleSpawnData
class CORDL_TYPE GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData : public GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData(GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData(GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData(ptr) {
}


  constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData&& o) noexcept = default;
  constexpr GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData& operator=(GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get_noteLineLayer, put=__set_noteLineLayer))  noteLineLayer;

constexpr void __set_noteLineLayer(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get_noteLineLayer() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;


// Methods

// Ctor Parameters [CppParam { name: "signal", ty: "GlobalNamespace::Signal", modifiers: "", def_value: None }, CppParam { name: "firstTimeBeatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "beatOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }]
explicit GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method .ctor addr 0x2113754 size 0x64 virtual false final false
 void _ctor(GlobalNamespace::Signal signal, int32_t firstTimeBeatOffset, int32_t beatOffset, int32_t lineIndex, int32_t width, int32_t height, GlobalNamespace::NoteLineLayer noteLineLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialSongController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5440))
// CS Name: TutorialSongController
class CORDL_TYPE TutorialSongController : public GlobalNamespace::SongController {
public:
// Declarations
using TutorialObstacleSpawnData = GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData;

using TutorialBombNoteSpawnData = GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData;

using TutorialBasicNoteSpawnData = GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData;

using TutorialJumpingNoteSpawnData = GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData;

using TutorialObjectSpawnData = GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData;

using InitData = GlobalNamespace::GlobalNamespace__TutorialSongController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~TutorialSongController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: " const&", def_value: None }]
constexpr TutorialSongController(TutorialSongController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialSongController", modifiers: "&&", def_value: None }]
constexpr TutorialSongController(TutorialSongController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialSongController(void* ptr) noexcept : GlobalNamespace::SongController(ptr) {
}


  constexpr TutorialSongController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialSongController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialSongController& operator=(TutorialSongController&& o) noexcept = default;
  constexpr TutorialSongController& operator=(TutorialSongController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 int32_t __declspec(property(get=__get__startWaitTimeInBeats, put=__set__startWaitTimeInBeats))  _startWaitTimeInBeats;

constexpr void __set__startWaitTimeInBeats(int32_t value) ;

constexpr int32_t __get__startWaitTimeInBeats() const;

 int32_t __declspec(property(get=__get__numberOfBeatsToSnap, put=__set__numberOfBeatsToSnap))  _numberOfBeatsToSnap;

constexpr void __set__numberOfBeatsToSnap(int32_t value) ;

constexpr int32_t __get__numberOfBeatsToSnap() const;

 int32_t __declspec(property(get=__get__obstacleDurationInBeats, put=__set__obstacleDurationInBeats))  _obstacleDurationInBeats;

constexpr void __set__obstacleDurationInBeats(int32_t value) ;

constexpr int32_t __get__obstacleDurationInBeats() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteCuttingTutorialPartDidStartSignal, put=__set__noteCuttingTutorialPartDidStartSignal))  _noteCuttingTutorialPartDidStartSignal;

constexpr void __set__noteCuttingTutorialPartDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteCuttingTutorialPartDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteCuttingInAnyDirectionDidStartSignal, put=__set__noteCuttingInAnyDirectionDidStartSignal))  _noteCuttingInAnyDirectionDidStartSignal;

constexpr void __set__noteCuttingInAnyDirectionDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteCuttingInAnyDirectionDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__bombCuttingTutorialPartDidStartSignal, put=__set__bombCuttingTutorialPartDidStartSignal))  _bombCuttingTutorialPartDidStartSignal;

constexpr void __set__bombCuttingTutorialPartDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__bombCuttingTutorialPartDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__leftObstacleTutorialPartDidStartSignal, put=__set__leftObstacleTutorialPartDidStartSignal))  _leftObstacleTutorialPartDidStartSignal;

constexpr void __set__leftObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__leftObstacleTutorialPartDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__rightObstacleTutorialPartDidStartSignal, put=__set__rightObstacleTutorialPartDidStartSignal))  _rightObstacleTutorialPartDidStartSignal;

constexpr void __set__rightObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__rightObstacleTutorialPartDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__topObstacleTutorialPartDidStartSignal, put=__set__topObstacleTutorialPartDidStartSignal))  _topObstacleTutorialPartDidStartSignal;

constexpr void __set__topObstacleTutorialPartDidStartSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__topObstacleTutorialPartDidStartSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteWasCutOKSignal, put=__set__noteWasCutOKSignal))  _noteWasCutOKSignal;

constexpr void __set__noteWasCutOKSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteWasCutOKSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteWasCutTooSoonSignal, put=__set__noteWasCutTooSoonSignal))  _noteWasCutTooSoonSignal;

constexpr void __set__noteWasCutTooSoonSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteWasCutTooSoonSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteWasCutWithWrongColorSignal, put=__set__noteWasCutWithWrongColorSignal))  _noteWasCutWithWrongColorSignal;

constexpr void __set__noteWasCutWithWrongColorSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteWasCutWithWrongColorSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteWasCutFromDifferentDirectionSignal, put=__set__noteWasCutFromDifferentDirectionSignal))  _noteWasCutFromDifferentDirectionSignal;

constexpr void __set__noteWasCutFromDifferentDirectionSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteWasCutFromDifferentDirectionSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__noteWasCutWithSlowSpeedSignal, put=__set__noteWasCutWithSlowSpeedSignal))  _noteWasCutWithSlowSpeedSignal;

constexpr void __set__noteWasCutWithSlowSpeedSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__noteWasCutWithSlowSpeedSignal() const;

 GlobalNamespace::Signal __declspec(property(get=__get__bombWasCutSignal, put=__set__bombWasCutSignal))  _bombWasCutSignal;

constexpr void __set__bombWasCutSignal(GlobalNamespace::Signal value) ;

constexpr GlobalNamespace::Signal __get__bombWasCutSignal() const;

 GlobalNamespace::GlobalNamespace__TutorialSongController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__TutorialSongController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__TutorialSongController__InitData __get__initData() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 int32_t __declspec(property(get=__get__tutorialBeatmapObjectIndex, put=__set__tutorialBeatmapObjectIndex))  _tutorialBeatmapObjectIndex;

constexpr void __set__tutorialBeatmapObjectIndex(int32_t value) ;

constexpr int32_t __get__tutorialBeatmapObjectIndex() const;

 int32_t __declspec(property(get=__get__prevSpawnedBeatmapObjectIndex, put=__set__prevSpawnedBeatmapObjectIndex))  _prevSpawnedBeatmapObjectIndex;

constexpr void __set__prevSpawnedBeatmapObjectIndex(int32_t value) ;

constexpr int32_t __get__prevSpawnedBeatmapObjectIndex() const;

 float_t __declspec(property(get=__get__songBpm, put=__set__songBpm))  _songBpm;

constexpr void __set__songBpm(float_t value) ;

constexpr float_t __get__songBpm() const;

 GlobalNamespace::BeatmapData __declspec(property(get=__get__beatmapData, put=__set__beatmapData))  _beatmapData;

constexpr void __set__beatmapData(GlobalNamespace::BeatmapData value) ;

constexpr GlobalNamespace::BeatmapData __get__beatmapData() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData> __declspec(property(get=__get__normalModeTutorialObjectsSpawnData, put=__set__normalModeTutorialObjectsSpawnData))  _normalModeTutorialObjectsSpawnData;

constexpr void __set__normalModeTutorialObjectsSpawnData(::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData> __get__normalModeTutorialObjectsSpawnData() const;


// Methods

/// @brief Method Awake addr 0x2113194 size 0x50c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x21137b8 size 0x16c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2113924 size 0x154 virtual false final false
 void OnDestroy() ;

/// @brief Method StartSong addr 0x2112660 size 0x5c virtual false final false
 void StartSong(float_t startTimeOffset) ;

/// @brief Method StopSong addr 0x2113cb0 size 0x28 virtual true final false
 void StopSong() ;

/// @brief Method PauseSong addr 0x2113cd8 size 0x28 virtual true final false
 void PauseSong() ;

/// @brief Method ResumeSong addr 0x2113d00 size 0x1c virtual true final false
 void ResumeSong() ;

/// @brief Method HandleNoteWasCut addr 0x2113d1c size 0xe8 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x2113e04 size 0x6c virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleObstacleDidPassThreeQuartersOfMove2 addr 0x2113e70 size 0x14 virtual false final false
 void HandleObstacleDidPassThreeQuartersOfMove2(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method UpdateBeatmapData addr 0x2113a78 size 0x238 virtual false final false
 void UpdateBeatmapData(float_t noteTime) ;

/// @brief Method GetNextBeatmapObjectTime addr 0x2113e84 size 0x78 virtual false final false
 float_t GetNextBeatmapObjectTime(int32_t beatOffset) ;

/// @brief Method CreateObstacleData addr 0x2113f40 size 0xcc virtual false final false
 GlobalNamespace::ObstacleData CreateObstacleData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData tutorialObstacleSpawnData) ;

/// @brief Method CreateBasicNoteData addr 0x2113efc size 0x24 virtual false final false
 GlobalNamespace::NoteData CreateBasicNoteData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData tutorialBasicNoteSpawnData) ;

/// @brief Method CreateBombNoteData addr 0x2113f20 size 0x20 virtual false final false
 GlobalNamespace::NoteData CreateBombNoteData(float_t time, GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData tutorialBombNoteSpawnData) ;

// Ctor Parameters []
explicit TutorialSongController() ;

/// @brief Method .ctor addr 0x211400c size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__InitData, "", "TutorialSongController/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBasicNoteSpawnData, "", "TutorialSongController/TutorialBasicNoteSpawnData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialBombNoteSpawnData, "", "TutorialSongController/TutorialBombNoteSpawnData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialJumpingNoteSpawnData, "", "TutorialSongController/TutorialJumpingNoteSpawnData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObjectSpawnData, "", "TutorialSongController/TutorialObjectSpawnData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialSongController__TutorialObstacleSpawnData, "", "TutorialSongController/TutorialObstacleSpawnData");
NEED_NO_BOX(GlobalNamespace::TutorialSongController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController, "", "TutorialSongController");
