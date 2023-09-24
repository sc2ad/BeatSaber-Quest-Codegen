#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Diagnostics {
class TraceFilter;
}
namespace System::Diagnostics {
struct TraceOptions;
}
namespace System::Diagnostics {
class TraceEventCache;
}
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListener;
}
// Type: System.Diagnostics::TraceListener
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7794))
// CS Name: System.Diagnostics.TraceListener
class CORDL_TYPE TraceListener : public System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TraceListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: " const&", def_value: None }]
constexpr TraceListener(TraceListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: "&&", def_value: None }]
constexpr TraceListener(TraceListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceListener(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr TraceListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceListener& operator=(TraceListener&& o) noexcept = default;
  constexpr TraceListener& operator=(TraceListener const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_indentLevel, put=__set_indentLevel))  indentLevel;

constexpr void __set_indentLevel(int32_t value) ;

constexpr int32_t __get_indentLevel() const;

 int32_t __declspec(property(get=__get_indentSize, put=__set_indentSize))  indentSize;

constexpr void __set_indentSize(int32_t value) ;

constexpr int32_t __get_indentSize() const;

 System::Diagnostics::TraceOptions __declspec(property(get=__get_traceOptions, put=__set_traceOptions))  traceOptions;

constexpr void __set_traceOptions(System::Diagnostics::TraceOptions value) ;

constexpr System::Diagnostics::TraceOptions __get_traceOptions() const;

 bool __declspec(property(get=__get_needIndent, put=__set_needIndent))  needIndent;

constexpr void __set_needIndent(bool value) ;

constexpr bool __get_needIndent() const;

 ::StringW __declspec(property(get=__get_listenerName, put=__set_listenerName))  listenerName;

constexpr void __set_listenerName(::StringW value) ;

constexpr ::StringW __get_listenerName() const;

 System::Diagnostics::TraceFilter __declspec(property(get=__get_filter, put=__set_filter))  filter;

constexpr void __set_filter(System::Diagnostics::TraceFilter value) ;

constexpr System::Diagnostics::TraceFilter __get_filter() const;


// Properties

 bool __declspec(property(get=get_IsThreadSafe))  IsThreadSafe;

 int32_t __declspec(property(put=set_IndentLevel))  IndentLevel;

 int32_t __declspec(property(put=set_IndentSize))  IndentSize;

 System::Diagnostics::TraceFilter __declspec(property(get=get_Filter))  Filter;

 bool __declspec(property(get=get_NeedIndent, put=set_NeedIndent))  NeedIndent;

 System::Diagnostics::TraceOptions __declspec(property(get=get_TraceOutputOptions))  TraceOutputOptions;


// Methods

static System::Diagnostics::TraceListener New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x27db288 size 0x38 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_IsThreadSafe addr 0x27db2c0 size 0x8 virtual true final false
 bool get_IsThreadSafe() ;

/// @brief Method Dispose addr 0x27db2c8 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x27db334 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Flush addr 0x27db338 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method set_IndentLevel addr 0x27daf48 size 0x1c virtual false final false
 void set_IndentLevel(int32_t value) ;

/// @brief Method set_IndentSize addr 0x27daf64 size 0xac virtual false final false
 void set_IndentSize(int32_t value) ;

/// @brief Method get_Filter addr 0x27db33c size 0x8 virtual false final false
 System::Diagnostics::TraceFilter get_Filter() ;

/// @brief Method get_NeedIndent addr 0x27db344 size 0x8 virtual false final false
 bool get_NeedIndent() ;

/// @brief Method set_NeedIndent addr 0x27db34c size 0xc virtual false final false
 void set_NeedIndent(bool value) ;

/// @brief Method get_TraceOutputOptions addr 0x27db358 size 0x8 virtual false final false
 System::Diagnostics::TraceOptions get_TraceOutputOptions() ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual true final false
 void Write(::StringW message) ;

/// @brief Method WriteIndent addr 0x27db360 size 0xd4 virtual true final false
 void WriteIndent() ;

/// @brief Method WriteLine addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteLine(::StringW message) ;

/// @brief Method TraceEvent addr 0x27db434 size 0xc4 virtual true final false
 void TraceEvent(System::Diagnostics::TraceEventCache eventCache, ::StringW source, System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW message) ;

/// @brief Method WriteHeader addr 0x27db4f8 size 0x110 virtual false final false
 void WriteHeader(::StringW source, System::Diagnostics::TraceEventType eventType, int32_t id) ;

/// @brief Method WriteFooter addr 0x27db608 size 0x5a0 virtual false final false
 void WriteFooter(System::Diagnostics::TraceEventCache eventCache) ;

/// @brief Method IsEnabled addr 0x27dbba8 size 0x10 virtual false final false
 bool IsEnabled(System::Diagnostics::TraceOptions opts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::TraceListener);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListener, "System.Diagnostics", "TraceListener");
