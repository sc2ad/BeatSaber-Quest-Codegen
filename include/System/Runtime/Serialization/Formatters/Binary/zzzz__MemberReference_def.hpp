#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
// Type: System.Runtime.Serialization.Formatters.Binary::MemberReference
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3268))
// CS Name: System.Runtime.Serialization.Formatters.Binary.MemberReference
class CORDL_TYPE MemberReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MemberReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberReference", modifiers: " const&", def_value: None }]
constexpr MemberReference(MemberReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberReference", modifiers: "&&", def_value: None }]
constexpr MemberReference(MemberReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberReference& operator=(MemberReference&& o) noexcept = default;
  constexpr MemberReference& operator=(MemberReference const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_idRef, put=__set_idRef))  idRef;

constexpr void __set_idRef(int32_t value) ;

constexpr int32_t __get_idRef() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::MemberReference New_ctor() ;

/// @brief Method .ctor addr 0x2357130 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x2357138 size 0x8 virtual false final false
 void Set(int32_t idRef) ;

/// @brief Method Write addr 0x2357140 size 0x54 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2357194 size 0x28 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x23571bc size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::MemberReference);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberReference, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
