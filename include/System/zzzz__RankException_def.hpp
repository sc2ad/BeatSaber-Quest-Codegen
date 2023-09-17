#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class RankException;
}
// Type: System::RankException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2461))
// CS Name: System.RankException
class CORDL_TYPE RankException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RankException() = default;

// Ctor Parameters [CppParam { name: "", ty: "RankException", modifiers: " const&", def_value: None }]
constexpr RankException(RankException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RankException", modifiers: "&&", def_value: None }]
constexpr RankException(RankException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RankException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr RankException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RankException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RankException& operator=(RankException&& o) noexcept = default;
  constexpr RankException& operator=(RankException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RankException() ;

/// @brief Method .ctor addr 0x2451e54 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit RankException(::StringW message) ;

/// @brief Method .ctor addr 0x2451eac size 0x20 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit RankException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2451ecc size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::RankException);
DEFINE_IL2CPP_ARG_TYPE(::System::RankException, "System", "RankException");
