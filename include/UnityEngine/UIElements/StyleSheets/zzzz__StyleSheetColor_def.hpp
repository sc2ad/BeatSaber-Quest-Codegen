#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetColor;
}
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetColor
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7574))
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetColor
class CORDL_TYPE StyleSheetColor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleSheetColor() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: " const&", def_value: None }]
constexpr StyleSheetColor(StyleSheetColor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheetColor", modifiers: "&&", def_value: None }]
constexpr StyleSheetColor(StyleSheetColor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSheetColor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSheetColor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSheetColor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSheetColor& operator=(StyleSheetColor&& o) noexcept = default;
  constexpr StyleSheetColor& operator=(StyleSheetColor const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32> __declspec(property(get=__get_s_NameToColor, put=__set_s_NameToColor))  s_NameToColor;

static void __set_s_NameToColor(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::Color32> __get_s_NameToColor() ;


// Methods

/// @brief Method TryGetColor addr 0x2c6e9f0 size 0xf4 virtual false final false
static bool TryGetColor(::StringW name, ByRef<UnityEngine::Color> color) ;

/// @brief Method HexToColor32 addr 0x2c718f8 size 0x14 virtual false final false
static UnityEngine::Color32 HexToColor32(uint32_t color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StyleSheetColor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StyleSheetColor, "UnityEngine.UIElements.StyleSheets", "StyleSheetColor");
