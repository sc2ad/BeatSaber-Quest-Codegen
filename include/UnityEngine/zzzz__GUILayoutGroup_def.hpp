#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GUILayoutEntry;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutGroup;
}
// Type: UnityEngine::GUILayoutGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14752))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14782))
// CS Name: UnityEngine.GUILayoutGroup
class CORDL_TYPE GUILayoutGroup : public UnityEngine::GUILayoutEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~GUILayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutGroup", modifiers: " const&", def_value: None }]
constexpr GUILayoutGroup(GUILayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutGroup", modifiers: "&&", def_value: None }]
constexpr GUILayoutGroup(GUILayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUILayoutGroup(void* ptr) noexcept : UnityEngine::GUILayoutEntry(ptr) {
}


  constexpr GUILayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUILayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUILayoutGroup& operator=(GUILayoutGroup&& o) noexcept = default;
  constexpr GUILayoutGroup& operator=(GUILayoutGroup const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry> __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GUILayoutEntry> __get_entries() const;

 bool __declspec(property(get=__get_isVertical, put=__set_isVertical))  isVertical;

constexpr void __set_isVertical(bool value) ;

constexpr bool __get_isVertical() const;

 bool __declspec(property(get=__get_resetCoords, put=__set_resetCoords))  resetCoords;

constexpr void __set_resetCoords(bool value) ;

constexpr bool __get_resetCoords() const;

 float_t __declspec(property(get=__get_spacing, put=__set_spacing))  spacing;

constexpr void __set_spacing(float_t value) ;

constexpr float_t __get_spacing() const;

 bool __declspec(property(get=__get_sameSize, put=__set_sameSize))  sameSize;

constexpr void __set_sameSize(bool value) ;

constexpr bool __get_sameSize() const;

 bool __declspec(property(get=__get_isWindow, put=__set_isWindow))  isWindow;

constexpr void __set_isWindow(bool value) ;

constexpr bool __get_isWindow() const;

 int32_t __declspec(property(get=__get_windowID, put=__set_windowID))  windowID;

constexpr void __set_windowID(int32_t value) ;

constexpr int32_t __get_windowID() const;

 int32_t __declspec(property(get=__get_m_Cursor, put=__set_m_Cursor))  m_Cursor;

constexpr void __set_m_Cursor(int32_t value) ;

constexpr int32_t __get_m_Cursor() const;

 int32_t __declspec(property(get=__get_m_StretchableCountX, put=__set_m_StretchableCountX))  m_StretchableCountX;

constexpr void __set_m_StretchableCountX(int32_t value) ;

constexpr int32_t __get_m_StretchableCountX() const;

 int32_t __declspec(property(get=__get_m_StretchableCountY, put=__set_m_StretchableCountY))  m_StretchableCountY;

constexpr void __set_m_StretchableCountY(int32_t value) ;

constexpr int32_t __get_m_StretchableCountY() const;

 bool __declspec(property(get=__get_m_UserSpecifiedWidth, put=__set_m_UserSpecifiedWidth))  m_UserSpecifiedWidth;

constexpr void __set_m_UserSpecifiedWidth(bool value) ;

constexpr bool __get_m_UserSpecifiedWidth() const;

 bool __declspec(property(get=__get_m_UserSpecifiedHeight, put=__set_m_UserSpecifiedHeight))  m_UserSpecifiedHeight;

constexpr void __set_m_UserSpecifiedHeight(bool value) ;

constexpr bool __get_m_UserSpecifiedHeight() const;

 float_t __declspec(property(get=__get_m_ChildMinWidth, put=__set_m_ChildMinWidth))  m_ChildMinWidth;

constexpr void __set_m_ChildMinWidth(float_t value) ;

constexpr float_t __get_m_ChildMinWidth() const;

 float_t __declspec(property(get=__get_m_ChildMaxWidth, put=__set_m_ChildMaxWidth))  m_ChildMaxWidth;

constexpr void __set_m_ChildMaxWidth(float_t value) ;

constexpr float_t __get_m_ChildMaxWidth() const;

 float_t __declspec(property(get=__get_m_ChildMinHeight, put=__set_m_ChildMinHeight))  m_ChildMinHeight;

constexpr void __set_m_ChildMinHeight(float_t value) ;

constexpr float_t __get_m_ChildMinHeight() const;

 float_t __declspec(property(get=__get_m_ChildMaxHeight, put=__set_m_ChildMaxHeight))  m_ChildMaxHeight;

constexpr void __set_m_ChildMaxHeight(float_t value) ;

constexpr float_t __get_m_ChildMaxHeight() const;

 int32_t __declspec(property(get=__get_m_MarginLeft, put=__set_m_MarginLeft))  m_MarginLeft;

constexpr void __set_m_MarginLeft(int32_t value) ;

constexpr int32_t __get_m_MarginLeft() const;

 int32_t __declspec(property(get=__get_m_MarginRight, put=__set_m_MarginRight))  m_MarginRight;

constexpr void __set_m_MarginRight(int32_t value) ;

constexpr int32_t __get_m_MarginRight() const;

 int32_t __declspec(property(get=__get_m_MarginTop, put=__set_m_MarginTop))  m_MarginTop;

constexpr void __set_m_MarginTop(int32_t value) ;

constexpr int32_t __get_m_MarginTop() const;

 int32_t __declspec(property(get=__get_m_MarginBottom, put=__set_m_MarginBottom))  m_MarginBottom;

constexpr void __set_m_MarginBottom(int32_t value) ;

constexpr int32_t __get_m_MarginBottom() const;

static UnityEngine::GUILayoutEntry __declspec(property(get=__get_none, put=__set_none))  none;

static void __set_none(UnityEngine::GUILayoutEntry value) ;

static UnityEngine::GUILayoutEntry __get_none() ;


// Properties

 int32_t __declspec(property(get=get_marginLeft))  marginLeft;

 int32_t __declspec(property(get=get_marginRight))  marginRight;

 int32_t __declspec(property(get=get_marginTop))  marginTop;

 int32_t __declspec(property(get=get_marginBottom))  marginBottom;


// Methods

/// @brief Method get_marginLeft addr 0x2b91b94 size 0x8 virtual true final false
 int32_t get_marginLeft() ;

/// @brief Method get_marginRight addr 0x2b91b9c size 0x8 virtual true final false
 int32_t get_marginRight() ;

/// @brief Method get_marginTop addr 0x2b91ba4 size 0x8 virtual true final false
 int32_t get_marginTop() ;

/// @brief Method get_marginBottom addr 0x2b91bac size 0x8 virtual true final false
 int32_t get_marginBottom() ;

// Ctor Parameters []
explicit GUILayoutGroup() ;

/// @brief Method .ctor addr 0x2b89dd8 size 0x118 virtual false final false
 void _ctor() ;

/// @brief Method ApplyOptions addr 0x2b91bb4 size 0x120 virtual true final false
 void ApplyOptions(::ArrayW<UnityEngine::GUILayoutOption> options) ;

/// @brief Method ApplyStyleSettings addr 0x2b91cd4 size 0x78 virtual true final false
 void ApplyStyleSettings(UnityEngine::GUIStyle style) ;

/// @brief Method ResetCursor addr 0x2b8a774 size 0x8 virtual false final false
 void ResetCursor() ;

/// @brief Method GetNext addr 0x2b8abc8 size 0x378 virtual false final false
 UnityEngine::GUILayoutEntry GetNext() ;

/// @brief Method Add addr 0x2b8ab20 size 0xa8 virtual false final false
 void Add(UnityEngine::GUILayoutEntry e) ;

/// @brief Method CalcWidth addr 0x2b91d4c size 0x630 virtual true final false
 void CalcWidth() ;

/// @brief Method SetHorizontal addr 0x2b9237c size 0x814 virtual true final false
 void SetHorizontal(float_t x, float_t width) ;

/// @brief Method CalcHeight addr 0x2b92b90 size 0x580 virtual true final false
 void CalcHeight() ;

/// @brief Method SetVertical addr 0x2b93110 size 0x820 virtual true final false
 void SetVertical(float_t y, float_t height) ;

/// @brief Method ToString addr 0x2b93930 size 0x420 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUILayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayoutGroup, "UnityEngine", "GUILayoutGroup");
