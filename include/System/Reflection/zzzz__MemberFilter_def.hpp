#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Reflection {
class MemberFilter;
}
// Type: System.Reflection::MemberFilter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3465))
// CS Name: System.Reflection.MemberFilter
class CORDL_TYPE MemberFilter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MemberFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberFilter", modifiers: " const&", def_value: None }]
constexpr MemberFilter(MemberFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberFilter", modifiers: "&&", def_value: None }]
constexpr MemberFilter(MemberFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberFilter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr MemberFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberFilter& operator=(MemberFilter&& o) noexcept = default;
  constexpr MemberFilter& operator=(MemberFilter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MemberFilter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x237a618 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x237a748 size 0x14 virtual true final false
 bool Invoke(System::Reflection::MemberInfo m, ::bs_hook::Il2CppWrapperType filterCriteria) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::MemberFilter);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MemberFilter, "System.Reflection", "MemberFilter");
