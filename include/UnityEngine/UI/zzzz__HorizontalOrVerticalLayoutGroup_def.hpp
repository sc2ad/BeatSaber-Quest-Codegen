#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalOrVerticalLayoutGroup;
}
// Type: UnityEngine.UI::HorizontalOrVerticalLayoutGroup
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13030))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13022))
// CS Name: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
class CORDL_TYPE HorizontalOrVerticalLayoutGroup : public UnityEngine::UI::LayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HorizontalOrVerticalLayoutGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: " const&", def_value: None }]
constexpr HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: "&&", def_value: None }]
constexpr HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HorizontalOrVerticalLayoutGroup(void* ptr) noexcept : UnityEngine::UI::LayoutGroup(ptr) {
}


  constexpr HorizontalOrVerticalLayoutGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HorizontalOrVerticalLayoutGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HorizontalOrVerticalLayoutGroup& operator=(HorizontalOrVerticalLayoutGroup&& o) noexcept = default;
  constexpr HorizontalOrVerticalLayoutGroup& operator=(HorizontalOrVerticalLayoutGroup const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Spacing, put=__set_m_Spacing))  m_Spacing;

constexpr void __set_m_Spacing(float_t value) ;

constexpr float_t __get_m_Spacing() const;

 bool __declspec(property(get=__get_m_ChildForceExpandWidth, put=__set_m_ChildForceExpandWidth))  m_ChildForceExpandWidth;

constexpr void __set_m_ChildForceExpandWidth(bool value) ;

constexpr bool __get_m_ChildForceExpandWidth() const;

 bool __declspec(property(get=__get_m_ChildForceExpandHeight, put=__set_m_ChildForceExpandHeight))  m_ChildForceExpandHeight;

constexpr void __set_m_ChildForceExpandHeight(bool value) ;

constexpr bool __get_m_ChildForceExpandHeight() const;

 bool __declspec(property(get=__get_m_ChildControlWidth, put=__set_m_ChildControlWidth))  m_ChildControlWidth;

constexpr void __set_m_ChildControlWidth(bool value) ;

constexpr bool __get_m_ChildControlWidth() const;

 bool __declspec(property(get=__get_m_ChildControlHeight, put=__set_m_ChildControlHeight))  m_ChildControlHeight;

constexpr void __set_m_ChildControlHeight(bool value) ;

constexpr bool __get_m_ChildControlHeight() const;

 bool __declspec(property(get=__get_m_ChildScaleWidth, put=__set_m_ChildScaleWidth))  m_ChildScaleWidth;

constexpr void __set_m_ChildScaleWidth(bool value) ;

constexpr bool __get_m_ChildScaleWidth() const;

 bool __declspec(property(get=__get_m_ChildScaleHeight, put=__set_m_ChildScaleHeight))  m_ChildScaleHeight;

constexpr void __set_m_ChildScaleHeight(bool value) ;

constexpr bool __get_m_ChildScaleHeight() const;

 bool __declspec(property(get=__get_m_ReverseArrangement, put=__set_m_ReverseArrangement))  m_ReverseArrangement;

constexpr void __set_m_ReverseArrangement(bool value) ;

constexpr bool __get_m_ReverseArrangement() const;


// Properties

 float_t __declspec(property(get=get_spacing, put=set_spacing))  spacing;

 bool __declspec(property(get=get_childForceExpandWidth, put=set_childForceExpandWidth))  childForceExpandWidth;

 bool __declspec(property(get=get_childForceExpandHeight, put=set_childForceExpandHeight))  childForceExpandHeight;

 bool __declspec(property(get=get_childControlWidth, put=set_childControlWidth))  childControlWidth;

 bool __declspec(property(get=get_childControlHeight, put=set_childControlHeight))  childControlHeight;

 bool __declspec(property(get=get_childScaleWidth, put=set_childScaleWidth))  childScaleWidth;

 bool __declspec(property(get=get_childScaleHeight, put=set_childScaleHeight))  childScaleHeight;

 bool __declspec(property(get=get_reverseArrangement, put=set_reverseArrangement))  reverseArrangement;


// Methods

/// @brief Method get_spacing addr 0x2bfd76c size 0x8 virtual false final false
 float_t get_spacing() ;

/// @brief Method set_spacing addr 0x2bfd774 size 0x5c virtual false final false
 void set_spacing(float_t value) ;

/// @brief Method get_childForceExpandWidth addr 0x2bfd7d0 size 0x8 virtual false final false
 bool get_childForceExpandWidth() ;

/// @brief Method set_childForceExpandWidth addr 0x2bfd7d8 size 0x5c virtual false final false
 void set_childForceExpandWidth(bool value) ;

/// @brief Method get_childForceExpandHeight addr 0x2bfd834 size 0x8 virtual false final false
 bool get_childForceExpandHeight() ;

/// @brief Method set_childForceExpandHeight addr 0x2bfd83c size 0x5c virtual false final false
 void set_childForceExpandHeight(bool value) ;

/// @brief Method get_childControlWidth addr 0x2bfd898 size 0x8 virtual false final false
 bool get_childControlWidth() ;

/// @brief Method set_childControlWidth addr 0x2bfd8a0 size 0x5c virtual false final false
 void set_childControlWidth(bool value) ;

/// @brief Method get_childControlHeight addr 0x2bfd8fc size 0x8 virtual false final false
 bool get_childControlHeight() ;

/// @brief Method set_childControlHeight addr 0x2bfd904 size 0x5c virtual false final false
 void set_childControlHeight(bool value) ;

/// @brief Method get_childScaleWidth addr 0x2bfd960 size 0x8 virtual false final false
 bool get_childScaleWidth() ;

/// @brief Method set_childScaleWidth addr 0x2bfd968 size 0x5c virtual false final false
 void set_childScaleWidth(bool value) ;

/// @brief Method get_childScaleHeight addr 0x2bfd9c4 size 0x8 virtual false final false
 bool get_childScaleHeight() ;

/// @brief Method set_childScaleHeight addr 0x2bfd9cc size 0x5c virtual false final false
 void set_childScaleHeight(bool value) ;

/// @brief Method get_reverseArrangement addr 0x2bfda28 size 0x8 virtual false final false
 bool get_reverseArrangement() ;

/// @brief Method set_reverseArrangement addr 0x2bfda30 size 0x5c virtual false final false
 void set_reverseArrangement(bool value) ;

/// @brief Method CalcAlongAxis addr 0x2bfce38 size 0x2a4 virtual false final false
 void CalcAlongAxis(int32_t axis, bool isVertical) ;

/// @brief Method SetChildrenAlongAxis addr 0x2bfd0f4 size 0x66c virtual false final false
 void SetChildrenAlongAxis(int32_t axis, bool isVertical) ;

/// @brief Method GetChildSizes addr 0x2bfda8c size 0x118 virtual false final false
 void GetChildSizes(UnityEngine::RectTransform child, int32_t axis, bool controlSize, bool childForceExpand, ByRef<float_t> min, ByRef<float_t> preferred, ByRef<float_t> flexible) ;

static UnityEngine::UI::HorizontalOrVerticalLayoutGroup New_ctor() ;

/// @brief Method .ctor addr 0x2bfce0c size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::HorizontalOrVerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalOrVerticalLayoutGroup, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
