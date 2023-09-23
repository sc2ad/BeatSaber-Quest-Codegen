#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace System::Diagnostics {
struct TraceLevel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class MemoryTraceWriter;
}
// Type: Newtonsoft.Json.Serialization::MemoryTraceWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11850))
// CS Name: Newtonsoft.Json.Serialization.MemoryTraceWriter
class CORDL_TYPE MemoryTraceWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Serialization::ITraceWriter
constexpr operator  Newtonsoft::Json::Serialization::ITraceWriter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MemoryTraceWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: " const&", def_value: None }]
constexpr MemoryTraceWriter(MemoryTraceWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryTraceWriter", modifiers: "&&", def_value: None }]
constexpr MemoryTraceWriter(MemoryTraceWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryTraceWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryTraceWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryTraceWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryTraceWriter& operator=(MemoryTraceWriter&& o) noexcept = default;
  constexpr MemoryTraceWriter& operator=(MemoryTraceWriter const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Queue_1<::StringW> __declspec(property(get=__get__traceMessages, put=__set__traceMessages))  _traceMessages;

constexpr void __set__traceMessages(System::Collections::Generic::Queue_1<::StringW> value) ;

constexpr System::Collections::Generic::Queue_1<::StringW> __get__traceMessages() const;

 System::Diagnostics::TraceLevel __declspec(property(get=__get__LevelFilter_k__BackingField, put=__set__LevelFilter_k__BackingField))  _LevelFilter_k__BackingField;

constexpr void __set__LevelFilter_k__BackingField(System::Diagnostics::TraceLevel value) ;

constexpr System::Diagnostics::TraceLevel __get__LevelFilter_k__BackingField() const;


// Properties

 System::Diagnostics::TraceLevel __declspec(property(get=get_LevelFilter, put=set_LevelFilter))  LevelFilter;


// Methods

/// @brief Method get_LevelFilter addr 0x24f2994 size 0x8 virtual true final true
 System::Diagnostics::TraceLevel get_LevelFilter() ;

/// @brief Method set_LevelFilter addr 0x24f299c size 0x8 virtual false final false
 void set_LevelFilter(System::Diagnostics::TraceLevel value) ;

// Ctor Parameters []
explicit MemoryTraceWriter() ;

/// @brief Method .ctor addr 0x24f29a4 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method Trace addr 0x24f2a2c size 0x230 virtual true final true
 void Trace(System::Diagnostics::TraceLevel level, ::StringW message, System::Exception ex) ;

/// @brief Method GetTraceMessages addr 0x24f2c5c size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<::StringW> GetTraceMessages() ;

/// @brief Method ToString addr 0x24f2c64 size 0x1b8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::MemoryTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::MemoryTraceWriter, "Newtonsoft.Json.Serialization", "MemoryTraceWriter");
