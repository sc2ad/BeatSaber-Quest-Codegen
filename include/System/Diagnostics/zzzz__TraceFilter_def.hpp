#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Diagnostics {
struct TraceEventType;
}
namespace System::Diagnostics {
class TraceEventCache;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceFilter;
}
// Type: System.Diagnostics::TraceFilter
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7791))
// CS Name: System.Diagnostics.TraceFilter
class CORDL_TYPE TraceFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TraceFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceFilter", modifiers: " const&", def_value: None }]
constexpr TraceFilter(TraceFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TraceFilter", modifiers: "&&", def_value: None }]
constexpr TraceFilter(TraceFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TraceFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TraceFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TraceFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TraceFilter& operator=(TraceFilter&& o) noexcept = default;
  constexpr TraceFilter& operator=(TraceFilter const& o) noexcept = default;
                


// Methods

/// @brief Method ShouldTrace addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldTrace(System::Diagnostics::TraceEventCache cache, ::StringW source, System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::bs_hook::Il2CppWrapperType data1, ::ArrayW<::bs_hook::Il2CppWrapperType> data) ;

/// @brief Method ShouldTrace addr 0x27dae44 size 0x2c virtual false final false
 bool ShouldTrace(System::Diagnostics::TraceEventCache cache, ::StringW source, System::Diagnostics::TraceEventType eventType, int32_t id, ::StringW formatOrMessage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::TraceFilter);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceFilter, "System.Diagnostics", "TraceFilter");
