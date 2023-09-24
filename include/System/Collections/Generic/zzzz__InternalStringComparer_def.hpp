#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Collections::Generic {
class InternalStringComparer;
}
// Type: System.Collections.Generic::InternalStringComparer
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3863))
// CS Name: System.Collections.Generic.InternalStringComparer
class CORDL_TYPE InternalStringComparer : public System::Collections::Generic::EqualityComparer_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InternalStringComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: " const&", def_value: None }]
constexpr InternalStringComparer(InternalStringComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalStringComparer", modifiers: "&&", def_value: None }]
constexpr InternalStringComparer(InternalStringComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalStringComparer(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<::StringW>(ptr) {
}


  constexpr InternalStringComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalStringComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalStringComparer& operator=(InternalStringComparer&& o) noexcept = default;
  constexpr InternalStringComparer& operator=(InternalStringComparer const& o) noexcept = default;
                


// Methods

/// @brief Method GetHashCode addr 0x241e33c size 0x20 virtual true final false
 int32_t GetHashCode(::StringW obj) ;

/// @brief Method Equals addr 0x241e35c size 0x30 virtual true final false
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method IndexOf addr 0x241e38c size 0x6c virtual true final false
 int32_t IndexOf(::ArrayW<::StringW> array, ::StringW value, int32_t startIndex, int32_t count) ;

static System::Collections::Generic::InternalStringComparer New_ctor() ;

/// @brief Method .ctor addr 0x241e3f8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
NEED_NO_BOX(System::Collections::Generic::InternalStringComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InternalStringComparer, "System.Collections.Generic", "InternalStringComparer");
