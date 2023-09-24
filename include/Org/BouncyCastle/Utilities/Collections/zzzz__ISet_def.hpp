#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Type: Org.BouncyCastle.Utilities.Collections::ISet
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1781))
// CS Name: Org.BouncyCastle.Utilities.Collections.ISet
class CORDL_TYPE ISet : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~ISet() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISet(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_IsEmpty))  IsEmpty;

 bool __declspec(property(get=get_IsFixedSize))  IsFixedSize;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method AddAll addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddAll(System::Collections::IEnumerable e) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_IsEmpty addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsEmpty() ;

/// @brief Method get_IsFixedSize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsFixedSize() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveAll(System::Collections::IEnumerable e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(Org::BouncyCastle::Utilities::Collections::ISet);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Collections::ISet, "Org.BouncyCastle.Utilities.Collections", "ISet");
