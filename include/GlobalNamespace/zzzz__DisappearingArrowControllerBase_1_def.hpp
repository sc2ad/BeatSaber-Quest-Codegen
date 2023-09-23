#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class CutoutEffect;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class DisappearingArrowControllerBase_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class DisappearingArrowControllerBase_1<T>;
}
// Type: ::DisappearingArrowControllerBase`1
// Type: ::DisappearingArrowControllerBase`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(4858))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4858), inst: 2 })
// CS Name: DisappearingArrowControllerBase`1
class CORDL_TYPE DisappearingArrowControllerBase_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~DisappearingArrowControllerBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: " const&", def_value: None }]
constexpr DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: "&&", def_value: None }]
constexpr DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisappearingArrowControllerBase_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisappearingArrowControllerBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisappearingArrowControllerBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisappearingArrowControllerBase_1& operator=(DisappearingArrowControllerBase_1&& o) noexcept = default;
  constexpr DisappearingArrowControllerBase_1& operator=(DisappearingArrowControllerBase_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __declspec(property(get=__get__transparentObjectMaterialPropertyBlocks, put=__set__transparentObjectMaterialPropertyBlocks))  _transparentObjectMaterialPropertyBlocks;

constexpr void __set__transparentObjectMaterialPropertyBlocks(::ArrayW<GlobalNamespace::MaterialPropertyBlockController> value) ;

constexpr ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __get__transparentObjectMaterialPropertyBlocks() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__cubeMeshRenderer, put=__set__cubeMeshRenderer))  _cubeMeshRenderer;

constexpr void __set__cubeMeshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__cubeMeshRenderer() const;

 GlobalNamespace::CutoutEffect __declspec(property(get=__get__arrowCutoutEffect, put=__set__arrowCutoutEffect))  _arrowCutoutEffect;

constexpr void __set__arrowCutoutEffect(GlobalNamespace::CutoutEffect value) ;

constexpr GlobalNamespace::CutoutEffect __get__arrowCutoutEffect() const;

 float_t __declspec(property(get=__get__disappearingNormalStart, put=__set__disappearingNormalStart))  _disappearingNormalStart;

constexpr void __set__disappearingNormalStart(float_t value) ;

constexpr float_t __get__disappearingNormalStart() const;

 float_t __declspec(property(get=__get__disappearingNormalEnd, put=__set__disappearingNormalEnd))  _disappearingNormalEnd;

constexpr void __set__disappearingNormalEnd(float_t value) ;

constexpr float_t __get__disappearingNormalEnd() const;

 float_t __declspec(property(get=__get__disappearingGhostStart, put=__set__disappearingGhostStart))  _disappearingGhostStart;

constexpr void __set__disappearingGhostStart(float_t value) ;

constexpr float_t __get__disappearingGhostStart() const;

 float_t __declspec(property(get=__get__disappearingGhostEnd, put=__set__disappearingGhostEnd))  _disappearingGhostEnd;

constexpr void __set__disappearingGhostEnd(float_t value) ;

constexpr float_t __get__disappearingGhostEnd() const;

 float_t __declspec(property(get=__get__prevArrowTransparency, put=__set__prevArrowTransparency))  _prevArrowTransparency;

constexpr void __set__prevArrowTransparency(float_t value) ;

constexpr float_t __get__prevArrowTransparency() const;

 float_t __declspec(property(get=__get__minDistance, put=__set__minDistance))  _minDistance;

constexpr void __set__minDistance(float_t value) ;

constexpr float_t __get__minDistance() const;

 float_t __declspec(property(get=__get__maxDistance, put=__set__maxDistance))  _maxDistance;

constexpr void __set__maxDistance(float_t value) ;

constexpr float_t __get__maxDistance() const;

 bool __declspec(property(get=__get__hideMesh, put=__set__hideMesh))  _hideMesh;

constexpr void __set__hideMesh(bool value) ;

constexpr bool __get__hideMesh() const;

 bool __declspec(property(get=__get__fadeArrow, put=__set__fadeArrow))  _fadeArrow;

constexpr void __set__fadeArrow(bool value) ;

constexpr bool __get__fadeArrow() const;

static int32_t __declspec(property(get=__get__colorId, put=__set__colorId))  _colorId;

static void __set__colorId(int32_t value) ;

static int32_t __get__colorId() ;


// Properties

 T __declspec(property(get=get_gameNoteController))  gameNoteController;


// Methods

/// @brief Method get_gameNoteController addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_gameNoteController() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method CalculateMinMaxDistance addr 0x0 size 0xffffffffffffffff virtual false final false
 void CalculateMinMaxDistance() ;

/// @brief Method HandleNoteMovementNoteDidMoveInJumpPhase addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleNoteMovementNoteDidMoveInJumpPhase() ;

/// @brief Method HandleCubeNoteControllerDidInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void HandleCubeNoteControllerDidInit(T gameNoteController) ;

/// @brief Method SetArrowTransparency addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetArrowTransparency(float_t arrowTransparency) ;

// Ctor Parameters []
explicit DisappearingArrowControllerBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
