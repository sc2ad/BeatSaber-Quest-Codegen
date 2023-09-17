#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SurrogateForCyclicalReference;
}
// Type: System.Runtime.Serialization::SurrogateForCyclicalReference
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3210))
// CS Name: System.Runtime.Serialization.SurrogateForCyclicalReference
class CORDL_TYPE SurrogateForCyclicalReference : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializationSurrogate
constexpr operator  ::System::Runtime::Serialization::ISerializationSurrogate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SurrogateForCyclicalReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: " const&", def_value: None }]
constexpr SurrogateForCyclicalReference(SurrogateForCyclicalReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SurrogateForCyclicalReference", modifiers: "&&", def_value: None }]
constexpr SurrogateForCyclicalReference(SurrogateForCyclicalReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SurrogateForCyclicalReference(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SurrogateForCyclicalReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SurrogateForCyclicalReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SurrogateForCyclicalReference& operator=(SurrogateForCyclicalReference&& o) noexcept = default;
  constexpr SurrogateForCyclicalReference& operator=(SurrogateForCyclicalReference const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Serialization::ISerializationSurrogate __declspec(property(get=__get_innerSurrogate, put=__set_innerSurrogate))  innerSurrogate;

constexpr void __set_innerSurrogate(::System::Runtime::Serialization::ISerializationSurrogate value) ;

constexpr ::System::Runtime::Serialization::ISerializationSurrogate __get_innerSurrogate() const;


// Methods

/// @brief Method GetObjectData addr 0x234c0fc size 0xd0 virtual true final true
 void GetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SetObjectData addr 0x234c1cc size 0xdc virtual true final true
 ::bs_hook::Il2CppWrapperType SetObjectData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ISurrogateSelector selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::SurrogateForCyclicalReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SurrogateForCyclicalReference, "System.Runtime.Serialization", "SurrogateForCyclicalReference");
