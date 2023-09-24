#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutEntry;
}
// Type: UnityEngine::GUILayoutEntry
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14752))
// CS Name: UnityEngine.GUILayoutEntry
class CORDL_TYPE GUILayoutEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GUILayoutEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: " const&", def_value: None }]
constexpr GUILayoutEntry(GUILayoutEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutEntry", modifiers: "&&", def_value: None }]
constexpr GUILayoutEntry(GUILayoutEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUILayoutEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUILayoutEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUILayoutEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUILayoutEntry& operator=(GUILayoutEntry&& o) noexcept = default;
  constexpr GUILayoutEntry& operator=(GUILayoutEntry const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_minWidth, put=__set_minWidth))  minWidth;

constexpr void __set_minWidth(float_t value) ;

constexpr float_t __get_minWidth() const;

 float_t __declspec(property(get=__get_maxWidth, put=__set_maxWidth))  maxWidth;

constexpr void __set_maxWidth(float_t value) ;

constexpr float_t __get_maxWidth() const;

 float_t __declspec(property(get=__get_minHeight, put=__set_minHeight))  minHeight;

constexpr void __set_minHeight(float_t value) ;

constexpr float_t __get_minHeight() const;

 float_t __declspec(property(get=__get_maxHeight, put=__set_maxHeight))  maxHeight;

constexpr void __set_maxHeight(float_t value) ;

constexpr float_t __get_maxHeight() const;

 UnityEngine::Rect __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_rect() const;

 int32_t __declspec(property(get=__get_stretchWidth, put=__set_stretchWidth))  stretchWidth;

constexpr void __set_stretchWidth(int32_t value) ;

constexpr int32_t __get_stretchWidth() const;

 int32_t __declspec(property(get=__get_stretchHeight, put=__set_stretchHeight))  stretchHeight;

constexpr void __set_stretchHeight(int32_t value) ;

constexpr int32_t __get_stretchHeight() const;

 bool __declspec(property(get=__get_consideredForMargin, put=__set_consideredForMargin))  consideredForMargin;

constexpr void __set_consideredForMargin(bool value) ;

constexpr bool __get_consideredForMargin() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_Style, put=__set_m_Style))  m_Style;

constexpr void __set_m_Style(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_Style() const;

static UnityEngine::Rect __declspec(property(get=__get_kDummyRect, put=__set_kDummyRect))  kDummyRect;

static void __set_kDummyRect(UnityEngine::Rect value) ;

static UnityEngine::Rect __get_kDummyRect() ;

static int32_t __declspec(property(get=__get_indent, put=__set_indent))  indent;

static void __set_indent(int32_t value) ;

static int32_t __get_indent() ;


// Properties

 UnityEngine::GUIStyle __declspec(property(get=get_style, put=set_style))  style;

 int32_t __declspec(property(get=get_marginLeft))  marginLeft;

 int32_t __declspec(property(get=get_marginRight))  marginRight;

 int32_t __declspec(property(get=get_marginTop))  marginTop;

 int32_t __declspec(property(get=get_marginBottom))  marginBottom;

 int32_t __declspec(property(get=get_marginHorizontal))  marginHorizontal;

 int32_t __declspec(property(get=get_marginVertical))  marginVertical;


// Methods

/// @brief Method get_style addr 0x2b83078 size 0x8 virtual false final false
 UnityEngine::GUIStyle get_style() ;

/// @brief Method set_style addr 0x2b83080 size 0x10 virtual false final false
 void set_style(UnityEngine::GUIStyle value) ;

/// @brief Method get_marginLeft addr 0x2b83090 size 0x28 virtual true final false
 int32_t get_marginLeft() ;

/// @brief Method get_marginRight addr 0x2b830b8 size 0x28 virtual true final false
 int32_t get_marginRight() ;

/// @brief Method get_marginTop addr 0x2b830e0 size 0x28 virtual true final false
 int32_t get_marginTop() ;

/// @brief Method get_marginBottom addr 0x2b83108 size 0x28 virtual true final false
 int32_t get_marginBottom() ;

/// @brief Method get_marginHorizontal addr 0x2b83130 size 0x3c virtual false final false
 int32_t get_marginHorizontal() ;

/// @brief Method get_marginVertical addr 0x2b8316c size 0x3c virtual false final false
 int32_t get_marginVertical() ;

static UnityEngine::GUILayoutEntry New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, UnityEngine::GUIStyle _style) ;

/// @brief Method .ctor addr 0x2b831a8 size 0x10c virtual false final false
 void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, UnityEngine::GUIStyle _style) ;

static UnityEngine::GUILayoutEntry New_ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, UnityEngine::GUIStyle _style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method .ctor addr 0x2b832b4 size 0x108 virtual false final false
 void _ctor(float_t _minWidth, float_t _maxWidth, float_t _minHeight, float_t _maxHeight, UnityEngine::GUIStyle _style, ::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method CalcWidth addr 0x2b833bc size 0x4 virtual true final false
 void CalcWidth() ;

/// @brief Method CalcHeight addr 0x2b833c0 size 0x4 virtual true final false
 void CalcHeight() ;

/// @brief Method SetHorizontal addr 0x2b833c4 size 0x34 virtual true final false
 void SetHorizontal(float_t x, float_t width) ;

/// @brief Method SetVertical addr 0x2b833f8 size 0x34 virtual true final false
 void SetVertical(float_t y, float_t height) ;

/// @brief Method ApplyStyleSettings addr 0x2b8342c size 0x8c virtual true final false
 void ApplyStyleSettings(UnityEngine::GUIStyle style) ;

/// @brief Method ApplyOptions addr 0x2b834b8 size 0x2d4 virtual true final false
 void ApplyOptions(::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method ToString addr 0x2b8378c size 0x5e0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUILayoutEntry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutEntry, "UnityEngine", "GUILayoutEntry");
