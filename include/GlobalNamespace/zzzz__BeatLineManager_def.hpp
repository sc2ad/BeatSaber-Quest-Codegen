#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatLine__Pool;
}
namespace GlobalNamespace {
class BeatLine;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLineManager;
}
// Type: ::BeatLineManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4817))
// CS Name: BeatLineManager
class CORDL_TYPE BeatLineManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BeatLineManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: " const&", def_value: None }]
constexpr BeatLineManager(BeatLineManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatLineManager", modifiers: "&&", def_value: None }]
constexpr BeatLineManager(BeatLineManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatLineManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatLineManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatLineManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatLineManager& operator=(BeatLineManager&& o) noexcept = default;
  constexpr BeatLineManager& operator=(BeatLineManager const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__linesYPosition, put=__set__linesYPosition))  _linesYPosition;

constexpr void __set__linesYPosition(float_t value) ;

constexpr float_t __get__linesYPosition() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::GlobalNamespace__BeatLine__Pool __declspec(property(get=__get__beatLinePool, put=__set__beatLinePool))  _beatLinePool;

constexpr void __set__beatLinePool(GlobalNamespace::GlobalNamespace__BeatLine__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatLine__Pool __get__beatLinePool() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::Vector4,GlobalNamespace::BeatLine> __declspec(property(get=__get__activeBeatLines, put=__set__activeBeatLines))  _activeBeatLines;

constexpr void __set__activeBeatLines(System::Collections::Generic::Dictionary_2<UnityEngine::Vector4,GlobalNamespace::BeatLine> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Vector4,GlobalNamespace::BeatLine> __get__activeBeatLines() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get__removeBeatLineKeyList, put=__set__removeBeatLineKeyList))  _removeBeatLineKeyList;

constexpr void __set__removeBeatLineKeyList(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get__removeBeatLineKeyList() const;

 bool __declspec(property(get=__get__isMidRotationValid, put=__set__isMidRotationValid))  _isMidRotationValid;

constexpr void __set__isMidRotationValid(bool value) ;

constexpr bool __get__isMidRotationValid() const;

 float_t __declspec(property(get=__get__midRotation, put=__set__midRotation))  _midRotation;

constexpr void __set__midRotation(float_t value) ;

constexpr float_t __get__midRotation() const;

 float_t __declspec(property(get=__get__rotationRange, put=__set__rotationRange))  _rotationRange;

constexpr void __set__rotationRange(float_t value) ;

constexpr float_t __get__rotationRange() const;


// Properties

 bool __declspec(property(get=get_isMidRotationValid))  isMidRotationValid;

 float_t __declspec(property(get=get_midRotation))  midRotation;

 float_t __declspec(property(get=get_rotationRange))  rotationRange;


// Methods

/// @brief Method get_isMidRotationValid addr 0x222d51c size 0x8 virtual false final false
 bool get_isMidRotationValid() ;

/// @brief Method get_midRotation addr 0x222d524 size 0x8 virtual false final false
 float_t get_midRotation() ;

/// @brief Method get_rotationRange addr 0x222d52c size 0x8 virtual false final false
 float_t get_rotationRange() ;

/// @brief Method Start addr 0x222d534 size 0x88 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x222d66c size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x222d7a4 size 0x52c virtual false final false
 void Update() ;

/// @brief Method HandleNoteWasSpawned addr 0x222dcd0 size 0x1a0 virtual false final false
 void HandleNoteWasSpawned(GlobalNamespace::NoteController noteController) ;

// Ctor Parameters []
explicit BeatLineManager() ;

/// @brief Method .ctor addr 0x222de70 size 0xc8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatLineManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLineManager, "", "BeatLineManager");
