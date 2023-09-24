#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IFormatter;
}
// Type: System.Runtime.Serialization::IFormatter
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3211))
// CS Name: System.Runtime.Serialization.IFormatter
class CORDL_TYPE IFormatter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFormatter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFormatter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(put=set_SurrogateSelector))  SurrogateSelector;


// Methods

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Serialize(System::IO::Stream serializationStream, ::bs_hook::Il2CppWrapperType graph) ;

/// @brief Method set_SurrogateSelector addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::IFormatter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatter, "System.Runtime.Serialization", "IFormatter");
