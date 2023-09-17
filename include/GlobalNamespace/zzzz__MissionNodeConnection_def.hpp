#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeConnection;
}
// Type: ::MissionNodeConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5633))
// CS Name: MissionNodeConnection
class CORDL_TYPE MissionNodeConnection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~MissionNodeConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: " const&", def_value: None }]
constexpr MissionNodeConnection(MissionNodeConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: "&&", def_value: None }]
constexpr MissionNodeConnection(MissionNodeConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeConnection(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeConnection& operator=(MissionNodeConnection&& o) noexcept = default;
  constexpr MissionNodeConnection& operator=(MissionNodeConnection const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__separator, put=__set__separator))  _separator;

constexpr void __set__separator(float_t value) ;

constexpr float_t __get__separator() const;

 float_t __declspec(property(get=__get__width, put=__set__width))  _width;

constexpr void __set__width(float_t value) ;

constexpr float_t __get__width() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__rectTransform() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__image, put=__set__image))  _image;

constexpr void __set__image(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__image() const;

 ::GlobalNamespace::MissionNodeVisualController __declspec(property(get=__get__parentMissionNode, put=__set__parentMissionNode))  _parentMissionNode;

constexpr void __set__parentMissionNode(::GlobalNamespace::MissionNodeVisualController value) ;

constexpr ::GlobalNamespace::MissionNodeVisualController __get__parentMissionNode() const;

 ::GlobalNamespace::MissionNodeVisualController __declspec(property(get=__get__childMissionNode, put=__set__childMissionNode))  _childMissionNode;

constexpr void __set__childMissionNode(::GlobalNamespace::MissionNodeVisualController value) ;

constexpr ::GlobalNamespace::MissionNodeVisualController __get__childMissionNode() const;

 ::UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(::UnityEngine::Animator value) ;

constexpr ::UnityEngine::Animator __get__animator() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__parentMissionNodePosition, put=__set__parentMissionNodePosition))  _parentMissionNodePosition;

constexpr void __set__parentMissionNodePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__parentMissionNodePosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__childMissionNodePosition, put=__set__childMissionNodePosition))  _childMissionNodePosition;

constexpr void __set__childMissionNodePosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__childMissionNodePosition() const;

 bool __declspec(property(get=__get__isActive, put=__set__isActive))  _isActive;

constexpr void __set__isActive(bool value) ;

constexpr bool __get__isActive() const;


// Properties

 ::GlobalNamespace::MissionNodeVisualController __declspec(property(get=get_parentMissionNode))  parentMissionNode;

 ::GlobalNamespace::MissionNodeVisualController __declspec(property(get=get_childMissionNode))  childMissionNode;

 bool __declspec(property(get=get_isActive))  isActive;


// Methods

/// @brief Method get_parentMissionNode addr 0x2148e74 size 0x8 virtual false final false
 ::GlobalNamespace::MissionNodeVisualController get_parentMissionNode() ;

/// @brief Method get_childMissionNode addr 0x2148e7c size 0x8 virtual false final false
 ::GlobalNamespace::MissionNodeVisualController get_childMissionNode() ;

/// @brief Method get_isActive addr 0x2148e84 size 0x8 virtual false final false
 bool get_isActive() ;

/// @brief Method Setup addr 0x21479cc size 0x8 virtual false final false
 void Setup(::GlobalNamespace::MissionNodeVisualController parentMissionNode, ::GlobalNamespace::MissionNodeVisualController childMissionNode) ;

/// @brief Method UpdateConnectionRectTransform addr 0x2148e8c size 0x278 virtual false final false
 void UpdateConnectionRectTransform() ;

/// @brief Method SetActive addr 0x2148c54 size 0xcc virtual false final false
 void SetActive(bool animated) ;

/// @brief Method MissionConnectionEnabledDidFinish addr 0x2149104 size 0x20 virtual false final false
 void MissionConnectionEnabledDidFinish() ;

// Ctor Parameters []
explicit MissionNodeConnection() ;

/// @brief Method .ctor addr 0x2149124 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeConnection, "", "MissionNodeConnection");
