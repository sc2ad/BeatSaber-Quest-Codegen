#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System {
class Exception;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Diagnostics {
struct TraceLevel;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DiagnosticsTraceWriter;
}
// Type: Newtonsoft.Json.Serialization::DiagnosticsTraceWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11846))
// CS Name: Newtonsoft.Json.Serialization.DiagnosticsTraceWriter
class CORDL_TYPE DiagnosticsTraceWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Serialization::ITraceWriter
constexpr operator  ::Newtonsoft::Json::Serialization::ITraceWriter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DiagnosticsTraceWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: " const&", def_value: None }]
constexpr DiagnosticsTraceWriter(DiagnosticsTraceWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsTraceWriter", modifiers: "&&", def_value: None }]
constexpr DiagnosticsTraceWriter(DiagnosticsTraceWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticsTraceWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiagnosticsTraceWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticsTraceWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticsTraceWriter& operator=(DiagnosticsTraceWriter&& o) noexcept = default;
  constexpr DiagnosticsTraceWriter& operator=(DiagnosticsTraceWriter const& o) noexcept = default;
                


// Fields

 ::System::Diagnostics::TraceLevel __declspec(property(get=__get__LevelFilter_k__BackingField, put=__set__LevelFilter_k__BackingField))  _LevelFilter_k__BackingField;

constexpr void __set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value) ;

constexpr ::System::Diagnostics::TraceLevel __get__LevelFilter_k__BackingField() const;


// Properties

 ::System::Diagnostics::TraceLevel __declspec(property(get=get_LevelFilter, put=set_LevelFilter))  LevelFilter;


// Methods

/// @brief Method get_LevelFilter addr 0x24f232c size 0x8 virtual true final true
 ::System::Diagnostics::TraceLevel get_LevelFilter() ;

/// @brief Method set_LevelFilter addr 0x24f2334 size 0x8 virtual false final false
 void set_LevelFilter(::System::Diagnostics::TraceLevel value) ;

/// @brief Method GetTraceEventType addr 0x24f233c size 0x70 virtual false final false
 ::System::Diagnostics::TraceEventType GetTraceEventType(::System::Diagnostics::TraceLevel level) ;

/// @brief Method Trace addr 0x24f23ac size 0x470 virtual true final true
 void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception ex) ;

// Ctor Parameters []
explicit DiagnosticsTraceWriter() ;

/// @brief Method .ctor addr 0x24f281c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter, "Newtonsoft.Json.Serialization", "DiagnosticsTraceWriter");
