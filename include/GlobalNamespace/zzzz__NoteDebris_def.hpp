#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class GlobalNamespace__NoteDebris__Pool;
}
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class NoteDebrisPhysics;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NoteDebris__Pool;
}
namespace GlobalNamespace {
class NoteDebris;
}
// Type: ::NoteDebris
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4889))
// CS Name: NoteDebris
class CORDL_TYPE NoteDebris : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__NoteDebris__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NoteDebris() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebris", modifiers: " const&", def_value: None }]
constexpr NoteDebris(NoteDebris const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebris", modifiers: "&&", def_value: None }]
constexpr NoteDebris(NoteDebris&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebris(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteDebris& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebris& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebris& operator=(NoteDebris&& o) noexcept = default;
  constexpr NoteDebris& operator=(NoteDebris const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__meshTransform, put=__set__meshTransform))  _meshTransform;

constexpr void __set__meshTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__meshTransform() const;

 GlobalNamespace::NoteDebrisPhysics __declspec(property(get=__get__physics, put=__set__physics))  _physics;

constexpr void __set__physics(GlobalNamespace::NoteDebrisPhysics value) ;

constexpr GlobalNamespace::NoteDebrisPhysics __get__physics() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__cutoutCurve, put=__set__cutoutCurve))  _cutoutCurve;

constexpr void __set__cutoutCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__cutoutCurve() const;

 float_t __declspec(property(get=__get__maxCutPointCenterDistance, put=__set__maxCutPointCenterDistance))  _maxCutPointCenterDistance;

constexpr void __set__maxCutPointCenterDistance(float_t value) ;

constexpr float_t __get__maxCutPointCenterDistance() const;

 UnityEngine::Mesh __declspec(property(get=__get__centroidComputationMesh, put=__set__centroidComputationMesh))  _centroidComputationMesh;

constexpr void __set__centroidComputationMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__centroidComputationMesh() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 float_t __declspec(property(get=__get__elapsedTime, put=__set__elapsedTime))  _elapsedTime;

constexpr void __set__elapsedTime(float_t value) ;

constexpr float_t __get__elapsedTime() const;

 float_t __declspec(property(get=__get__lifeTime, put=__set__lifeTime))  _lifeTime;

constexpr void __set__lifeTime(float_t value) ;

constexpr float_t __get__lifeTime() const;

static int32_t __declspec(property(get=__get__cutoutPropertyID, put=__set__cutoutPropertyID))  _cutoutPropertyID;

static void __set__cutoutPropertyID(int32_t value) ;

static int32_t __get__cutoutPropertyID() ;

static int32_t __declspec(property(get=__get__colorID, put=__set__colorID))  _colorID;

static void __set__colorID(int32_t value) ;

static int32_t __get__colorID() ;

static int32_t __declspec(property(get=__get__cutPlaneID, put=__set__cutPlaneID))  _cutPlaneID;

static void __set__cutPlaneID(int32_t value) ;

static int32_t __get__cutPlaneID() ;

static int32_t __declspec(property(get=__get__cutoutTexOffsetID, put=__set__cutoutTexOffsetID))  _cutoutTexOffsetID;

static void __set__cutoutTexOffsetID(int32_t value) ;

static int32_t __get__cutoutTexOffsetID() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__meshVertices, put=__set__meshVertices))  _meshVertices;

static void __set__meshVertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get__meshVertices() ;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent> __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent))  _didFinishEvent;

constexpr void __set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent> __get__didFinishEvent() const;


// Properties

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent> __declspec(property(get=get_didFinishEvent))  didFinishEvent;


// Methods

/// @brief Method get_didFinishEvent addr 0x223fbec size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent> get_didFinishEvent() ;

/// @brief Method Awake addr 0x223fbf4 size 0x98 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x223fc8c size 0x27c virtual false final false
 void Update() ;

/// @brief Method Init addr 0x223ff08 size 0x570 virtual false final false
 void Init(GlobalNamespace::ColorType colorType, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRot, UnityEngine::Vector3 noteMoveVec, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 positionOffset, UnityEngine::Quaternion rotationOffset, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 force, UnityEngine::Vector3 torque, float_t lifeTime) ;

static GlobalNamespace::NoteDebris New_ctor() ;

/// @brief Method .ctor addr 0x2240478 size 0xa4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4889)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2720 }), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4888))
// CS Name: NoteDebris::Pool
class CORDL_TYPE GlobalNamespace__NoteDebris__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::NoteDebris> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__NoteDebris__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteDebris__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteDebris__Pool(GlobalNamespace__NoteDebris__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteDebris__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteDebris__Pool(GlobalNamespace__NoteDebris__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteDebris__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::NoteDebris>(ptr) {
}


  constexpr GlobalNamespace__NoteDebris__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteDebris__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteDebris__Pool& operator=(GlobalNamespace__NoteDebris__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__NoteDebris__Pool& operator=(GlobalNamespace__NoteDebris__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__NoteDebris__Pool New_ctor() ;

/// @brief Method .ctor addr 0x2240618 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteDebris__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteDebris__Pool, "", "NoteDebris/Pool");
NEED_NO_BOX(GlobalNamespace::NoteDebris);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebris, "", "NoteDebris");
