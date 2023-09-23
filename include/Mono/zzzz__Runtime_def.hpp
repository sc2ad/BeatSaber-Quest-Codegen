#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Mono {
class Runtime;
}
// Type: Mono::Runtime
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2227))
// CS Name: Mono.Runtime
class CORDL_TYPE Runtime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Runtime() = default;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: " const&", def_value: None }]
constexpr Runtime(Runtime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "&&", def_value: None }]
constexpr Runtime(Runtime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Runtime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Runtime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Runtime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Runtime& operator=(Runtime&& o) noexcept = default;
  constexpr Runtime& operator=(Runtime const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_dump, put=__set_dump))  dump;

static void __set_dump(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_dump() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::Runtime);
DEFINE_IL2CPP_ARG_TYPE(Mono::Runtime, "Mono", "Runtime");
