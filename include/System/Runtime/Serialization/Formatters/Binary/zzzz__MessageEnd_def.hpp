#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MessageEnd;
}
// Type: System.Runtime.Serialization.Formatters.Binary::MessageEnd
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3270))
// CS Name: System.Runtime.Serialization.Formatters.Binary.MessageEnd
class CORDL_TYPE MessageEnd : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MessageEnd() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageEnd", modifiers: " const&", def_value: None }]
constexpr MessageEnd(MessageEnd const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageEnd", modifiers: "&&", def_value: None }]
constexpr MessageEnd(MessageEnd&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageEnd(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MessageEnd& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageEnd& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageEnd& operator=(MessageEnd&& o) noexcept = default;
  constexpr MessageEnd& operator=(MessageEnd const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MessageEnd() ;

/// @brief Method .ctor addr 0x23572e0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Write addr 0x23572e8 size 0x28 virtual true final true
 void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2357310 size 0x4 virtual true final true
 void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2357314 size 0x4 virtual false final false
 void Dump() ;

/// @brief Method Dump addr 0x2357318 size 0x4 virtual false final false
 void Dump(::System::IO::Stream sout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MessageEnd);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MessageEnd, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
