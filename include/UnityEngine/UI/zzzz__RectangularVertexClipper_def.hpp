#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class RectangularVertexClipper;
}
// Type: UnityEngine.UI::RectangularVertexClipper
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12967))
// CS Name: UnityEngine.UI.RectangularVertexClipper
class CORDL_TYPE RectangularVertexClipper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RectangularVertexClipper() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangularVertexClipper", modifiers: " const&", def_value: None }]
constexpr RectangularVertexClipper(RectangularVertexClipper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectangularVertexClipper", modifiers: "&&", def_value: None }]
constexpr RectangularVertexClipper(RectangularVertexClipper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectangularVertexClipper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RectangularVertexClipper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectangularVertexClipper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectangularVertexClipper& operator=(RectangularVertexClipper&& o) noexcept = default;
  constexpr RectangularVertexClipper& operator=(RectangularVertexClipper const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_WorldCorners, put=__set_m_WorldCorners))  m_WorldCorners;

constexpr void __set_m_WorldCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_WorldCorners() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_CanvasCorners, put=__set_m_CanvasCorners))  m_CanvasCorners;

constexpr void __set_m_CanvasCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_CanvasCorners() const;


// Methods

/// @brief Method GetCanvasRect addr 0x2bda3f8 size 0x170 virtual false final false
 UnityEngine::Rect GetCanvasRect(UnityEngine::RectTransform t, UnityEngine::Canvas c) ;

// Ctor Parameters []
explicit RectangularVertexClipper() ;

/// @brief Method .ctor addr 0x2bda568 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::RectangularVertexClipper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RectangularVertexClipper, "UnityEngine.UI", "RectangularVertexClipper");
