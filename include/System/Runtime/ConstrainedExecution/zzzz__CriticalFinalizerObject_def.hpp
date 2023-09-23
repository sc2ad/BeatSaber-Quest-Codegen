#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class CriticalFinalizerObject;
}
// Type: System.Runtime.ConstrainedExecution::CriticalFinalizerObject
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3347))
// CS Name: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
class CORDL_TYPE CriticalFinalizerObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CriticalFinalizerObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "CriticalFinalizerObject", modifiers: " const&", def_value: None }]
constexpr CriticalFinalizerObject(CriticalFinalizerObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CriticalFinalizerObject", modifiers: "&&", def_value: None }]
constexpr CriticalFinalizerObject(CriticalFinalizerObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CriticalFinalizerObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CriticalFinalizerObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CriticalFinalizerObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CriticalFinalizerObject& operator=(CriticalFinalizerObject&& o) noexcept = default;
  constexpr CriticalFinalizerObject& operator=(CriticalFinalizerObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CriticalFinalizerObject() ;

/// @brief Method .ctor addr 0x236b07c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x236d984 size 0x8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ConstrainedExecution
NEED_NO_BOX(System::Runtime::ConstrainedExecution::CriticalFinalizerObject);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::CriticalFinalizerObject, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
