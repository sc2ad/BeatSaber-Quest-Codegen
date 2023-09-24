#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IDictionary;
}
namespace System {
class Type;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class CollectionUtilities;
}
// Type: Org.BouncyCastle.Utilities.Collections::CollectionUtilities
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1777))
// CS Name: Org.BouncyCastle.Utilities.Collections.CollectionUtilities
class CORDL_TYPE CollectionUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: " const&", def_value: None }]
constexpr CollectionUtilities(CollectionUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionUtilities", modifiers: "&&", def_value: None }]
constexpr CollectionUtilities(CollectionUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CollectionUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionUtilities& operator=(CollectionUtilities&& o) noexcept = default;
  constexpr CollectionUtilities& operator=(CollectionUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method AddRange addr 0x10cacac size 0x35c virtual false final false
static void AddRange(System::Collections::IList to, System::Collections::IEnumerable range) ;

/// @brief Method CheckElementsAreOfType addr 0x10cb008 size 0x314 virtual false final false
static bool CheckElementsAreOfType(System::Collections::IEnumerable e, System::Type t) ;

/// @brief Method ReadOnly addr 0x10cb31c size 0x64 virtual false final false
static System::Collections::IDictionary ReadOnly(System::Collections::IDictionary d) ;

/// @brief Method ReadOnly addr 0x10c9c50 size 0x64 virtual false final false
static System::Collections::IList ReadOnly(System::Collections::IList l) ;

/// @brief Method ReadOnly addr 0x10c9bec size 0x64 virtual false final false
static Org::BouncyCastle::Utilities::Collections::ISet ReadOnly(Org::BouncyCastle::Utilities::Collections::ISet s) ;

/// @brief Method RequireNext addr 0x10cb3f8 size 0x138 virtual false final false
static ::bs_hook::Il2CppWrapperType RequireNext(System::Collections::IEnumerator e) ;

/// @brief Method ToString addr 0x10cb530 size 0x30c virtual false final false
static ::StringW ToString(System::Collections::IEnumerable c) ;

static Org::BouncyCastle::Utilities::Collections::CollectionUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10cb83c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::CollectionUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::CollectionUtilities, "Org.BouncyCastle.Utilities.Collections", "CollectionUtilities");
