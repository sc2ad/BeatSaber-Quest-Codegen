#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItem;
}
// Type: ::ObjectiveListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5892))
// CS Name: ObjectiveListItem
class CORDL_TYPE ObjectiveListItem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObjectiveListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItem", modifiers: " const&", def_value: None }]
constexpr ObjectiveListItem(ObjectiveListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItem", modifiers: "&&", def_value: None }]
constexpr ObjectiveListItem(ObjectiveListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectiveListItem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObjectiveListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectiveListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectiveListItem& operator=(ObjectiveListItem&& o) noexcept = default;
  constexpr ObjectiveListItem& operator=(ObjectiveListItem const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__titleText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__conditionText, put=__set__conditionText))  _conditionText;

constexpr void __set__conditionText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__conditionText() const;


// Properties

 ::StringW __declspec(property(put=set_title))  title;

 ::StringW __declspec(property(put=set_conditionText))  conditionText;

 bool __declspec(property(put=set_hideCondition))  hideCondition;


// Methods

/// @brief Method set_title addr 0x218e580 size 0x24 virtual false final false
 void set_title(::StringW value) ;

/// @brief Method set_conditionText addr 0x218e5a4 size 0x24 virtual false final false
 void set_conditionText(::StringW value) ;

/// @brief Method set_hideCondition addr 0x218e5c8 size 0x34 virtual false final false
 void set_hideCondition(bool value) ;

// Ctor Parameters []
explicit ObjectiveListItem() ;

/// @brief Method .ctor addr 0x218e5fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObjectiveListItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObjectiveListItem, "", "ObjectiveListItem");
