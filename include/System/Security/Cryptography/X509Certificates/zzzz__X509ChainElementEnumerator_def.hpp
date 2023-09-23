#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementEnumerator;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainElementEnumerator
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7856))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
class CORDL_TYPE X509ChainElementEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509ChainElementEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: " const&", def_value: None }]
constexpr X509ChainElementEnumerator(X509ChainElementEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: "&&", def_value: None }]
constexpr X509ChainElementEnumerator(X509ChainElementEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainElementEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ChainElementEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainElementEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainElementEnumerator& operator=(X509ChainElementEnumerator&& o) noexcept = default;
  constexpr X509ChainElementEnumerator& operator=(X509ChainElementEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_enumerator, put=__set_enumerator))  enumerator;

constexpr void __set_enumerator(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_enumerator() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509ChainElement __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "enumerable", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit X509ChainElementEnumerator(System::Collections::IEnumerable enumerable) ;

/// @brief Method .ctor addr 0x27edc7c size 0xb4 virtual false final false
 void _ctor(System::Collections::IEnumerable enumerable) ;

/// @brief Method get_Current addr 0x27edf4c size 0xf0 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainElement get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27ee03c size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x27ee0e0 size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27ee180 size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
