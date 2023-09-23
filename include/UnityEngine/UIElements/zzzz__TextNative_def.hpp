#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextNative;
}
// Type: UnityEngine.UIElements::TextNative
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15400))
// CS Name: UnityEngine.UIElements.TextNative
class CORDL_TYPE TextNative : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextNative() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: " const&", def_value: None }]
constexpr TextNative(TextNative const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextNative", modifiers: "&&", def_value: None }]
constexpr TextNative(TextNative&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextNative(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextNative& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextNative& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextNative& operator=(TextNative&& o) noexcept = default;
  constexpr TextNative& operator=(TextNative const& o) noexcept = default;
                


// Methods

/// @brief Method GetCursorPosition addr 0x2d2e628 size 0x144 virtual false final false
static UnityEngine::Vector2 GetCursorPosition(UnityEngine::UIElements::TextNativeSettings settings, UnityEngine::Rect rect, int32_t cursorIndex) ;

/// @brief Method ComputeTextWidth addr 0x2d2e7d4 size 0x108 virtual false final false
static float_t ComputeTextWidth(UnityEngine::UIElements::TextNativeSettings settings) ;

/// @brief Method ComputeTextHeight addr 0x2d2e918 size 0x108 virtual false final false
static float_t ComputeTextHeight(UnityEngine::UIElements::TextNativeSettings settings) ;

/// @brief Method GetVertices addr 0x2d2ea5c size 0x1f0 virtual false final false
static Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> GetVertices(UnityEngine::UIElements::TextNativeSettings settings) ;

/// @brief Method GetOffset addr 0x2d2eca8 size 0x130 virtual false final false
static UnityEngine::Vector2 GetOffset(UnityEngine::UIElements::TextNativeSettings settings, UnityEngine::Rect screenRect) ;

/// @brief Method ComputeTextScaling addr 0x2d2ee34 size 0xfc virtual false final false
static float_t ComputeTextScaling(UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint) ;

/// @brief Method DoComputeTextWidth addr 0x2d2e8dc size 0x3c virtual false final false
static float_t DoComputeTextWidth(UnityEngine::UIElements::TextNativeSettings settings) ;

/// @brief Method DoComputeTextHeight addr 0x2d2ea20 size 0x3c virtual false final false
static float_t DoComputeTextHeight(UnityEngine::UIElements::TextNativeSettings settings) ;

/// @brief Method DoGetCursorPosition addr 0x2d2e76c size 0x68 virtual false final false
static UnityEngine::Vector2 DoGetCursorPosition(UnityEngine::UIElements::TextNativeSettings settings, UnityEngine::Rect rect, int32_t cursorPosition) ;

/// @brief Method GetVertices addr 0x2d2ec4c size 0x5c virtual false final false
static void GetVertices(UnityEngine::UIElements::TextNativeSettings settings, ::cordl_internals::intptr_t buffer, int32_t vertexSize, ByRef<int32_t> vertexCount) ;

/// @brief Method DoGetOffset addr 0x2d2edd8 size 0x5c virtual false final false
static UnityEngine::Vector2 DoGetOffset(UnityEngine::UIElements::TextNativeSettings settings, UnityEngine::Rect rect) ;

/// @brief Method DoComputeTextWidth_Injected addr 0x2d2ef30 size 0x3c virtual false final false
static float_t DoComputeTextWidth_Injected(ByRef<UnityEngine::UIElements::TextNativeSettings> settings) ;

/// @brief Method DoComputeTextHeight_Injected addr 0x2d2ef6c size 0x3c virtual false final false
static float_t DoComputeTextHeight_Injected(ByRef<UnityEngine::UIElements::TextNativeSettings> settings) ;

/// @brief Method DoGetCursorPosition_Injected addr 0x2d2efa8 size 0x5c virtual false final false
static void DoGetCursorPosition_Injected(ByRef<UnityEngine::UIElements::TextNativeSettings> settings, ByRef<UnityEngine::Rect> rect, int32_t cursorPosition, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method GetVertices_Injected addr 0x2d2f004 size 0x5c virtual false final false
static void GetVertices_Injected(ByRef<UnityEngine::UIElements::TextNativeSettings> settings, ::cordl_internals::intptr_t buffer, int32_t vertexSize, ByRef<int32_t> vertexCount) ;

/// @brief Method DoGetOffset_Injected addr 0x2d2f060 size 0x54 virtual false final false
static void DoGetOffset_Injected(ByRef<UnityEngine::UIElements::TextNativeSettings> settings, ByRef<UnityEngine::Rect> rect, ByRef<UnityEngine::Vector2> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TextNative);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextNative, "UnityEngine.UIElements", "TextNative");
