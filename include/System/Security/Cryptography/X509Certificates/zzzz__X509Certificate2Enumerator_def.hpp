#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Enumerator;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2Enumerator
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7846))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
class CORDL_TYPE X509Certificate2Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509Certificate2Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: " const&", def_value: None }]
constexpr X509Certificate2Enumerator(X509Certificate2Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: "&&", def_value: None }]
constexpr X509Certificate2Enumerator(X509Certificate2Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Certificate2Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2Enumerator& operator=(X509Certificate2Enumerator&& o) noexcept = default;
  constexpr X509Certificate2Enumerator& operator=(X509Certificate2Enumerator const& o) noexcept = default;
                


// Fields

 ::System::Collections::IEnumerator __declspec(property(get=__get_enumerator, put=__set_enumerator))  enumerator;

constexpr void __set_enumerator(::System::Collections::IEnumerator value) ;

constexpr ::System::Collections::IEnumerator __get_enumerator() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "collection", ty: "::System::Security::Cryptography::X509Certificates::X509Certificate2Collection", modifiers: "", def_value: None }]
explicit X509Certificate2Enumerator(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection collection) ;

/// @brief Method .ctor addr 0x27ea688 size 0xb4 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection collection) ;

/// @brief Method get_Current addr 0x27ea7f0 size 0xf0 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509Certificate2 get_Current() ;

/// @brief Method MoveNext addr 0x27ea8e0 size 0xa0 virtual false final false
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27ea980 size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.MoveNext addr 0x27eaa24 size 0xa0 virtual true final true
 bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27eaac4 size 0xa4 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
