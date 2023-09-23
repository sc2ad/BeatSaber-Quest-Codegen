#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Type: UnityEngine.UIElements::ICustomStyle
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7406))
// CS Name: UnityEngine.UIElements.ICustomStyle
class CORDL_TYPE ICustomStyle : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICustomStyle() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICustomStyle(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ByRef<float_t> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ByRef<int32_t> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color> property, ByRef<UnityEngine::Color> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Texture2D> property, ByRef<UnityEngine::Texture2D> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Sprite> property, ByRef<UnityEngine::Sprite> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::UIElements::VectorImage> property, ByRef<UnityEngine::UIElements::VectorImage> value) ;

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryGetValue(UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ByRef<::StringW> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ICustomStyle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ICustomStyle, "UnityEngine.UIElements", "ICustomStyle");
