#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class GlobalNamespace__NoteDebris__Pool;
}
namespace GlobalNamespace {
struct GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
class NoteDebris;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
// Type: ::NoteDebrisSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5008))
// CS Name: NoteDebrisSpawner
class CORDL_TYPE NoteDebrisSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INoteDebrisDidFinishEvent
constexpr operator  GlobalNamespace::INoteDebrisDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~NoteDebrisSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: " const&", def_value: None }]
constexpr NoteDebrisSpawner(NoteDebrisSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSpawner", modifiers: "&&", def_value: None }]
constexpr NoteDebrisSpawner(NoteDebrisSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebrisSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteDebrisSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebrisSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebrisSpawner& operator=(NoteDebrisSpawner&& o) noexcept = default;
  constexpr NoteDebrisSpawner& operator=(NoteDebrisSpawner const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__rotation, put=__set__rotation))  _rotation;

constexpr void __set__rotation(float_t value) ;

constexpr float_t __get__rotation() const;

 float_t __declspec(property(get=__get__cutDirMultiplier, put=__set__cutDirMultiplier))  _cutDirMultiplier;

constexpr void __set__cutDirMultiplier(float_t value) ;

constexpr float_t __get__cutDirMultiplier() const;

 float_t __declspec(property(get=__get__fromCenterSpeed, put=__set__fromCenterSpeed))  _fromCenterSpeed;

constexpr void __set__fromCenterSpeed(float_t value) ;

constexpr float_t __get__fromCenterSpeed() const;

 float_t __declspec(property(get=__get__moveSpeedMultiplier, put=__set__moveSpeedMultiplier))  _moveSpeedMultiplier;

constexpr void __set__moveSpeedMultiplier(float_t value) ;

constexpr float_t __get__moveSpeedMultiplier() const;

 GlobalNamespace::GlobalNamespace__NoteDebris__Pool __declspec(property(get=__get__normalNotesDebrisPool, put=__set__normalNotesDebrisPool))  _normalNotesDebrisPool;

constexpr void __set__normalNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool __get__normalNotesDebrisPool() const;

 GlobalNamespace::GlobalNamespace__NoteDebris__Pool __declspec(property(get=__get__burstSliderHeadNotesDebrisPool, put=__set__burstSliderHeadNotesDebrisPool))  _burstSliderHeadNotesDebrisPool;

constexpr void __set__burstSliderHeadNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool __get__burstSliderHeadNotesDebrisPool() const;

 GlobalNamespace::GlobalNamespace__NoteDebris__Pool __declspec(property(get=__get__burstSliderElementNotesDebrisPool, put=__set__burstSliderElementNotesDebrisPool))  _burstSliderElementNotesDebrisPool;

constexpr void __set__burstSliderElementNotesDebrisPool(GlobalNamespace::GlobalNamespace__NoteDebris__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteDebris__Pool __get__burstSliderElementNotesDebrisPool() const;

/// @brief Field kMinLifeTime offset 0
static constexpr float_t  kMinLifeTime{0.2};

/// @brief Field kMaxLifeTime offset 0
static constexpr float_t  kMaxLifeTime{2};

/// @brief Field kLifeTimeOffset offset 0
static constexpr float_t  kLifeTimeOffset{0.05};

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> __declspec(property(get=__get__poolForNoteGameplayType, put=__set__poolForNoteGameplayType))  _poolForNoteGameplayType;

constexpr void __set__poolForNoteGameplayType(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__NoteData__GameplayType,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> __get__poolForNoteGameplayType() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> __declspec(property(get=__get__poolForNoteDebris, put=__set__poolForNoteDebris))  _poolForNoteDebris;

constexpr void __set__poolForNoteDebris(System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::NoteDebris,GlobalNamespace::GlobalNamespace__NoteDebris__Pool> __get__poolForNoteDebris() const;


// Methods

/// @brief Method Start addr 0x225a74c size 0xc4 virtual false final false
 void Start() ;

/// @brief Method SpawnDebris addr 0x2259bfc size 0x890 virtual false final false
 void SpawnDebris(GlobalNamespace::GlobalNamespace__NoteData__GameplayType noteGameplayType, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, float_t saberSpeed, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRotation, UnityEngine::Vector3 noteScale, GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, UnityEngine::Vector3 moveVec) ;

/// @brief Method HandleNoteDebrisDidFinish addr 0x225a91c size 0xbc virtual true final true
 void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris noteDebris) ;

/// @brief Method SpawnNoteDebris addr 0x225a810 size 0x10c virtual false final false
 void SpawnNoteDebris(GlobalNamespace::GlobalNamespace__NoteData__GameplayType noteGameplayType, ByRef<GlobalNamespace::NoteDebris> debris0, ByRef<GlobalNamespace::NoteDebris> debris1) ;

/// @brief Method DespawnNoteDebris addr 0x225a9d8 size 0xa4 virtual false final false
 void DespawnNoteDebris(GlobalNamespace::NoteDebris noteDebris) ;

// Ctor Parameters []
explicit NoteDebrisSpawner() ;

/// @brief Method .ctor addr 0x225aa7c size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteDebrisSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSpawner, "", "NoteDebrisSpawner");
