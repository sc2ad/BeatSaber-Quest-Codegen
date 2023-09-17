#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class QueueDebugView_1;
}
// Type: System.Collections.Generic::QueueDebugView`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3839))
// CS Name: System.Collections.Generic.QueueDebugView`1
class CORDL_TYPE QueueDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QueueDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueDebugView_1", modifiers: " const&", def_value: None }]
constexpr QueueDebugView_1(QueueDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueDebugView_1", modifiers: "&&", def_value: None }]
constexpr QueueDebugView_1(QueueDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QueueDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QueueDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QueueDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QueueDebugView_1& operator=(QueueDebugView_1&& o) noexcept = default;
  constexpr QueueDebugView_1& operator=(QueueDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::QueueDebugView_1, "System.Collections.Generic", "QueueDebugView`1");
