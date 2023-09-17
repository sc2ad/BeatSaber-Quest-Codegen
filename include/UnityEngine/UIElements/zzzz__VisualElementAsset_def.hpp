#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct PickingMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Type: UnityEngine.UIElements::VisualElementAsset
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7106))
// CS Name: UnityEngine.UIElements.VisualElementAsset
class CORDL_TYPE VisualElementAsset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IUxmlAttributes
constexpr operator  ::UnityEngine::UIElements::IUxmlAttributes() const noexcept;

/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~VisualElementAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: " const&", def_value: None }]
constexpr VisualElementAsset(VisualElementAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "&&", def_value: None }]
constexpr VisualElementAsset(VisualElementAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementAsset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementAsset& operator=(VisualElementAsset&& o) noexcept = default;
  constexpr VisualElementAsset& operator=(VisualElementAsset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(int32_t value) ;

constexpr int32_t __get_m_Id() const;

 int32_t __declspec(property(get=__get_m_OrderInDocument, put=__set_m_OrderInDocument))  m_OrderInDocument;

constexpr void __set_m_OrderInDocument(int32_t value) ;

constexpr int32_t __get_m_OrderInDocument() const;

 int32_t __declspec(property(get=__get_m_ParentId, put=__set_m_ParentId))  m_ParentId;

constexpr void __set_m_ParentId(int32_t value) ;

constexpr int32_t __get_m_ParentId() const;

 int32_t __declspec(property(get=__get_m_RuleIndex, put=__set_m_RuleIndex))  m_RuleIndex;

constexpr void __set_m_RuleIndex(int32_t value) ;

constexpr int32_t __get_m_RuleIndex() const;

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 ::UnityEngine::UIElements::PickingMode __declspec(property(get=__get_m_PickingMode, put=__set_m_PickingMode))  m_PickingMode;

constexpr void __set_m_PickingMode(::UnityEngine::UIElements::PickingMode value) ;

constexpr ::UnityEngine::UIElements::PickingMode __get_m_PickingMode() const;

 ::StringW __declspec(property(get=__get_m_FullTypeName, put=__set_m_FullTypeName))  m_FullTypeName;

constexpr void __set_m_FullTypeName(::StringW value) ;

constexpr ::StringW __get_m_FullTypeName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_Classes, put=__set_m_Classes))  m_Classes;

constexpr void __set_m_Classes(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_Classes() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_StylesheetPaths, put=__set_m_StylesheetPaths))  m_StylesheetPaths;

constexpr void __set_m_StylesheetPaths(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_m_StylesheetPaths() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=__get_m_Stylesheets, put=__set_m_Stylesheets))  m_Stylesheets;

constexpr void __set_m_Stylesheets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __get_m_Stylesheets() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_Properties, put=__set_m_Properties))  m_Properties;

constexpr void __set_m_Properties(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_m_Properties() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 int32_t __declspec(property(get=get_orderInDocument))  orderInDocument;

 int32_t __declspec(property(get=get_parentId))  parentId;

 int32_t __declspec(property(get=get_ruleIndex))  ruleIndex;

 ::StringW __declspec(property(get=get_fullTypeName))  fullTypeName;

 ::ArrayW<::StringW> __declspec(property(get=get_classes))  classes;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_stylesheetPaths))  stylesheetPaths;

 bool __declspec(property(get=get_hasStylesheetPaths))  hasStylesheetPaths;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=get_stylesheets))  stylesheets;

 bool __declspec(property(get=get_hasStylesheets))  hasStylesheets;


// Methods

/// @brief Method get_id addr 0x2c9b364 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_orderInDocument addr 0x2c9c274 size 0x8 virtual false final false
 int32_t get_orderInDocument() ;

/// @brief Method get_parentId addr 0x2c9b138 size 0x8 virtual false final false
 int32_t get_parentId() ;

/// @brief Method get_ruleIndex addr 0x2c9c230 size 0x8 virtual false final false
 int32_t get_ruleIndex() ;

/// @brief Method get_fullTypeName addr 0x2c9c4f8 size 0x8 virtual false final false
 ::StringW get_fullTypeName() ;

/// @brief Method get_classes addr 0x2c9c6fc size 0x8 virtual false final false
 ::ArrayW<::StringW> get_classes() ;

/// @brief Method get_stylesheetPaths addr 0x2c9c714 size 0x80 virtual false final false
 ::System::Collections::Generic::List_1<::StringW> get_stylesheetPaths() ;

/// @brief Method get_hasStylesheetPaths addr 0x2c9c704 size 0x10 virtual false final false
 bool get_hasStylesheetPaths() ;

/// @brief Method get_stylesheets addr 0x2c9c7a4 size 0x80 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> get_stylesheets() ;

/// @brief Method get_hasStylesheets addr 0x2c9c794 size 0x10 virtual false final false
 bool get_hasStylesheets() ;

/// @brief Method OnBeforeSerialize addr 0x2c9dc28 size 0x4 virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2c9dc2c size 0x188 virtual true final true
 void OnAfterDeserialize() ;

/// @brief Method AddProperty addr 0x2c9ddb4 size 0x4 virtual false final false
 void AddProperty(::StringW propertyName, ::StringW propertyValue) ;

/// @brief Method SetOrAddProperty addr 0x2c9ddb8 size 0x210 virtual false final false
 void SetOrAddProperty(::StringW propertyName, ::StringW propertyValue) ;

/// @brief Method TryGetAttributeValue addr 0x2c9dfc8 size 0xd0 virtual true final true
 bool TryGetAttributeValue(::StringW propertyName, ByRef<::StringW> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAsset, "UnityEngine.UIElements", "VisualElementAsset");
