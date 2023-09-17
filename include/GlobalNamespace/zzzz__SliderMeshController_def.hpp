#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class SliderMeshConstructor;
}
namespace GlobalNamespace {
class SliderData;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class PathsHolder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshController;
}
// Type: ::SliderMeshController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4938))
// CS Name: SliderMeshController
class CORDL_TYPE SliderMeshController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SliderMeshController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: " const&", def_value: None }]
constexpr SliderMeshController(SliderMeshController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshController", modifiers: "&&", def_value: None }]
constexpr SliderMeshController(SliderMeshController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderMeshController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderMeshController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderMeshController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderMeshController& operator=(SliderMeshController&& o) noexcept = default;
  constexpr SliderMeshController& operator=(SliderMeshController const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numberOfFixedVertexPathSegments, put=__set__numberOfFixedVertexPathSegments))  _numberOfFixedVertexPathSegments;

constexpr void __set__numberOfFixedVertexPathSegments(int32_t value) ;

constexpr int32_t __get__numberOfFixedVertexPathSegments() const;

 float_t __declspec(property(get=__get__controlPointDistancePerSqrtNotesDistance, put=__set__controlPointDistancePerSqrtNotesDistance))  _controlPointDistancePerSqrtNotesDistance;

constexpr void __set__controlPointDistancePerSqrtNotesDistance(float_t value) ;

constexpr float_t __get__controlPointDistancePerSqrtNotesDistance() const;

 float_t __declspec(property(get=__get__middleAnchorPointOffsetAmount, put=__set__middleAnchorPointOffsetAmount))  _middleAnchorPointOffsetAmount;

constexpr void __set__middleAnchorPointOffsetAmount(float_t value) ;

constexpr float_t __get__middleAnchorPointOffsetAmount() const;

 float_t __declspec(property(get=__get__middleControlPointZDistanceModifier, put=__set__middleControlPointZDistanceModifier))  _middleControlPointZDistanceModifier;

constexpr void __set__middleControlPointZDistanceModifier(float_t value) ;

constexpr float_t __get__middleControlPointZDistanceModifier() const;

 float_t __declspec(property(get=__get__middleControlPointYDistanceModifier, put=__set__middleControlPointYDistanceModifier))  _middleControlPointYDistanceModifier;

constexpr void __set__middleControlPointYDistanceModifier(float_t value) ;

constexpr float_t __get__middleControlPointYDistanceModifier() const;

 float_t __declspec(property(get=__get__middleControlPointXDistanceModifier, put=__set__middleControlPointXDistanceModifier))  _middleControlPointXDistanceModifier;

constexpr void __set__middleControlPointXDistanceModifier(float_t value) ;

constexpr float_t __get__middleControlPointXDistanceModifier() const;

 ::GlobalNamespace::SliderMeshConstructor __declspec(property(get=__get__sliderMeshConstructor, put=__set__sliderMeshConstructor))  _sliderMeshConstructor;

constexpr void __set__sliderMeshConstructor(::GlobalNamespace::SliderMeshConstructor value) ;

constexpr ::GlobalNamespace::SliderMeshConstructor __get__sliderMeshConstructor() const;

 ::GlobalNamespace::PathsHolder __declspec(property(get=__get__pathsHolder, put=__set__pathsHolder))  _pathsHolder;

constexpr void __set__pathsHolder(::GlobalNamespace::PathsHolder value) ;

constexpr ::GlobalNamespace::PathsHolder __get__pathsHolder() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __declspec(property(get=__get__reusableAnchorsList, put=__set__reusableAnchorsList))  _reusableAnchorsList;

constexpr void __set__reusableAnchorsList(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __get__reusableAnchorsList() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get__reusableControlPointsArray4, put=__set__reusableControlPointsArray4))  _reusableControlPointsArray4;

constexpr void __set__reusableControlPointsArray4(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get__reusableControlPointsArray4() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get__reusableControlPointsArray2, put=__set__reusableControlPointsArray2))  _reusableControlPointsArray2;

constexpr void __set__reusableControlPointsArray2(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get__reusableControlPointsArray2() const;

/// @brief Field kDefaultGameNoteSize offset 0
static constexpr float_t  kDefaultGameNoteSize{0.45};


// Properties

 float_t __declspec(property(get=get_pathLength))  pathLength;

 ::UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 ::GlobalNamespace::PathsHolder __declspec(property(get=get_pathsHolder))  pathsHolder;


// Methods

/// @brief Method get_pathLength addr 0x224bf74 size 0x24 virtual false final false
 float_t get_pathLength() ;

/// @brief Method get_mesh addr 0x223dff4 size 0x1c virtual false final false
 ::UnityEngine::Mesh get_mesh() ;

/// @brief Method get_pathsHolder addr 0x224bf98 size 0x8 virtual false final false
 ::GlobalNamespace::PathsHolder get_pathsHolder() ;

/// @brief Method CreateBezierPathAndMesh addr 0x2247838 size 0x758 virtual false final false
 void CreateBezierPathAndMesh(::GlobalNamespace::SliderData sliderData, ::UnityEngine::Vector3 headNotePos, ::UnityEngine::Vector3 tailNotePos, float_t jumpSpeed, float_t noteUniformScale) ;

/// @brief Method CutDirectionToControlPointPosition addr 0x224bfa0 size 0xdc virtual false final false
static ::UnityEngine::Vector3 CutDirectionToControlPointPosition(::GlobalNamespace::NoteCutDirection noteCutDirection) ;

// Ctor Parameters []
explicit SliderMeshController() ;

/// @brief Method .ctor addr 0x224c07c size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshController, "", "SliderMeshController");
