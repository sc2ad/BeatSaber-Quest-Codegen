#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RuntimeFeature;
}
// Type: System.Runtime.CompilerServices::RuntimeFeature
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3374))
// CS Name: System.Runtime.CompilerServices.RuntimeFeature
class CORDL_TYPE RuntimeFeature : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: " const&", def_value: None }]
constexpr RuntimeFeature(RuntimeFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFeature", modifiers: "&&", def_value: None }]
constexpr RuntimeFeature(RuntimeFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeFeature(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeFeature& operator=(RuntimeFeature&& o) noexcept = default;
  constexpr RuntimeFeature& operator=(RuntimeFeature const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_IsDynamicCodeSupported))  IsDynamicCodeSupported;


// Methods

/// @brief Method get_IsDynamicCodeSupported addr 0x236e11c size 0x8 virtual false final false
static bool get_IsDynamicCodeSupported() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::RuntimeFeature);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeFeature, "System.Runtime.CompilerServices", "RuntimeFeature");
