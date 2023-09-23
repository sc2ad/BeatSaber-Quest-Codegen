#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__UnmodifiableDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class UnmodifiableDictionaryProxy;
}
// Type: Org.BouncyCastle.Utilities.Collections::UnmodifiableDictionaryProxy
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1786))
// CS Name: Org.BouncyCastle.Utilities.Collections.UnmodifiableDictionaryProxy
class CORDL_TYPE UnmodifiableDictionaryProxy : public Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnmodifiableDictionaryProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: " const&", def_value: None }]
constexpr UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmodifiableDictionaryProxy", modifiers: "&&", def_value: None }]
constexpr UnmodifiableDictionaryProxy(UnmodifiableDictionaryProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmodifiableDictionaryProxy(void* ptr) noexcept : Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary(ptr) {
}


  constexpr UnmodifiableDictionaryProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmodifiableDictionaryProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmodifiableDictionaryProxy& operator=(UnmodifiableDictionaryProxy&& o) noexcept = default;
  constexpr UnmodifiableDictionaryProxy& operator=(UnmodifiableDictionaryProxy const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_d() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;


// Methods

// Ctor Parameters [CppParam { name: "d", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit UnmodifiableDictionaryProxy(System::Collections::IDictionary d) ;

/// @brief Method .ctor addr 0x10cb380 size 0x28 virtual false final false
 void _ctor(System::Collections::IDictionary d) ;

/// @brief Method Contains addr 0x10ce0d0 size 0xac virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType k) ;

/// @brief Method CopyTo addr 0x10ce17c size 0xb8 virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x10ce234 size 0xa4 virtual true final false
 int32_t get_Count() ;

/// @brief Method GetEnumerator addr 0x10ce2d8 size 0xa4 virtual true final false
 System::Collections::IDictionaryEnumerator GetEnumerator() ;

/// @brief Method get_IsFixedSize addr 0x10ce37c size 0xa4 virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsSynchronized addr 0x10ce420 size 0xa4 virtual true final false
 bool get_IsSynchronized() ;

/// @brief Method get_SyncRoot addr 0x10ce4c4 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_Keys addr 0x10ce568 size 0xa4 virtual true final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method get_Values addr 0x10ce60c size 0xa4 virtual true final false
 System::Collections::ICollection get_Values() ;

/// @brief Method GetValue addr 0x10ce6b0 size 0xa8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType k) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionaryProxy, "Org.BouncyCastle.Utilities.Collections", "UnmodifiableDictionaryProxy");
