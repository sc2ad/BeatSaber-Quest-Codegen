#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorNoteVisuals;
}
// Type: ::ColorNoteVisuals
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4856))
// CS Name: ColorNoteVisuals
class CORDL_TYPE ColorNoteVisuals : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INoteControllerDidInitEvent
constexpr operator  GlobalNamespace::INoteControllerDidInitEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ColorNoteVisuals() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: " const&", def_value: None }]
constexpr ColorNoteVisuals(ColorNoteVisuals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorNoteVisuals", modifiers: "&&", def_value: None }]
constexpr ColorNoteVisuals(ColorNoteVisuals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorNoteVisuals(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ColorNoteVisuals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorNoteVisuals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorNoteVisuals& operator=(ColorNoteVisuals&& o) noexcept = default;
  constexpr ColorNoteVisuals& operator=(ColorNoteVisuals const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__defaultColorAlpha, put=__set__defaultColorAlpha))  _defaultColorAlpha;

constexpr void __set__defaultColorAlpha(float_t value) ;

constexpr float_t __get__defaultColorAlpha() const;

 GlobalNamespace::NoteControllerBase __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(GlobalNamespace::NoteControllerBase value) ;

constexpr GlobalNamespace::NoteControllerBase __get__noteController() const;

 ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers))  _materialPropertyBlockControllers;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<GlobalNamespace::MaterialPropertyBlockController> value) ;

constexpr ::ArrayW<GlobalNamespace::MaterialPropertyBlockController> __get__materialPropertyBlockControllers() const;

 ::ArrayW<UnityEngine::MeshRenderer> __declspec(property(get=__get__arrowMeshRenderers, put=__set__arrowMeshRenderers))  _arrowMeshRenderers;

constexpr void __set__arrowMeshRenderers(::ArrayW<UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<UnityEngine::MeshRenderer> __get__arrowMeshRenderers() const;

 ::ArrayW<UnityEngine::MeshRenderer> __declspec(property(get=__get__circleMeshRenderers, put=__set__circleMeshRenderers))  _circleMeshRenderers;

constexpr void __set__circleMeshRenderers(::ArrayW<UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<UnityEngine::MeshRenderer> __get__circleMeshRenderers() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 System::Action_2<GlobalNamespace::ColorNoteVisuals,GlobalNamespace::NoteControllerBase> __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent))  didInitEvent;

constexpr void __set_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals,GlobalNamespace::NoteControllerBase> value) ;

constexpr System::Action_2<GlobalNamespace::ColorNoteVisuals,GlobalNamespace::NoteControllerBase> __get_didInitEvent() const;

static int32_t __declspec(property(get=__get__colorId, put=__set__colorId))  _colorId;

static void __set__colorId(int32_t value) ;

static int32_t __get__colorId() ;

 UnityEngine::Color __declspec(property(get=__get__noteColor, put=__set__noteColor))  _noteColor;

constexpr void __set__noteColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__noteColor() const;


// Properties

 bool __declspec(property(put=set_showArrow))  showArrow;

 bool __declspec(property(put=set_showCircle))  showCircle;


// Methods

/// @brief Method add_didInitEvent addr 0x223b01c size 0xb0 virtual false final false
 void add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals,GlobalNamespace::NoteControllerBase> value) ;

/// @brief Method remove_didInitEvent addr 0x223b0cc size 0xb0 virtual false final false
 void remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals,GlobalNamespace::NoteControllerBase> value) ;

/// @brief Method set_showArrow addr 0x223b17c size 0x68 virtual false final false
 void set_showArrow(bool value) ;

/// @brief Method set_showCircle addr 0x223b1e4 size 0x68 virtual false final false
 void set_showCircle(bool value) ;

/// @brief Method Awake addr 0x223b24c size 0x1d0 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x223b41c size 0x220 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteControllerDidInit addr 0x223b63c size 0x178 virtual true final true
 void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase noteController) ;

/// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters addr 0x223b7b4 size 0x20 virtual true final true
 void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase noteController) ;

/// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x223b7d4 size 0x20 virtual true final true
 void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase noteController, float_t duration) ;

static GlobalNamespace::ColorNoteVisuals New_ctor() ;

/// @brief Method .ctor addr 0x223b7f4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorNoteVisuals, "", "ColorNoteVisuals");
