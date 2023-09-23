#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class CurvedCanvasSettings;
}
// Type: HMUI::CurvedCanvasSettings
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13579))
// CS Name: HMUI.CurvedCanvasSettings
class CORDL_TYPE CurvedCanvasSettings : public UnityEngine::UI::Graphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~CurvedCanvasSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: " const&", def_value: None }]
constexpr CurvedCanvasSettings(CurvedCanvasSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedCanvasSettings", modifiers: "&&", def_value: None }]
constexpr CurvedCanvasSettings(CurvedCanvasSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CurvedCanvasSettings(void* ptr) noexcept : UnityEngine::UI::Graphic(ptr) {
}


  constexpr CurvedCanvasSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CurvedCanvasSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CurvedCanvasSettings& operator=(CurvedCanvasSettings&& o) noexcept = default;
  constexpr CurvedCanvasSettings& operator=(CurvedCanvasSettings const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;

 bool __declspec(property(get=__get__useFlatInEditMode, put=__set__useFlatInEditMode))  _useFlatInEditMode;

constexpr void __set__useFlatInEditMode(bool value) ;

constexpr bool __get__useFlatInEditMode() const;

/// @brief Field kMaxElementWidth offset 0
static constexpr float_t  kMaxElementWidth{10};


// Properties

 float_t __declspec(property(get=get_radius))  radius;


// Methods

/// @brief Method get_radius addr 0x1fa8574 size 0x8 virtual false final false
 float_t get_radius() ;

/// @brief Method SetRadius addr 0x1fa857c size 0x18 virtual false final false
 void SetRadius(float_t value) ;

/// @brief Method Start addr 0x1fa8684 size 0xa4 virtual true final false
 void Start() ;

/// @brief Method OnPopulateMesh addr 0x1fa8728 size 0x198 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper vh) ;

/// @brief Method TransformPointFromCanvasTo3D addr 0x1fa88c0 size 0x40 virtual false final false
 UnityEngine::Vector3 TransformPointFromCanvasTo3D(UnityEngine::Vector2 point) ;

/// @brief Method RebuildAndSetup addr 0x1fa8594 size 0xf0 virtual false final false
static void RebuildAndSetup(UnityEngine::Transform t) ;

// Ctor Parameters []
explicit CurvedCanvasSettings() ;

/// @brief Method .ctor addr 0x1fa8900 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::CurvedCanvasSettings);
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettings, "HMUI", "CurvedCanvasSettings");
