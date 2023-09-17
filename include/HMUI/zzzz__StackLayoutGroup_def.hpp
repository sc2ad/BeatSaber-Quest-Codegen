#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace HMUI {
class StackLayoutGroup;
}
// Type: HMUI::StackLayoutGroup
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13616))
// CS Name: HMUI.StackLayoutGroup
class CORDL_TYPE StackLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~StackLayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackLayoutGroup", modifiers: " const&", def_value: None }]
constexpr StackLayoutGroup(StackLayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackLayoutGroup", modifiers: "&&", def_value: None }]
constexpr StackLayoutGroup(StackLayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackLayoutGroup(void* ptr) noexcept : ::UnityEngine::UI::LayoutGroup(ptr) {
}


  constexpr StackLayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackLayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackLayoutGroup& operator=(StackLayoutGroup&& o) noexcept = default;
  constexpr StackLayoutGroup& operator=(StackLayoutGroup const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ChildForceExpandWidth, put=__set_m_ChildForceExpandWidth))  m_ChildForceExpandWidth;

constexpr void __set_m_ChildForceExpandWidth(bool value) ;

constexpr bool __get_m_ChildForceExpandWidth() const;

 bool __declspec(property(get=__get_m_ChildForceExpandHeight, put=__set_m_ChildForceExpandHeight))  m_ChildForceExpandHeight;

constexpr void __set_m_ChildForceExpandHeight(bool value) ;

constexpr bool __get_m_ChildForceExpandHeight() const;


// Properties

 bool __declspec(property(get=get_childForceExpandWidth, put=set_childForceExpandWidth))  childForceExpandWidth;

 bool __declspec(property(get=get_childForceExpandHeight, put=set_childForceExpandHeight))  childForceExpandHeight;


// Methods

/// @brief Method get_childForceExpandWidth addr 0x1fb129c size 0x8 virtual false final false
 bool get_childForceExpandWidth() ;

/// @brief Method set_childForceExpandWidth addr 0x1fb12a4 size 0x5c virtual false final false
 void set_childForceExpandWidth(bool value) ;

/// @brief Method get_childForceExpandHeight addr 0x1fb1300 size 0x8 virtual false final false
 bool get_childForceExpandHeight() ;

/// @brief Method set_childForceExpandHeight addr 0x1fb1308 size 0x5c virtual false final false
 void set_childForceExpandHeight(bool value) ;

// Ctor Parameters []
explicit StackLayoutGroup() ;

/// @brief Method .ctor addr 0x1fb1364 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x1fb1374 size 0x20 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x1fb1508 size 0x8 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method SetLayoutHorizontal addr 0x1fb1510 size 0x8 virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x1fb1720 size 0x8 virtual true final false
 void SetLayoutVertical() ;

/// @brief Method CalcAlongAxis addr 0x1fb1394 size 0x174 virtual false final false
 void CalcAlongAxis(int32_t axis) ;

/// @brief Method SetChildrenAlongAxis addr 0x1fb1518 size 0x208 virtual false final false
 void SetChildrenAlongAxis(int32_t axis) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::StackLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::StackLayoutGroup, "HMUI", "StackLayoutGroup");
