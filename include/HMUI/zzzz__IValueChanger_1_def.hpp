#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class IValueChanger_1;
}
// Type: HMUI::IValueChanger`1
namespace HMUI {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13577))
// CS Name: HMUI.IValueChanger`1
class CORDL_TYPE IValueChanger_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValueChanger_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValueChanger_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_valueChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_valueChangedEvent(System::Action_1<T> value) ;

/// @brief Method remove_valueChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_valueChangedEvent(System::Action_1<T> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::IValueChanger_1, "HMUI", "IValueChanger`1");
