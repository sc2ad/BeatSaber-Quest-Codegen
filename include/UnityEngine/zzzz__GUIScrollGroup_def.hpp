#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GUILayoutGroup_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIScrollGroup;
}
// Type: UnityEngine::GUIScrollGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14782))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14783))
// CS Name: UnityEngine.GUIScrollGroup
class CORDL_TYPE GUIScrollGroup : public ::UnityEngine::GUILayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~GUIScrollGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: " const&", def_value: None }]
constexpr GUIScrollGroup(GUIScrollGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: "&&", def_value: None }]
constexpr GUIScrollGroup(GUIScrollGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIScrollGroup(void* ptr) noexcept : ::UnityEngine::GUILayoutGroup(ptr) {
}


  constexpr GUIScrollGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIScrollGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIScrollGroup& operator=(GUIScrollGroup&& o) noexcept = default;
  constexpr GUIScrollGroup& operator=(GUIScrollGroup const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_calcMinWidth, put=__set_calcMinWidth))  calcMinWidth;

constexpr void __set_calcMinWidth(float_t value) ;

constexpr float_t __get_calcMinWidth() const;

 float_t __declspec(property(get=__get_calcMaxWidth, put=__set_calcMaxWidth))  calcMaxWidth;

constexpr void __set_calcMaxWidth(float_t value) ;

constexpr float_t __get_calcMaxWidth() const;

 float_t __declspec(property(get=__get_calcMinHeight, put=__set_calcMinHeight))  calcMinHeight;

constexpr void __set_calcMinHeight(float_t value) ;

constexpr float_t __get_calcMinHeight() const;

 float_t __declspec(property(get=__get_calcMaxHeight, put=__set_calcMaxHeight))  calcMaxHeight;

constexpr void __set_calcMaxHeight(float_t value) ;

constexpr float_t __get_calcMaxHeight() const;

 float_t __declspec(property(get=__get_clientWidth, put=__set_clientWidth))  clientWidth;

constexpr void __set_clientWidth(float_t value) ;

constexpr float_t __get_clientWidth() const;

 float_t __declspec(property(get=__get_clientHeight, put=__set_clientHeight))  clientHeight;

constexpr void __set_clientHeight(float_t value) ;

constexpr float_t __get_clientHeight() const;

 bool __declspec(property(get=__get_allowHorizontalScroll, put=__set_allowHorizontalScroll))  allowHorizontalScroll;

constexpr void __set_allowHorizontalScroll(bool value) ;

constexpr bool __get_allowHorizontalScroll() const;

 bool __declspec(property(get=__get_allowVerticalScroll, put=__set_allowVerticalScroll))  allowVerticalScroll;

constexpr void __set_allowVerticalScroll(bool value) ;

constexpr bool __get_allowVerticalScroll() const;

 bool __declspec(property(get=__get_needsHorizontalScrollbar, put=__set_needsHorizontalScrollbar))  needsHorizontalScrollbar;

constexpr void __set_needsHorizontalScrollbar(bool value) ;

constexpr bool __get_needsHorizontalScrollbar() const;

 bool __declspec(property(get=__get_needsVerticalScrollbar, put=__set_needsVerticalScrollbar))  needsVerticalScrollbar;

constexpr void __set_needsVerticalScrollbar(bool value) ;

constexpr bool __get_needsVerticalScrollbar() const;

 ::UnityEngine::GUIStyle __declspec(property(get=__get_horizontalScrollbar, put=__set_horizontalScrollbar))  horizontalScrollbar;

constexpr void __set_horizontalScrollbar(::UnityEngine::GUIStyle value) ;

constexpr ::UnityEngine::GUIStyle __get_horizontalScrollbar() const;

 ::UnityEngine::GUIStyle __declspec(property(get=__get_verticalScrollbar, put=__set_verticalScrollbar))  verticalScrollbar;

constexpr void __set_verticalScrollbar(::UnityEngine::GUIStyle value) ;

constexpr ::UnityEngine::GUIStyle __get_verticalScrollbar() const;


// Methods

// Ctor Parameters []
explicit GUIScrollGroup() ;

/// @brief Method .ctor addr 0x2b93e20 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method CalcWidth addr 0x2b93e80 size 0x80 virtual true final false
 void CalcWidth() ;

/// @brief Method SetHorizontal addr 0x2b93f00 size 0x12c virtual true final false
 void SetHorizontal(float_t x, float_t width) ;

/// @brief Method CalcHeight addr 0x2b94110 size 0x100 virtual true final false
 void CalcHeight() ;

/// @brief Method SetVertical addr 0x2b9424c size 0x218 virtual true final false
 void SetVertical(float_t y, float_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::GUIScrollGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIScrollGroup, "UnityEngine", "GUIScrollGroup");
