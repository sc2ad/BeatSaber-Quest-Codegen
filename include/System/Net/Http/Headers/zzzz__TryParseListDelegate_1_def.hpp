#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T>
class TryParseListDelegate_1;
}
namespace System::Net::Http::Headers {
template<::cordl_internals::il2cpp_reference_type T>
class TryParseListDelegate_1<T>;
}
// Type: System.Net.Http.Headers::TryParseListDelegate`1
// Type: System.Net.Http.Headers::TryParseListDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14828), inst: 2 })
// CS Name: System.Net.Http.Headers.TryParseListDelegate`1
class CORDL_TYPE TryParseListDelegate_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseListDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseListDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseListDelegate_1(TryParseListDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseListDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseListDelegate_1(TryParseListDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseListDelegate_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr TryParseListDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseListDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseListDelegate_1& operator=(TryParseListDelegate_1&& o) noexcept = default;
  constexpr TryParseListDelegate_1& operator=(TryParseListDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseListDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<T>> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::TryParseListDelegate_1, "System.Net.Http.Headers", "TryParseListDelegate`1");
