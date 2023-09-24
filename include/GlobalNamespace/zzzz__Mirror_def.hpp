#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class Mirror;
}
// Type: ::Mirror
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15317))
// CS Name: Mirror
class CORDL_TYPE Mirror : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Mirror() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: " const&", def_value: None }]
constexpr Mirror(Mirror const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mirror", modifiers: "&&", def_value: None }]
constexpr Mirror(Mirror&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mirror(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Mirror& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mirror& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mirror& operator=(Mirror&& o) noexcept = default;
  constexpr Mirror& operator=(Mirror const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MirrorRendererSO __declspec(property(get=__get__mirrorRenderer, put=__set__mirrorRenderer))  _mirrorRenderer;

constexpr void __set__mirrorRenderer(GlobalNamespace::MirrorRendererSO value) ;

constexpr GlobalNamespace::MirrorRendererSO __get__mirrorRenderer() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__renderer() const;

 UnityEngine::Material __declspec(property(get=__get__mirrorMaterial, put=__set__mirrorMaterial))  _mirrorMaterial;

constexpr void __set__mirrorMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__mirrorMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__noMirrorMaterial, put=__set__noMirrorMaterial))  _noMirrorMaterial;

constexpr void __set__noMirrorMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__noMirrorMaterial() const;

static int32_t __declspec(property(get=__get__texturePropertyID, put=__set__texturePropertyID))  _texturePropertyID;

static void __set__texturePropertyID(int32_t value) ;

static int32_t __get__texturePropertyID() ;

 bool __declspec(property(get=__get__isEnabled_k__BackingField, put=__set__isEnabled_k__BackingField))  _isEnabled_k__BackingField;

constexpr void __set__isEnabled_k__BackingField(bool value) ;

constexpr bool __get__isEnabled_k__BackingField() const;

 System::Action_1<bool> __declspec(property(get=__get_mirrorDidChangeEnabledStateEvent, put=__set_mirrorDidChangeEnabledStateEvent))  mirrorDidChangeEnabledStateEvent;

constexpr void __set_mirrorDidChangeEnabledStateEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_mirrorDidChangeEnabledStateEvent() const;


// Properties

 UnityEngine::Material __declspec(property(get=get_mirrorMaterial))  mirrorMaterial;

 UnityEngine::Material __declspec(property(get=get_noMirrorMaterial))  noMirrorMaterial;

 bool __declspec(property(get=get_isEnabled, put=set_isEnabled))  isEnabled;


// Methods

/// @brief Method get_mirrorMaterial addr 0x2677c10 size 0x8 virtual false final false
 UnityEngine::Material get_mirrorMaterial() ;

/// @brief Method get_noMirrorMaterial addr 0x2677c18 size 0x8 virtual false final false
 UnityEngine::Material get_noMirrorMaterial() ;

/// @brief Method get_isEnabled addr 0x2677c20 size 0x8 virtual false final false
 bool get_isEnabled() ;

/// @brief Method set_isEnabled addr 0x2677c28 size 0xc virtual false final false
 void set_isEnabled(bool value) ;

/// @brief Method add_mirrorDidChangeEnabledStateEvent addr 0x2677c34 size 0xb0 virtual false final false
 void add_mirrorDidChangeEnabledStateEvent(System::Action_1<bool> value) ;

/// @brief Method remove_mirrorDidChangeEnabledStateEvent addr 0x2677ce4 size 0xb0 virtual false final false
 void remove_mirrorDidChangeEnabledStateEvent(System::Action_1<bool> value) ;

/// @brief Method Update addr 0x2677d94 size 0x18 virtual false final false
 void Update() ;

/// @brief Method OnWillRenderObject addr 0x2677f38 size 0x25c virtual false final false
 void OnWillRenderObject() ;

/// @brief Method ChangeMirrorEnabledState addr 0x2678194 size 0x38 virtual false final false
 void ChangeMirrorEnabledState(bool newIsEnabled) ;

static GlobalNamespace::Mirror New_ctor() ;

/// @brief Method .ctor addr 0x26789bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Mirror);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Mirror, "", "Mirror");
