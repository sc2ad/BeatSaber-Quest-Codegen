#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ExtensionEnumerator;
}
// Type: System.Security.Cryptography.X509Certificates::X509ExtensionEnumerator
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7864))
// CS Name: System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
class CORDL_TYPE X509ExtensionEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509ExtensionEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionEnumerator", modifiers: " const&", def_value: None }]
constexpr X509ExtensionEnumerator(X509ExtensionEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ExtensionEnumerator", modifiers: "&&", def_value: None }]
constexpr X509ExtensionEnumerator(X509ExtensionEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ExtensionEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ExtensionEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ExtensionEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ExtensionEnumerator& operator=(X509ExtensionEnumerator&& o) noexcept = default;
  constexpr X509ExtensionEnumerator& operator=(X509ExtensionEnumerator const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerator __declspec(property(get=__get_enumerator, put=__set_enumerator))  enumerator;

constexpr void __set_enumerator(System::Collections::IEnumerator value) ;

constexpr System::Collections::IEnumerator __get_enumerator() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509Extension __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "list", ty: "System::Collections::ArrayList", modifiers: "", def_value: None }]
explicit X509ExtensionEnumerator(System::Collections::ArrayList list) ;

/// @brief Method .ctor addr 0x27f37b8 size 0x44 virtual false final false
 void _ctor(System::Collections::ArrayList list) ;

/// @brief Method get_Current addr 0x27f38c8 size 0xf0 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Extension get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27f39b8 size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x27f3a5c size 0xa0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27f3afc size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator, "System.Security.Cryptography.X509Certificates", "X509ExtensionEnumerator");
