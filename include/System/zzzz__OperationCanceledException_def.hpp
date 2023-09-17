#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class OperationCanceledException;
}
// Type: System::OperationCanceledException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2454))
// CS Name: System.OperationCanceledException
class CORDL_TYPE OperationCanceledException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~OperationCanceledException() = default;

// Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: " const&", def_value: None }]
constexpr OperationCanceledException(OperationCanceledException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OperationCanceledException", modifiers: "&&", def_value: None }]
constexpr OperationCanceledException(OperationCanceledException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OperationCanceledException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr OperationCanceledException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OperationCanceledException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OperationCanceledException& operator=(OperationCanceledException&& o) noexcept = default;
  constexpr OperationCanceledException& operator=(OperationCanceledException const& o) noexcept = default;
                


// Fields

 ::System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken, put=__set__cancellationToken))  _cancellationToken;

constexpr void __set__cancellationToken(::System::Threading::CancellationToken value) ;

constexpr ::System::Threading::CancellationToken __get__cancellationToken() const;


// Properties

 ::System::Threading::CancellationToken __declspec(property(get=get_CancellationToken, put=set_CancellationToken))  CancellationToken;


// Methods

/// @brief Method get_CancellationToken addr 0x244fb24 size 0x8 virtual false final false
 ::System::Threading::CancellationToken get_CancellationToken() ;

/// @brief Method set_CancellationToken addr 0x244fb2c size 0x8 virtual false final false
 void set_CancellationToken(::System::Threading::CancellationToken value) ;

// Ctor Parameters []
explicit OperationCanceledException() ;

/// @brief Method .ctor addr 0x244fb34 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit OperationCanceledException(::StringW message) ;

/// @brief Method .ctor addr 0x244fc04 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit OperationCanceledException(::StringW message, ::System::Threading::CancellationToken token) ;

/// @brief Method .ctor addr 0x244fc24 size 0x30 virtual false final false
 void _ctor(::StringW message, ::System::Threading::CancellationToken token) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit OperationCanceledException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x244fc54 size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::OperationCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::OperationCanceledException, "System", "OperationCanceledException");
