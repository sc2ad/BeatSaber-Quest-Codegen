#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Type: UnityEngine::LineRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10007))
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LineRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: " const&", def_value: None }]
constexpr LineRenderer(LineRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
constexpr LineRenderer(LineRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LineRenderer(void* ptr) noexcept : UnityEngine::Renderer(ptr) {
}


  constexpr LineRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LineRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LineRenderer& operator=(LineRenderer&& o) noexcept = default;
  constexpr LineRenderer& operator=(LineRenderer const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(put=set_startWidth))  startWidth;

 float_t __declspec(property(put=set_endWidth))  endWidth;

 bool __declspec(property(put=set_useWorldSpace))  useWorldSpace;

 UnityEngine::Color __declspec(property(put=set_startColor))  startColor;

 UnityEngine::Color __declspec(property(put=set_endColor))  endColor;

 int32_t __declspec(property(put=set_positionCount))  positionCount;


// Methods

/// @brief Method set_startWidth addr 0x2b2dad0 size 0x4c virtual false final false
 void set_startWidth(float_t value) ;

/// @brief Method set_endWidth addr 0x2b2db1c size 0x4c virtual false final false
 void set_endWidth(float_t value) ;

/// @brief Method set_useWorldSpace addr 0x2b2db68 size 0x44 virtual false final false
 void set_useWorldSpace(bool value) ;

/// @brief Method set_startColor addr 0x2b2dbac size 0x54 virtual false final false
 void set_startColor(UnityEngine::Color value) ;

/// @brief Method set_endColor addr 0x2b2dc44 size 0x54 virtual false final false
 void set_endColor(UnityEngine::Color value) ;

/// @brief Method set_positionCount addr 0x2b2dcdc size 0x44 virtual false final false
 void set_positionCount(int32_t value) ;

/// @brief Method SetPosition addr 0x2b2dd20 size 0x5c virtual false final false
 void SetPosition(int32_t index, UnityEngine::Vector3 position) ;

/// @brief Method SetPositions addr 0x2b2ddd0 size 0x44 virtual false final false
 void SetPositions(::ArrayW<UnityEngine::Vector3> positions) ;

/// @brief Method set_startColor_Injected addr 0x2b2dc00 size 0x44 virtual false final false
 void set_startColor_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method set_endColor_Injected addr 0x2b2dc98 size 0x44 virtual false final false
 void set_endColor_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method SetPosition_Injected addr 0x2b2dd7c size 0x54 virtual false final false
 void SetPosition_Injected(int32_t index, ByRef<UnityEngine::Vector3> position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LineRenderer, "UnityEngine", "LineRenderer");
