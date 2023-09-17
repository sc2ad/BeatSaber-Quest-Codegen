#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting {
class FormatterData;
}
// Type: System.Runtime.Remoting::FormatterData
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3063))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3064))
// CS Name: System.Runtime.Remoting.FormatterData
class CORDL_TYPE FormatterData : public ::System::Runtime::Remoting::ProviderData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FormatterData() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterData", modifiers: " const&", def_value: None }]
constexpr FormatterData(FormatterData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterData", modifiers: "&&", def_value: None }]
constexpr FormatterData(FormatterData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormatterData(void* ptr) noexcept : ::System::Runtime::Remoting::ProviderData(ptr) {
}


  constexpr FormatterData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormatterData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormatterData& operator=(FormatterData&& o) noexcept = default;
  constexpr FormatterData& operator=(FormatterData const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FormatterData() ;

/// @brief Method .ctor addr 0x23223a8 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::FormatterData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::FormatterData, "System.Runtime.Remoting", "FormatterData");
