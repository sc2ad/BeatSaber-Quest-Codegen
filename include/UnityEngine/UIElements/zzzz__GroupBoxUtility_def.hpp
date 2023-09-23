#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GroupBoxUtility;
}
// Type: UnityEngine.UIElements::GroupBoxUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7005))
// CS Name: UnityEngine.UIElements.GroupBoxUtility
class CORDL_TYPE GroupBoxUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GroupBoxUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: " const&", def_value: None }]
constexpr GroupBoxUtility(GroupBoxUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupBoxUtility", modifiers: "&&", def_value: None }]
constexpr GroupBoxUtility(GroupBoxUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupBoxUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupBoxUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupBoxUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupBoxUtility& operator=(GroupBoxUtility&& o) noexcept = default;
  constexpr GroupBoxUtility& operator=(GroupBoxUtility const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager> __declspec(property(get=__get_s_GroupManagers, put=__set_s_GroupManagers))  s_GroupManagers;

static void __set_s_GroupManagers(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBox,UnityEngine::UIElements::IGroupManager> __get_s_GroupManagers() ;

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager> __declspec(property(get=__get_s_GroupOptionManagerCache, put=__set_s_GroupOptionManagerCache))  s_GroupOptionManagerCache;

static void __set_s_GroupOptionManagerCache(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::IGroupBoxOption,UnityEngine::UIElements::IGroupManager> __get_s_GroupOptionManagerCache() ;

static System::Type __declspec(property(get=__get_k_GenericGroupBoxType, put=__set_k_GenericGroupBoxType))  k_GenericGroupBoxType;

static void __set_k_GenericGroupBoxType(System::Type value) ;

static System::Type __get_k_GenericGroupBoxType() ;


// Methods

/// @brief Method RegisterGroupBoxOptionCallbacks addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RegisterGroupBoxOptionCallbacks(T option) ;

/// @brief Method OnOptionSelected addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void OnOptionSelected(T selectedOption) ;

/// @brief Method OnOptionAttachToPanel addr 0x2c8b240 size 0x24c virtual false final false
static void OnOptionAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method OnOptionDetachFromPanel addr 0x2c8b86c size 0x1b4 virtual false final false
static void OnOptionDetachFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method FindOrCreateGroupManager addr 0x2c8b48c size 0x3e0 virtual false final false
static UnityEngine::UIElements::IGroupManager FindOrCreateGroupManager(UnityEngine::UIElements::IGroupBox groupBox) ;

/// @brief Method OnGroupBoxDetachedFromPanel addr 0x2c8ba20 size 0xb4 virtual false final false
static void OnGroupBoxDetachedFromPanel(UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method OnPanelDestroyed addr 0x2c8bad4 size 0xdc virtual false final false
static void OnPanelDestroyed(UnityEngine::UIElements::BaseVisualElementPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::GroupBoxUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::GroupBoxUtility, "UnityEngine.UIElements", "GroupBoxUtility");
