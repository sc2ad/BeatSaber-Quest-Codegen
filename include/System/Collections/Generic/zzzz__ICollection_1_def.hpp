#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Type: System.Collections.Generic::ICollection`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3810))
// CS Name: System.Collections.Generic.ICollection`1
class CORDL_TYPE ICollection_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~ICollection_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICollection_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Remove(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ICollection_1, "System.Collections.Generic", "ICollection`1");
