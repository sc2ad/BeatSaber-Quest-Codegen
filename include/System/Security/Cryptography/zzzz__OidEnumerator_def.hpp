#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography {
class OidCollection;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidEnumerator;
}
// Type: System.Security.Cryptography::OidEnumerator
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7825))
// CS Name: System.Security.Cryptography.OidEnumerator
class CORDL_TYPE OidEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OidEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: " const&", def_value: None }]
constexpr OidEnumerator(OidEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "&&", def_value: None }]
constexpr OidEnumerator(OidEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OidEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OidEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OidEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OidEnumerator& operator=(OidEnumerator&& o) noexcept = default;
  constexpr OidEnumerator& operator=(OidEnumerator const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::OidCollection __declspec(property(get=__get__oids, put=__set__oids))  _oids;

constexpr void __set__oids(System::Security::Cryptography::OidCollection value) ;

constexpr System::Security::Cryptography::OidCollection __get__oids() const;

 int32_t __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(int32_t value) ;

constexpr int32_t __get__current() const;


// Properties

 System::Security::Cryptography::Oid __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "oids", ty: "System::Security::Cryptography::OidCollection", modifiers: "", def_value: None }]
explicit OidEnumerator(System::Security::Cryptography::OidCollection oids) ;

/// @brief Method .ctor addr 0x27e3a10 size 0x30 virtual false final false
 void _ctor(System::Security::Cryptography::OidCollection oids) ;

/// @brief Method get_Current addr 0x27e3c0c size 0x20 virtual false final false
 System::Security::Cryptography::Oid get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27e3c2c size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x27e3c30 size 0x50 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x27e3c80 size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::OidEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidEnumerator, "System.Security.Cryptography", "OidEnumerator");
