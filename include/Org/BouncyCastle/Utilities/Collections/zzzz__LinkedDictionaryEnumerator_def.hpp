#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
namespace System::Collections {
struct DictionaryEntry;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionaryEnumerator;
}
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionaryEnumerator
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1784))
// CS Name: Org.BouncyCastle.Utilities.Collections.LinkedDictionaryEnumerator
class CORDL_TYPE LinkedDictionaryEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionaryEnumerator
constexpr operator  System::Collections::IDictionaryEnumerator() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LinkedDictionaryEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: " const&", def_value: None }]
constexpr LinkedDictionaryEnumerator(LinkedDictionaryEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedDictionaryEnumerator", modifiers: "&&", def_value: None }]
constexpr LinkedDictionaryEnumerator(LinkedDictionaryEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedDictionaryEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedDictionaryEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedDictionaryEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedDictionaryEnumerator& operator=(LinkedDictionaryEnumerator&& o) noexcept = default;
  constexpr LinkedDictionaryEnumerator& operator=(LinkedDictionaryEnumerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Utilities::Collections::LinkedDictionary __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(Org::BouncyCastle::Utilities::Collections::LinkedDictionary value) ;

constexpr Org::BouncyCastle::Utilities::Collections::LinkedDictionary __get_parent() const;

 int32_t __declspec(property(get=__get_pos, put=__set_pos))  pos;

constexpr void __set_pos(int32_t value) ;

constexpr int32_t __get_pos() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;

 System::Collections::DictionaryEntry __declspec(property(get=get_Entry))  Entry;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Key))  Key;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CurrentKey))  CurrentKey;


// Methods

static Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator New_ctor(Org::BouncyCastle::Utilities::Collections::LinkedDictionary parent) ;

/// @brief Method .ctor addr 0x10cd1bc size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Collections::LinkedDictionary parent) ;

/// @brief Method get_Current addr 0x10cdac4 size 0x6c virtual true final false
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method get_Entry addr 0x10cdb30 size 0xe0 virtual true final false
 System::Collections::DictionaryEntry get_Entry() ;

/// @brief Method get_Key addr 0x10cdd8c size 0x4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Key() ;

/// @brief Method MoveNext addr 0x10cdd90 size 0x14c virtual true final false
 bool MoveNext() ;

/// @brief Method Reset addr 0x10cdedc size 0xc virtual true final false
 void Reset() ;

/// @brief Method get_Value addr 0x10cdee8 size 0xb8 virtual true final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_CurrentKey addr 0x10cdc10 size 0x17c virtual false final false
 ::bs_hook::Il2CppWrapperType get_CurrentKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::LinkedDictionaryEnumerator, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionaryEnumerator");
