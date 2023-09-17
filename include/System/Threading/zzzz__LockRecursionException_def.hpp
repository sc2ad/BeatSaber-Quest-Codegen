#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading {
class LockRecursionException;
}
// Type: System.Threading::LockRecursionException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2663))
// CS Name: System.Threading.LockRecursionException
class CORDL_TYPE LockRecursionException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~LockRecursionException() = default;

// Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: " const&", def_value: None }]
constexpr LockRecursionException(LockRecursionException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LockRecursionException", modifiers: "&&", def_value: None }]
constexpr LockRecursionException(LockRecursionException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LockRecursionException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr LockRecursionException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LockRecursionException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LockRecursionException& operator=(LockRecursionException&& o) noexcept = default;
  constexpr LockRecursionException& operator=(LockRecursionException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LockRecursionException() ;

/// @brief Method .ctor addr 0x24a2830 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit LockRecursionException(::StringW message) ;

/// @brief Method .ctor addr 0x24a2888 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit LockRecursionException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a28f0 size 0x80 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::LockRecursionException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::LockRecursionException, "System.Threading", "LockRecursionException");
