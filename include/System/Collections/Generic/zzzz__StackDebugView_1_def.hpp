#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class StackDebugView_1;
}
// Type: System.Collections.Generic::StackDebugView`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3842))
// CS Name: System.Collections.Generic.StackDebugView`1
class CORDL_TYPE StackDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StackDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackDebugView_1", modifiers: " const&", def_value: None }]
constexpr StackDebugView_1(StackDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackDebugView_1", modifiers: "&&", def_value: None }]
constexpr StackDebugView_1(StackDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackDebugView_1& operator=(StackDebugView_1&& o) noexcept = default;
  constexpr StackDebugView_1& operator=(StackDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::StackDebugView_1, "System.Collections.Generic", "StackDebugView`1");
