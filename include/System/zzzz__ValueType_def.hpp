#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
class ValueType;
}
// Type: System::ValueType
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2638))
// CS Name: System.ValueType
class CORDL_TYPE ValueType : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};


// Methods

// Ctor Parameters []
constexpr explicit ValueType()  : ::bs_hook::ValueTypeWrapper() {
}

/// @brief Method .ctor addr 0x249b9c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method InternalEquals addr 0x249b9d0 size 0x4 virtual false final false
static bool InternalEquals(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> fields) ;

/// @brief Method DefaultEquals addr 0x249b9d4 size 0x1b0 virtual false final false
static bool DefaultEquals(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2) ;

/// @brief Method Equals addr 0x249bb84 size 0x4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method InternalGetHashCode addr 0x249bb88 size 0x4 virtual false final false
static int32_t InternalGetHashCode(::bs_hook::Il2CppWrapperType o, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> fields) ;

/// @brief Method GetHashCode addr 0x249bb8c size 0x78 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x249bc04 size 0x28 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ValueType);
DEFINE_IL2CPP_ARG_TYPE(::System::ValueType, "System", "ValueType");
