#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocumentList;
}
// Type: UnityEngine.UIElements::UIDocumentList
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7107))
// CS Name: UnityEngine.UIElements.UIDocumentList
class CORDL_TYPE UIDocumentList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UIDocumentList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIDocumentList", modifiers: " const&", def_value: None }]
constexpr UIDocumentList(UIDocumentList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIDocumentList", modifiers: "&&", def_value: None }]
constexpr UIDocumentList(UIDocumentList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIDocumentList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIDocumentList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIDocumentList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIDocumentList& operator=(UIDocumentList&& o) noexcept = default;
  constexpr UIDocumentList& operator=(UIDocumentList const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> __declspec(property(get=__get_m_AttachedUIDocuments, put=__set_m_AttachedUIDocuments))  m_AttachedUIDocuments;

constexpr void __set_m_AttachedUIDocuments(System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> __get_m_AttachedUIDocuments() const;


// Methods

/// @brief Method RemoveFromListAndFromVisualTree addr 0x2c9e098 size 0x78 virtual false final false
 void RemoveFromListAndFromVisualTree(UnityEngine::UIElements::UIDocument uiDocument) ;

/// @brief Method AddToListAndToVisualTree addr 0x2c9e118 size 0x354 virtual false final false
 void AddToListAndToVisualTree(UnityEngine::UIElements::UIDocument uiDocument, UnityEngine::UIElements::VisualElement visualTree, int32_t firstInsertIndex) ;

static UnityEngine::UIElements::UIDocumentList New_ctor() ;

/// @brief Method .ctor addr 0x2c9e46c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIDocumentList);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIDocumentList, "UnityEngine.UIElements", "UIDocumentList");
