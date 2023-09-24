#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TypeAccessException_def.hpp"
// Forward declare root types
namespace System::Reflection {
class MissingMetadataException;
}
// Type: System.Reflection::MissingMetadataException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2494))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3497))
// CS Name: System.Reflection.MissingMetadataException
class CORDL_TYPE MissingMetadataException : public System::TypeAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MissingMetadataException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: " const&", def_value: None }]
constexpr MissingMetadataException(MissingMetadataException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMetadataException", modifiers: "&&", def_value: None }]
constexpr MissingMetadataException(MissingMetadataException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissingMetadataException(void* ptr) noexcept : System::TypeAccessException(ptr) {
}


  constexpr MissingMetadataException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissingMetadataException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissingMetadataException& operator=(MissingMetadataException&& o) noexcept = default;
  constexpr MissingMetadataException& operator=(MissingMetadataException const& o) noexcept = default;
                


// Methods

static System::Reflection::MissingMetadataException New_ctor() ;

/// @brief Method .ctor addr 0x2380cac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::MissingMetadataException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MissingMetadataException, "System.Reflection", "MissingMetadataException");
