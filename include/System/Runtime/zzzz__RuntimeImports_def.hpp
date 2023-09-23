#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime {
class RuntimeImports;
}
// Type: System.Runtime::RuntimeImports
namespace System::Runtime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3047))
// CS Name: System.Runtime.RuntimeImports
class CORDL_TYPE RuntimeImports : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeImports() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: " const&", def_value: None }]
constexpr RuntimeImports(RuntimeImports const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "&&", def_value: None }]
constexpr RuntimeImports(RuntimeImports&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeImports(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeImports& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeImports& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeImports& operator=(RuntimeImports&& o) noexcept = default;
  constexpr RuntimeImports& operator=(RuntimeImports const& o) noexcept = default;
                


// Methods

/// @brief Method RhZeroMemory addr 0x2319a30 size 0x4 virtual false final false
static void RhZeroMemory(ByRef<uint8_t> b, uint64_t byteLength) ;

/// @brief Method ZeroMemory addr 0x2319a34 size 0x4 virtual false final false
static void ZeroMemory(void* p, uint32_t byteLength) ;

/// @brief Method Memmove addr 0x2319a38 size 0x4 virtual false final false
static void Memmove(void* dest, void* src, uint32_t len) ;

/// @brief Method Memmove_wbarrier addr 0x2319a3c size 0x4 virtual false final false
static void Memmove_wbarrier(void* dest, void* src, uint32_t len, ::cordl_internals::intptr_t type_handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime
NEED_NO_BOX(System::Runtime::RuntimeImports);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::RuntimeImports, "System.Runtime", "RuntimeImports");
