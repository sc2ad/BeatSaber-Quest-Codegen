#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SafeSerializationEventArgs;
}
// Type: System.Runtime.Serialization::SafeSerializationEventArgs
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3221))
// CS Name: System.Runtime.Serialization.SafeSerializationEventArgs
class CORDL_TYPE SafeSerializationEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SafeSerializationEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: " const&", def_value: None }]
constexpr SafeSerializationEventArgs(SafeSerializationEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationEventArgs", modifiers: "&&", def_value: None }]
constexpr SafeSerializationEventArgs(SafeSerializationEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeSerializationEventArgs(void* ptr) noexcept : ::System::EventArgs(ptr) {
}


  constexpr SafeSerializationEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeSerializationEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeSerializationEventArgs& operator=(SafeSerializationEventArgs&& o) noexcept = default;
  constexpr SafeSerializationEventArgs& operator=(SafeSerializationEventArgs const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_streamingContext, put=__set_m_streamingContext))  m_streamingContext;

constexpr void __set_m_streamingContext(::System::Runtime::Serialization::StreamingContext value) ;

constexpr ::System::Runtime::Serialization::StreamingContext __get_m_streamingContext() const;

 ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_serializedStates, put=__set_m_serializedStates))  m_serializedStates;

constexpr void __set_m_serializedStates(::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get_m_serializedStates() const;


// Properties

 ::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_SerializedStates))  SerializedStates;


// Methods

// Ctor Parameters [CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SafeSerializationEventArgs(::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2350b58 size 0xb8 virtual false final false
 void _ctor(::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_SerializedStates addr 0x2350c10 size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> get_SerializedStates() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SafeSerializationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SafeSerializationEventArgs, "System.Runtime.Serialization", "SafeSerializationEventArgs");
