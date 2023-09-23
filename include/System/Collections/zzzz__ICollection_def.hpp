#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Collections {
class ICollection;
}
// Type: System.Collections::ICollection
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3740))
// CS Name: System.Collections.ICollection
class CORDL_TYPE ICollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~ICollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;

 bool __declspec(property(get=get_IsSynchronized))  IsSynchronized;


// Methods

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(System::Array array, int32_t index) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

/// @brief Method get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSynchronized() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::ICollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ICollection, "System.Collections", "ICollection");
