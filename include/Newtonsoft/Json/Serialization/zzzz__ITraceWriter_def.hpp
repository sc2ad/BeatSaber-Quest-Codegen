#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Diagnostics {
struct TraceLevel;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
// Type: Newtonsoft.Json.Serialization::ITraceWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11848))
// CS Name: Newtonsoft.Json.Serialization.ITraceWriter
class CORDL_TYPE ITraceWriter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITraceWriter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITraceWriter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Diagnostics::TraceLevel __declspec(property(get=get_LevelFilter))  LevelFilter;


// Methods

/// @brief Method get_LevelFilter addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Diagnostics::TraceLevel get_LevelFilter() ;

/// @brief Method Trace addr 0x0 size 0xffffffffffffffff virtual true final false
 void Trace(System::Diagnostics::TraceLevel level, ::StringW message, System::Exception ex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ITraceWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ITraceWriter, "Newtonsoft.Json.Serialization", "ITraceWriter");
