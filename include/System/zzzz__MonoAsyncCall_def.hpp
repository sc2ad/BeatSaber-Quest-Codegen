#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class MonoAsyncCall;
}
// Type: System::MonoAsyncCall
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2605))
// CS Name: System.MonoAsyncCall
class CORDL_TYPE MonoAsyncCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoAsyncCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: " const&", def_value: None }]
constexpr MonoAsyncCall(MonoAsyncCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "&&", def_value: None }]
constexpr MonoAsyncCall(MonoAsyncCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoAsyncCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoAsyncCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoAsyncCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoAsyncCall& operator=(MonoAsyncCall&& o) noexcept = default;
  constexpr MonoAsyncCall& operator=(MonoAsyncCall const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_msg, put=__set_msg))  msg;

constexpr void __set_msg(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_msg() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_cb_method, put=__set_cb_method))  cb_method;

constexpr void __set_cb_method(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_cb_method() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_cb_target, put=__set_cb_target))  cb_target;

constexpr void __set_cb_target(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_cb_target() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_res, put=__set_res))  res;

constexpr void __set_res(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_res() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_out_args, put=__set_out_args))  out_args;

constexpr void __set_out_args(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_out_args() const;


// Methods

// Ctor Parameters []
explicit MonoAsyncCall() ;

/// @brief Method .ctor addr 0x248c0f4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MonoAsyncCall);
DEFINE_IL2CPP_ARG_TYPE(System::MonoAsyncCall, "System", "MonoAsyncCall");
