#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Reflection::Emit {
class ParameterBuilder;
}
// Type: System.Reflection.Emit::ParameterBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3537))
// CS Name: System.Reflection.Emit.ParameterBuilder
class CORDL_TYPE ParameterBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ParameterBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterBuilder", modifiers: " const&", def_value: None }]
constexpr ParameterBuilder(ParameterBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterBuilder", modifiers: "&&", def_value: None }]
constexpr ParameterBuilder(ParameterBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParameterBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParameterBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParameterBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParameterBuilder& operator=(ParameterBuilder&& o) noexcept = default;
  constexpr ParameterBuilder& operator=(ParameterBuilder const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::ParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::ParameterBuilder, "System.Reflection.Emit", "ParameterBuilder");
