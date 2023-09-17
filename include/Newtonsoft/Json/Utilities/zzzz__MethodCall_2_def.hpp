#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
namespace Newtonsoft::Json::Utilities {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TResult>
class MethodCall_2<T,TResult>;
}
// Type: Newtonsoft.Json.Utilities::MethodCall`2
// Type: Newtonsoft.Json.Utilities::MethodCall`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11802)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11802), inst: 80 })
// CS Name: Newtonsoft.Json.Utilities.MethodCall`2
class CORDL_TYPE MethodCall_2<T,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MethodCall_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall_2", modifiers: " const&", def_value: None }]
constexpr MethodCall_2(MethodCall_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall_2", modifiers: "&&", def_value: None }]
constexpr MethodCall_2(MethodCall_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodCall_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr MethodCall_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodCall_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodCall_2& operator=(MethodCall_2&& o) noexcept = default;
  constexpr MethodCall_2& operator=(MethodCall_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MethodCall_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T target, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(T target, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::MethodCall_2, "Newtonsoft.Json.Utilities", "MethodCall`2");
