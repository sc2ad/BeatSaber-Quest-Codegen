#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class EnumerableProxy;
}
// Type: Org.BouncyCastle.Utilities.Collections::EnumerableProxy
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1780))
// CS Name: Org.BouncyCastle.Utilities.Collections.EnumerableProxy
class CORDL_TYPE EnumerableProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EnumerableProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: " const&", def_value: None }]
constexpr EnumerableProxy(EnumerableProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableProxy", modifiers: "&&", def_value: None }]
constexpr EnumerableProxy(EnumerableProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableProxy& operator=(EnumerableProxy&& o) noexcept = default;
  constexpr EnumerableProxy& operator=(EnumerableProxy const& o) noexcept = default;
                


// Fields

 System::Collections::IEnumerable __declspec(property(get=__get_inner, put=__set_inner))  inner;

constexpr void __set_inner(System::Collections::IEnumerable value) ;

constexpr System::Collections::IEnumerable __get_inner() const;


// Methods

static Org::BouncyCastle::Utilities::Collections::EnumerableProxy New_ctor(System::Collections::IEnumerable inner) ;

/// @brief Method .ctor addr 0x10cb9d0 size 0x78 virtual false final false
 void _ctor(System::Collections::IEnumerable inner) ;

/// @brief Method GetEnumerator addr 0x10cba48 size 0xa0 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::EnumerableProxy);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::EnumerableProxy, "Org.BouncyCastle.Utilities.Collections", "EnumerableProxy");
