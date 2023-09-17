#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Net {
class TransportContext;
}
// Type: System.Net::TransportContext
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7935))
// CS Name: System.Net.TransportContext
class CORDL_TYPE TransportContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TransportContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: " const&", def_value: None }]
constexpr TransportContext(TransportContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransportContext", modifiers: "&&", def_value: None }]
constexpr TransportContext(TransportContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransportContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransportContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransportContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransportContext& operator=(TransportContext&& o) noexcept = default;
  constexpr TransportContext& operator=(TransportContext const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::TransportContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TransportContext, "System.Net", "TransportContext");
