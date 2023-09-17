#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Reflection::Emit {
class EventBuilder;
}
// Type: System.Reflection.Emit::EventBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3530))
// CS Name: System.Reflection.Emit.EventBuilder
class CORDL_TYPE EventBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EventBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBuilder", modifiers: " const&", def_value: None }]
constexpr EventBuilder(EventBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBuilder", modifiers: "&&", def_value: None }]
constexpr EventBuilder(EventBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBuilder& operator=(EventBuilder&& o) noexcept = default;
  constexpr EventBuilder& operator=(EventBuilder const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Emit::EventBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::EventBuilder, "System.Reflection.Emit", "EventBuilder");
