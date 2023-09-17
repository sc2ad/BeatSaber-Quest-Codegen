#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System {
template<typename T>
class SpanDebugView_1;
}
// Type: System::SpanDebugView`1
namespace System {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2470))
// CS Name: System.SpanDebugView`1
class CORDL_TYPE SpanDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SpanDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanDebugView_1", modifiers: " const&", def_value: None }]
constexpr SpanDebugView_1(SpanDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanDebugView_1", modifiers: "&&", def_value: None }]
constexpr SpanDebugView_1(SpanDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SpanDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanDebugView_1& operator=(SpanDebugView_1&& o) noexcept = default;
  constexpr SpanDebugView_1& operator=(SpanDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::SpanDebugView_1, "System", "SpanDebugView`1");
