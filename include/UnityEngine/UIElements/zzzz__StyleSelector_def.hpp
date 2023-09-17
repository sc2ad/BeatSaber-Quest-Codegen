#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct StyleSelectorPart;
}
namespace UnityEngine::UIElements {
struct StyleSelectorRelationship;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSelector;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__StyleSelector____c;
}
// Type: ::<>c
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7370))
// CS Name: UnityEngine.UIElements.StyleSelector::<>c
class CORDL_TYPE ____UnityEngine__UIElements__StyleSelector____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__UIElements__StyleSelector____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleSelector____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleSelector____c(____UnityEngine__UIElements__StyleSelector____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__StyleSelector____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleSelector____c(____UnityEngine__UIElements__StyleSelector____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleSelector____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__StyleSelector____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleSelector____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__StyleSelector____c& operator=(____UnityEngine__UIElements__StyleSelector____c&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__StyleSelector____c& operator=(____UnityEngine__UIElements__StyleSelector____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c value) ;

static ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c __get___9() ;

static ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart,::StringW> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart,::StringW> value) ;

static ::System::Func_2<::UnityEngine::UIElements::StyleSelectorPart,::StringW> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__StyleSelector____c() ;

/// @brief Method .ctor addr 0x2cf3d74 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__10_0 addr 0x2cf3d7c size 0x8 virtual false final false
 ::StringW _ToString_b__10_0(::UnityEngine::UIElements::StyleSelectorPart p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleSelector
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7371))
// CS Name: UnityEngine.UIElements.StyleSelector
class CORDL_TYPE StyleSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StyleSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSelector", modifiers: " const&", def_value: None }]
constexpr StyleSelector(StyleSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSelector", modifiers: "&&", def_value: None }]
constexpr StyleSelector(StyleSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSelector& operator=(StyleSelector&& o) noexcept = default;
  constexpr StyleSelector& operator=(StyleSelector const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> __declspec(property(get=__get_m_Parts, put=__set_m_Parts))  m_Parts;

constexpr void __set_m_Parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> __get_m_Parts() const;

 ::UnityEngine::UIElements::StyleSelectorRelationship __declspec(property(get=__get_m_PreviousRelationship, put=__set_m_PreviousRelationship))  m_PreviousRelationship;

constexpr void __set_m_PreviousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value) ;

constexpr ::UnityEngine::UIElements::StyleSelectorRelationship __get_m_PreviousRelationship() const;

 int32_t __declspec(property(get=__get_pseudoStateMask, put=__set_pseudoStateMask))  pseudoStateMask;

constexpr void __set_pseudoStateMask(int32_t value) ;

constexpr int32_t __get_pseudoStateMask() const;

 int32_t __declspec(property(get=__get_negatedPseudoStateMask, put=__set_negatedPseudoStateMask))  negatedPseudoStateMask;

constexpr void __set_negatedPseudoStateMask(int32_t value) ;

constexpr int32_t __get_negatedPseudoStateMask() const;


// Properties

 ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> __declspec(property(get=get_parts, put=set_parts))  parts;

 ::UnityEngine::UIElements::StyleSelectorRelationship __declspec(property(get=get_previousRelationship, put=set_previousRelationship))  previousRelationship;


// Methods

/// @brief Method get_parts addr 0x2cf2298 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> get_parts() ;

/// @brief Method set_parts addr 0x2cf3ba8 size 0x8 virtual false final false
 void set_parts(::ArrayW<::UnityEngine::UIElements::StyleSelectorPart> value) ;

/// @brief Method get_previousRelationship addr 0x2cf3bb0 size 0x8 virtual false final false
 ::UnityEngine::UIElements::StyleSelectorRelationship get_previousRelationship() ;

/// @brief Method set_previousRelationship addr 0x2cf3bb8 size 0x8 virtual false final false
 void set_previousRelationship(::UnityEngine::UIElements::StyleSelectorRelationship value) ;

/// @brief Method ToString addr 0x2cf3bc0 size 0x140 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit StyleSelector() ;

/// @brief Method .ctor addr 0x2cf3d00 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSelector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSelector, "UnityEngine.UIElements", "StyleSelector");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSelector____c, "UnityEngine.UIElements", "StyleSelector/<>c");
