#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace HMUI {
class InputFieldView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewChangeBinder;
}
// Type: HMUI::InputFieldViewChangeBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13569))
// CS Name: HMUI.InputFieldViewChangeBinder
class CORDL_TYPE InputFieldViewChangeBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InputFieldViewChangeBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: " const&", def_value: None }]
constexpr InputFieldViewChangeBinder(InputFieldViewChangeBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: "&&", def_value: None }]
constexpr InputFieldViewChangeBinder(InputFieldViewChangeBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFieldViewChangeBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputFieldViewChangeBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFieldViewChangeBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFieldViewChangeBinder& operator=(InputFieldViewChangeBinder&& o) noexcept = default;
  constexpr InputFieldViewChangeBinder& operator=(InputFieldViewChangeBinder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Tuple_2<HMUI::InputFieldView,UnityEngine::Events::UnityAction_1<HMUI::InputFieldView>>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::InputFieldView,UnityEngine::Events::UnityAction_1<HMUI::InputFieldView>>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_2<HMUI::InputFieldView,UnityEngine::Events::UnityAction_1<HMUI::InputFieldView>>> __get__bindings() const;

 bool __declspec(property(get=__get__enabled, put=__set__enabled))  _enabled;

constexpr void __set__enabled(bool value) ;

constexpr bool __get__enabled() const;


// Methods

static HMUI::InputFieldViewChangeBinder New_ctor() ;

/// @brief Method .ctor addr 0x1fa61a8 size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x1fa61cc size 0x74 virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x1fa6240 size 0x164 virtual false final false
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::InputFieldView,System::Action_1<HMUI::InputFieldView>>> bindings) ;

/// @brief Method AddBinding addr 0x1fa63a4 size 0xd8 virtual false final false
 void AddBinding(HMUI::InputFieldView inputField, System::Action_1<HMUI::InputFieldView> action) ;

/// @brief Method ClearBindings addr 0x1fa647c size 0x234 virtual false final false
 void ClearBindings() ;

/// @brief Method Disable addr 0x1fa66b0 size 0x204 virtual false final false
 void Disable() ;

/// @brief Method Enable addr 0x1fa68b4 size 0x208 virtual false final false
 void Enable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::InputFieldViewChangeBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::InputFieldViewChangeBinder, "HMUI", "InputFieldViewChangeBinder");
