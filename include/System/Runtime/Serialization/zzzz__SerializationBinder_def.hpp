#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationBinder;
}
// Type: System.Runtime.Serialization::SerializationBinder
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3202))
// CS Name: System.Runtime.Serialization.SerializationBinder
class CORDL_TYPE SerializationBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializationBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: " const&", def_value: None }]
constexpr SerializationBinder(SerializationBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: "&&", def_value: None }]
constexpr SerializationBinder(SerializationBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationBinder& operator=(SerializationBinder&& o) noexcept = default;
  constexpr SerializationBinder& operator=(SerializationBinder const& o) noexcept = default;
                


// Methods

/// @brief Method BindToName addr 0x2348d2c size 0xc virtual true final false
 void BindToName(System::Type serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName) ;

/// @brief Method BindToType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type BindToType(::StringW assemblyName, ::StringW typeName) ;

static System::Runtime::Serialization::SerializationBinder New_ctor() ;

/// @brief Method .ctor addr 0x2348d38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationBinder, "System.Runtime.Serialization", "SerializationBinder");
