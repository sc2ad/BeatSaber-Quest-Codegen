#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class JitHelpers;
}
// Type: System.Runtime.CompilerServices::JitHelpers
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3410))
// CS Name: System.Runtime.CompilerServices.JitHelpers
class CORDL_TYPE JitHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JitHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "JitHelpers", modifiers: " const&", def_value: None }]
constexpr JitHelpers(JitHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JitHelpers", modifiers: "&&", def_value: None }]
constexpr JitHelpers(JitHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JitHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JitHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JitHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JitHelpers& operator=(JitHelpers&& o) noexcept = default;
  constexpr JitHelpers& operator=(JitHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method UnsafeCast addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T UnsafeCast(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnsafeEnumCast addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t UnsafeEnumCast(T val) ;

/// @brief Method UnsafeEnumCastLong addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int64_t UnsafeEnumCastLong(T val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::JitHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::JitHelpers, "System.Runtime.CompilerServices", "JitHelpers");
