#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::Yoga {
struct YogaValue;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueExtensions;
}
// Type: UnityEngine.UIElements::StyleValueExtensions
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7400))
// CS Name: UnityEngine.UIElements.StyleValueExtensions
class CORDL_TYPE StyleValueExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StyleValueExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: " const&", def_value: None }]
constexpr StyleValueExtensions(StyleValueExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: "&&", def_value: None }]
constexpr StyleValueExtensions(StyleValueExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleValueExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleValueExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleValueExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleValueExtensions& operator=(StyleValueExtensions&& o) noexcept = default;
  constexpr StyleValueExtensions& operator=(StyleValueExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method DebugString addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::StringW DebugString(::UnityEngine::UIElements::IStyleValue_1<T> styleValue) ;

/// @brief Method ToYogaValue addr 0x2cf9988 size 0x14c virtual false final false
static ::UnityEngine::Yoga::YogaValue ToYogaValue(::UnityEngine::UIElements::Length length) ;

/// @brief Method ToLength addr 0x2cf9ad4 size 0x108 virtual false final false
static ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method ToRotate addr 0x2cf9bec size 0x17c virtual false final false
static ::UnityEngine::UIElements::Rotate ToRotate(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method ToScale addr 0x2cf9d68 size 0x104 virtual false final false
static ::UnityEngine::UIElements::Scale ToScale(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method ToTranslate addr 0x2cf9e84 size 0x150 virtual false final false
static ::UnityEngine::UIElements::Translate ToTranslate(::UnityEngine::UIElements::StyleKeyword keyword) ;

/// @brief Method ToLength addr 0x2cf9ff0 size 0x20 virtual false final false
static ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleLength styleLength) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void CopyFrom(::System::Collections::Generic::List_1<T> list, ::System::Collections::Generic::List_1<T> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueExtensions, "UnityEngine.UIElements", "StyleValueExtensions");
