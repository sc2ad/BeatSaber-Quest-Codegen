#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine::UIElements {
struct StyleInt;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueCollection;
}
// Type: UnityEngine.UIElements::StyleValueCollection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7407))
// CS Name: UnityEngine.UIElements.StyleValueCollection
class CORDL_TYPE StyleValueCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StyleValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: " const&", def_value: None }]
constexpr StyleValueCollection(StyleValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleValueCollection", modifiers: "&&", def_value: None }]
constexpr StyleValueCollection(StyleValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleValueCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleValueCollection& operator=(StyleValueCollection&& o) noexcept = default;
  constexpr StyleValueCollection& operator=(StyleValueCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValue> __declspec(property(get=__get_m_Values, put=__set_m_Values))  m_Values;

constexpr void __set_m_Values(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValue> __get_m_Values() const;


// Methods

/// @brief Method GetStyleLength addr 0x2cfa624 size 0x74 virtual false final false
 UnityEngine::UIElements::StyleLength GetStyleLength(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetStyleFloat addr 0x2cfa858 size 0x58 virtual false final false
 UnityEngine::UIElements::StyleFloat GetStyleFloat(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method GetStyleInt addr 0x2cfa8b0 size 0x74 virtual false final false
 UnityEngine::UIElements::StyleInt GetStyleInt(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method TryGetStyleValue addr 0x2cfa698 size 0x1c0 virtual false final false
 bool TryGetStyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::StyleSheets::StyleValue> value) ;

/// @brief Method SetStyleValue addr 0x2cfa934 size 0x1fc virtual false final false
 void SetStyleValue(UnityEngine::UIElements::StyleSheets::StyleValue value) ;

static UnityEngine::UIElements::StyleValueCollection New_ctor() ;

/// @brief Method .ctor addr 0x2cfab30 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::StyleValueCollection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueCollection, "UnityEngine.UIElements", "StyleValueCollection");
