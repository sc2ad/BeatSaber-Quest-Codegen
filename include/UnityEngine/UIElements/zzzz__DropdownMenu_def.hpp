#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
namespace UnityEngine::UIElements {
class DropdownMenuEventInfo;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenu;
}
// Type: UnityEngine.UIElements::DropdownMenu
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7036))
// CS Name: UnityEngine.UIElements.DropdownMenu
class CORDL_TYPE DropdownMenu : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DropdownMenu() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: " const&", def_value: None }]
constexpr DropdownMenu(DropdownMenu const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenu", modifiers: "&&", def_value: None }]
constexpr DropdownMenu(DropdownMenu&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownMenu(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DropdownMenu& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownMenu& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownMenu& operator=(DropdownMenu&& o) noexcept = default;
  constexpr DropdownMenu& operator=(DropdownMenu const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::DropdownMenuItem> __declspec(property(get=__get_m_MenuItems, put=__set_m_MenuItems))  m_MenuItems;

constexpr void __set_m_MenuItems(System::Collections::Generic::List_1<UnityEngine::UIElements::DropdownMenuItem> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::DropdownMenuItem> __get_m_MenuItems() const;

 UnityEngine::UIElements::DropdownMenuEventInfo __declspec(property(get=__get_m_DropdownMenuEventInfo, put=__set_m_DropdownMenuEventInfo))  m_DropdownMenuEventInfo;

constexpr void __set_m_DropdownMenuEventInfo(UnityEngine::UIElements::DropdownMenuEventInfo value) ;

constexpr UnityEngine::UIElements::DropdownMenuEventInfo __get_m_DropdownMenuEventInfo() const;


// Methods

/// @brief Method MenuItems addr 0x2c8fd20 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::UIElements::DropdownMenuItem> MenuItems() ;

/// @brief Method AppendAction addr 0x2c8fd28 size 0x104 virtual false final false
 void AppendAction(::StringW actionName, System::Action_1<UnityEngine::UIElements::DropdownMenuAction> action, System::Func_2<UnityEngine::UIElements::DropdownMenuAction,UnityEngine::UIElements::UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method InsertSeparator addr 0x2c8fe2c size 0x140 virtual false final false
 void InsertSeparator(::StringW subMenuPath, int32_t atIndex) ;

/// @brief Method PrepareForDisplay addr 0x2c8ff6c size 0x2bc virtual false final false
 void PrepareForDisplay(UnityEngine::UIElements::EventBase e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DropdownMenu);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DropdownMenu, "UnityEngine.UIElements", "DropdownMenu");
