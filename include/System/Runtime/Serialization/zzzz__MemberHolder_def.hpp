#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class MemberHolder;
}
// Type: System.Runtime.Serialization::MemberHolder
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3201))
// CS Name: System.Runtime.Serialization.MemberHolder
class CORDL_TYPE MemberHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MemberHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberHolder", modifiers: " const&", def_value: None }]
constexpr MemberHolder(MemberHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberHolder", modifiers: "&&", def_value: None }]
constexpr MemberHolder(MemberHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberHolder& operator=(MemberHolder&& o) noexcept = default;
  constexpr MemberHolder& operator=(MemberHolder const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__memberType, put=__set__memberType))  _memberType;

constexpr void __set__memberType(System::Type value) ;

constexpr System::Type __get__memberType() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get__context() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "ctx", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MemberHolder(System::Type type, System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method .ctor addr 0x2348c44 size 0x3c virtual false final false
 void _ctor(System::Type type, System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method GetHashCode addr 0x2348c80 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2348ca0 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::MemberHolder);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::MemberHolder, "System.Runtime.Serialization", "MemberHolder");
