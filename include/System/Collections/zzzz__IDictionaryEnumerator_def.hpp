#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections {
class IDictionaryEnumerator;
}
// Type: System.Collections::IDictionaryEnumerator
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3743))
// CS Name: System.Collections.IDictionaryEnumerator
class CORDL_TYPE IDictionaryEnumerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

~IDictionaryEnumerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDictionaryEnumerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;


// Methods

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_Entry addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::DictionaryEntry get_Entry() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::IDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IDictionaryEnumerator, "System.Collections", "IDictionaryEnumerator");
